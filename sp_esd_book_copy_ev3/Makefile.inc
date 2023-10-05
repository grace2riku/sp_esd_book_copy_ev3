APPL_COBJS += SysCtrl.o Trace.o

# COPTS += -DMAKE_BT_DISABLE
INCLUDES += -I$(ETROBO_HRP3_WORKSPACE)/etroboc_common

mkfile_path := $(dir $(lastword $(MAKEFILE_LIST)))
APPL_DIRS += \
	$(mkfile_path)SysBoot $(mkfile_path)RoboApp

INCLUDES += \
	-I$(mkfile_path)SysBoot \
	-I$(mkfile_path)RoboApp