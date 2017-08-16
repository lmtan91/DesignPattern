
TOPDIR := ../..

TARGET_PROGS =
TARGET_PROGS += abstractFactoryTest

INCDIRS =
INCDIRS += .
INCDIRS += ..
INCDIRS += ../include


CFLAGS_PROG += -DBIT_IS_DEBUG -DBIT_HAS_DEBUG_COLORS
CFLAGS_PROG += -DBIT_IS_STB -std=c++11


BIT_SRCS =
BIT_SRCS += BomedMazeFactory.cpp
BIT_SRCS += BomedWall.cpp
BIT_SRCS += Door.cpp
BIT_SRCS += main.cpp
BIT_SRCS += Maze.cpp
BIT_SRCS += MazeFactory.cpp
BIT_SRCS += MazeGame.cpp
BIT_SRCS += Room.cpp
BIT_SRCS += RoomWithABomb.cpp
BIT_SRCS += Wall.cpp

SRCS_abstractFactoryTest = $(BIT_SRCS)

include $(TOPDIR)/jhbuild/Make.Defaults
include $(TOPDIR)/jhbuild/Make.Rules


