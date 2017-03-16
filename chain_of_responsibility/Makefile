
TOPDIR := ../..

TARGET_PROGS =
TARGET_PROGS += chain_of_responsibilityTest 

INCDIRS =
INCDIRS += .


CFLAGS_PROG += -DBIT_IS_DEBUG -DBIT_HAS_DEBUG_COLORS
CFLAGS_PROG += -DBIT_IS_STB -std=c++11


BIT_SRCS =
BIT_SRCS += HelpHandler.cpp
BIT_SRCS += Widget.cpp
BIT_SRCS += Button.cpp
BIT_SRCS += Dialog.cpp
BIT_SRCS += Application.cpp
BIT_SRCS += chain_of_responsibilityTest.cpp

SRCS_chain_of_responsibilityTest = $(BIT_SRCS)

include $(TOPDIR)/jhbuild/Make.Defaults
include $(TOPDIR)/jhbuild/Make.Rules


