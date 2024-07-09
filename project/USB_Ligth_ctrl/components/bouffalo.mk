include $(BL60X_SDK_PATH)/components/network/ble/ble_common.mk

COMPONENT_ADD_INCLUDEDIRS += ../../../HomeAssistant/HomeAssistant-C
COMPONENT_ADD_INCLUDEDIRS += wifi flash device_state homeAssistant

COMPONENT_SRCDIRS += ../../../HomeAssistant/HomeAssistant-C
COMPONENT_SRCDIRS += wifi flash device_state homeAssistant

COMPONENT_OBJS := $(patsubst %.c,%.o, $(COMPONENT_SRCS))