APPL_COBJS +=  \
	SysCtrl.o  \
	Trace.o  \
	Course.o \
	Road.o \
	Sensor.o \

# COPTS += -DMAKE_BT_DISABLE
INCLUDES += -I$(ETROBO_HRP3_WORKSPACE)/etroboc_common

mkfile_path := $(dir $(lastword $(MAKEFILE_LIST)))
APPL_DIRS += \
	$(mkfile_path)SysBoot \
	$(mkfile_path)RoboApp \
	$(mkfile_path)InputCtrl \
	$(mkfile_path)DrvApi \

INCLUDES += \
	-I$(mkfile_path)SysBoot \
	-I$(mkfile_path)RoboApp \
	-I$(mkfile_path)InputCtrl \
	-I$(mkfile_path)DrvApi \
