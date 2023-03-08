PROJECT = rp2040-blink

# CFILES = main.c
CFILES = uart.c
# CFILES = cdcacm.c

LDSCRIPT = $(OPENCM3_DIR)/lib/rp2040/libopencm3_rp2040.ld
LIBNAME = opencm3_rp2040

CFLAGS     = -DRP2040_FLASH_GENERIC_03H
FP_FLAGS   = -msoft-float
ARCH_FLAGS = -mcpu=cortex-m0plus $(FP_FLAGS)
export CFLAGS FP_FLAGS ARCH_FLAGS

BMP_PORT = /dev/ttyBmpGdb

include ../rules.mk
