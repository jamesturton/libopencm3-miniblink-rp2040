PROJECT = rp2040-blink

CFILES = main.c
AFILES += boot2.S

CPPFLAGS = -DRP2040_FLASH_GENERIC_03H

LDSCRIPT = ../rp2040.ld
# LDSCRIPT = $(OPENCM3_DIR)/lib/rp2040/libopencm3_rp2040.ld
LIBNAME = opencm3_rp2040

FP_FLAGS	?= -msoft-float
ARCH_FLAGS	= -mcpu=cortex-m0plus $(FP_FLAGS)

include ../rules.mk
