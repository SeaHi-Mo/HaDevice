COMPONENT_ADD_INCLUDEDIRS := ../../HomeAssistant/HomeAssistant-C


COMPONENT_SRCDIRS := ../../HomeAssistant/HomeAssistant-C


COMPONENT_OBJS := $(patsubst %.c,%.o, $(COMPONENT_SRCS))