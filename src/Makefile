PROJECT = rp2040-blink
BUILD_DIR = bin

CFILES = main.c
AFILES += boot2.S

DEVICE=rp2040

OPENCM3_DIR=../../../libopencm3

include $(OPENCM3_DIR)/mk/genlink-config.mk
include ../rules.mk
include $(OPENCM3_DIR)/mk/genlink-rules.mk
