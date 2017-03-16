
TOPDIR := ..

TARGET_PROGS =
TARGET_PROGS += observerTest

INCDIRS =
INCDIRS += .
INCDIRS += ..
INCDIRS += ../include


CFLAGS_PROG += -DBIT_IS_DEBUG -DBIT_HAS_DEBUG_COLORS
CFLAGS_PROG += -DBIT_IS_STB 


BIT_SRCS =
BIT_SRCS += ObserverTest.cpp
BIT_SRCS += ClockTimer.cpp
BIT_SRCS += DigitalClock.cpp
BIT_SRCS += Subject.cpp

SRCS_observerTest= $(BIT_SRCS)

include $(TOPDIR)/jhbuild/Make.Defaults
include $(TOPDIR)/jhbuild/Make.Rules


