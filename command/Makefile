
TOPDIR := ../..

TARGET_PROGS =
TARGET_PROGS += commandTest

INCDIRS =
INCDIRS += .
INCDIRS += ..
INCDIRS += ../include


CFLAGS_PROG += -DBIT_IS_DEBUG -DBIT_HAS_DEBUG_COLORS
CFLAGS_PROG += -DBIT_IS_STB -std=c++11


BIT_SRCS =
BIT_SRCS += Application.cpp
BIT_SRCS += Command.cpp
BIT_SRCS += Document.cpp
BIT_SRCS += MacroCommand.cpp
BIT_SRCS += main.cpp
BIT_SRCS += MyClass.cpp
BIT_SRCS += OpenCommand.cpp
BIT_SRCS += PasteCommand.cpp

SRCS_commandTest = $(BIT_SRCS)

include $(TOPDIR)/jhbuild/Make.Defaults
include $(TOPDIR)/jhbuild/Make.Rules


