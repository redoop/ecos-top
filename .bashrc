# .bashrc
# Source global definitions
if [ -f /etc/bashrc ]; then
. /etc/bashrc
fi
# Uncomment the following line if you don't like systemctl's auto-paging feature:
# export SYSTEMD_PAGER=
# User specific aliases and functions
alias g="gvim"

###Synopsys
export SNPSLMD_LICENSE_FILE=27080@fireflyer-0003
export LM_LICENSE_FILE=/home/synopsys/scl/2024.06/admin/license/Synopsys.bat

alias ins='/home/synopsys/.installer/setup.sh'
#vcs
export VCS_HOME=/home/synopsys/vcs/W-2024.09-SP1
export PATH=$PATH:$VCS_HOME/bin

#verdi
export LD_LIBRARY_PATH=/home/synopsys/verdi/W-2024.09-SP1/share/PLI/VCS/LINUX64
export VERDI_HOME=/home/synopsys/verdi/W-2024.09-SP1
export PATH=$PATH:$VERDI_HOME/bin

#verdi_supp
export VERDI_SUPP_HOME=/home/synopsys/verdi_supp/W-2024.09-SP1
export PATH=$PATH:$VERDI_SUPP_HOME/bin

#scl
export SCL_HOME=/home/synopsys/scl/2024.06
export PATH=$PATH:$SCL_HOME/linux64/bin
export VCS_ARCH_OVERRIDE=linux

#syn (Design Compiler)
export DC_HOME=/home/synopsys/syn/W-2024.09-SP1
export PATH=$PATH:$DC_HOME/bin
## Spyglass

export SPYGLASS_HOME=/usr/Synopsys/spyglass/T-2022.06-1/

export PATH=$PATH:$SPYGLASS_HOME/bin
export SPYGLASS_DC_PATH=/usr/Synopsys/syn/T-2022.03-SP2
#coortools
export PATH="/usr/Synopsys/coretools/T-2022.06/bin":$PATH
alias ct="coreConsultant"
export DESIGNWARE_HOME=/home/autumn/Desktop/IP
#fm
export FM_HOME=/usr/Synopsys/fm/T-2022.03
export PATH=$PATH:$FM_HOME/bin
#pt
export PT_HOME=/usr/Synopsys/prime/T-2022.03
export PATH=$PATH:$PT_HOME/bin


#icc2
export ICC2_HOME=/usr/Synopsys/icc2/T-2022.03
export PATH=$PATH:$ICC2_HOME/bin
#icc
export ICC_HOME=/usr/Synopsys/icc/T-2022.03
export PATH=$PATH:$ICC_HOME/bin
#dft shell
export TESTMAX_MAX=/usr/Synopsys/testmax/S-2021.06-SP5


export PATH=$PATH:$TESTMAX_MAX/bin
#txs
export TXS_HOME=/usr/Synopsys/txs/R-2020.09-SP3
export PATH=$PATH:$TXS_HOME/bin
alias tmax='/usr/Synopsys/txs/R-2020.09-SP3/bin/tmax'
#starrc
export STARRC_HOME=/usr/Synopsys/starrc/T-2022.03-SP2
export PATH=$PATH:$STARRC_HOME/bin
#lic_compiler
export LC_HOME=/usr/Synopsys/lc/T-2022.03
export PATH=$PATH:$LC_HOME/bin
#embedit
export EMBEDIT_HOME=/usr/Synopsys/embedit/U-2022.12
export PATH=$PATH:$EMBEDIT_HOME/bin
#VC static
export VC_STATIC_HOME=/usr/Synopsys/vc_static/T-2022.06-SP2
export PATH=$PATH:$VC_STATIC_HOME/bin
alias lmg="/home/synopsys/scl/2024.06/linux64/bin/lmgrd -c /home/synopsys/scl/2024.06/admin/license/synopsys.lic -l /home/synopsys/scl/2024.06/admin/license/synopsys.log"

export RTL_PATH=/opt/github/ecos-top/top
