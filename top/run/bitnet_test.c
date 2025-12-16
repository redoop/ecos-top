/*
 * BitNet Accelerator Test Program
 * Tests matrix multiplication functionality
 */

#include <stdint.h>

// BitNet Accelerator Register Map
#define BITNET_BASE_ADDR    0x10001000
#define CTRL_REG           (BITNET_BASE_ADDR + 0x00)
#define STATUS_REG         (BITNET_BASE_ADDR + 0x04) 
#define CONFIG_REG         (BITNET_BASE_ADDR + 0x20)
#define MATRIX_SIZE_REG    (BITNET_BASE_ADDR + 0x1C)
#define PERF_CYCLES_REG    (BITNET_BASE_ADDR + 0x08)
#define SPARSITY_REG       (BITNET_BASE_ADDR + 0x0C)
#define ERROR_CODE_REG     (BITNET_BASE_ADDR + 0x10)

// Memory regions
#define ACTIVATION_BASE    (BITNET_BASE_ADDR + 0x100)
#define WEIGHT_BASE        (BITNET_BASE_ADDR + 0x300) 
#define RESULT_BASE        (BITNET_BASE_ADDR + 0x500)

// Control register bits
#define CTRL_START         (1 << 0)

// Status register values
#define STATUS_IDLE        0
#define STATUS_RUNNING     1
#define STATUS_DONE        2
#define STATUS_ERROR       3

// Register access macros
#define REG_WRITE(addr, val) (*((volatile uint32_t*)(addr)) = (val))
#define REG_READ(addr)       (*((volatile uint32_t*)(addr)))

// Test matrices (8x8)
static const uint32_t test_activation[16] = {
    0x12345678, 0x9ABCDEF0,  // Row 0
    0x11111111, 0x22222222,  // Row 1
    0x33333333, 0x44444444,  // Row 2
    0x55555555, 0x66666666,  // Row 3
    0x77777777, 0x88888888,  // Row 4
    0x99999999, 0xAAAAAAAA,  // Row 5
    0xBBBBBBBB, 0xCCCCCCCC,  // Row 6
    0xDDDDDDDD, 0xEEEEEEEE   // Row 7
};

static const uint32_t test_weights[16] = {
    0x55555555, 0x55555555,  // Row 0: +1/-1 pattern
    0xAAAAAAAA, 0xAAAAAAAA,  // Row 1: -1/+1 pattern
    0x55555555, 0x55555555,  // Row 2: +1/-1 pattern
    0xAAAAAAAA, 0xAAAAAAAA,  // Row 3: -1/+1 pattern
    0x55555555, 0x55555555,  // Row 4: +1/-1 pattern
    0xAAAAAAAA, 0xAAAAAAAA,  // Row 5: -1/+1 pattern
    0x55555555, 0x55555555,  // Row 6: +1/-1 pattern
    0xAAAAAAAA, 0xAAAAAAAA   // Row 7: -1/+1 pattern
};

void wait_for_completion(void) {
    uint32_t status;
    uint32_t timeout = 100000;
    
    do {
        status = REG_READ(STATUS_REG);
        timeout--;
    } while (status == STATUS_RUNNING && timeout > 0);
}

int test_matrix_multiply_8x8(void) {
    uint32_t i, status, cycles, sparsity, error;
    
    // 1. Configure matrix size
    REG_WRITE(MATRIX_SIZE_REG, 8);
    
    // 2. Load activation matrix
    for (i = 0; i < 16; i++) {
        REG_WRITE(ACTIVATION_BASE + i*4, test_activation[i]);
    }
    
    // 3. Load weight matrix  
    for (i = 0; i < 16; i++) {
        REG_WRITE(WEIGHT_BASE + i*4, test_weights[i]);
    }
    
    // 4. Start computation
    REG_WRITE(CTRL_REG, CTRL_START);
    
    // 5. Wait for completion
    wait_for_completion();
    
    // 6. Check status
    status = REG_READ(STATUS_REG);
    error = REG_READ(ERROR_CODE_REG);
    cycles = REG_READ(PERF_CYCLES_REG);
    sparsity = REG_READ(SPARSITY_REG);
    
    if (status == STATUS_ERROR || error != 0) {
        return -1; // Test failed
    }
    
    return 0; // Test passed
}

int test_matrix_multiply_4x4(void) {
    uint32_t i, status, error;
    
    // Test with smaller matrix
    REG_WRITE(MATRIX_SIZE_REG, 4);
    
    // Load smaller test data
    for (i = 0; i < 8; i++) {
        REG_WRITE(ACTIVATION_BASE + i*4, test_activation[i]);
        REG_WRITE(WEIGHT_BASE + i*4, test_weights[i]);
    }
    
    REG_WRITE(CTRL_REG, CTRL_START);
    wait_for_completion();
    
    status = REG_READ(STATUS_REG);
    error = REG_READ(ERROR_CODE_REG);
    
    return (status == STATUS_ERROR || error != 0) ? -1 : 0;
}

int main(void) {
    int result = 0;
    
    // Test 1: 8x8 matrix multiplication
    if (test_matrix_multiply_8x8() != 0) {
        result = -1;
    }
    
    // Test 2: 4x4 matrix multiplication  
    if (test_matrix_multiply_4x4() != 0) {
        result = -1;
    }
    
    // Test 3: Error condition (invalid matrix size)
    REG_WRITE(MATRIX_SIZE_REG, 16); // Invalid size
    REG_WRITE(CTRL_REG, CTRL_START);
    wait_for_completion();
    
    uint32_t error = REG_READ(ERROR_CODE_REG);
    if (error == 0) {
        result = -1; // Should have generated error
    }
    
    return result;
}
