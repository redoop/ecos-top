ENTRY(_start)

MEMORY
{
    ROM (rx) : ORIGIN = 0x00000000, LENGTH = 64K
    RAM (rw) : ORIGIN = 0x10000000, LENGTH = 64K
}

SECTIONS
{
    .text : {
        *(.text)
    } > ROM
    
    .data : {
        *(.data)
    } > RAM
    
    .bss : {
        *(.bss)
    } > RAM
}
