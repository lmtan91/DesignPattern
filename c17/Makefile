
TOPDIR := ..

TARGET_PROGS =
TARGET_PROGS += tracerTest

INCDIRS =
INCDIRS += .
INCDIRS += ..
INCDIRS += ../include


CFLAGS_PROG += -DBIT_IS_DEBUG -DBIT_HAS_DEBUG_COLORS
CFLAGS_PROG += -DBIT_IS_STB -std=c++11


BIT_SRCS =
BIT_SRCS += TracerTest.cpp

SRCS_tracerTest = $(BIT_SRCS)

include $(TOPDIR)/jhbuild/Make.Defaults
include $(TOPDIR)/jhbuild/Make.Rules


