APPL_COBJS += SysCtrl.o
# COPTS += -DMAKE_BT_DISABLE
INCLUDES += -I$(ETROBO_HRP3_WORKSPACE)/etroboc_common

mkfile_path := $(dir $(lastword $(MAKEFILE_LIST)))
APPL_DIRS += $(mkfile_path)SysBoot

INCLUDES += \
	-I$(mkfile_path)SysBoot 