# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_23060229_top.mk

default: Vysyx_23060229_top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_23060229_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_23060229_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/jason/Desktop/ysyx-workbench/npc/wavesim_file \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/lib/x86_64-linux-gnu/libreadline.so \
	/lib/x86_64-linux-gnu/libSDL2.so \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	difftest \
	engine \
	gpu \
	keyboard \
	serial \
	timer \
	memory \
	register \
	expr \
	sdb \
	watchpoint \
	wavesim \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/jason/Desktop/ysyx-workbench/npc/wavesim_file \
	/home/jason/Desktop/ysyx-workbench/npc/wavesim_file/difftest \
	/home/jason/Desktop/ysyx-workbench/npc/wavesim_file/engine \
	/home/jason/Desktop/ysyx-workbench/npc/wavesim_file/memory \
	/home/jason/Desktop/ysyx-workbench/npc/wavesim_file/memory/devices \
	/home/jason/Desktop/ysyx-workbench/npc/wavesim_file/register \
	/home/jason/Desktop/ysyx-workbench/npc/wavesim_file/sdb \


### Default rules...
# Include list of all generated classes
include Vysyx_23060229_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

difftest.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/difftest/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
engine.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/engine/engine.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
gpu.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/memory/devices/gpu.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/memory/devices/keyboard.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/memory/devices/serial.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/memory/devices/timer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
memory.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/memory/memory.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
register.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/register/register.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/sdb/expr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/sdb/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/sdb/watchpoint.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
wavesim.o: /home/jason/Desktop/ysyx-workbench/npc/wavesim_file/wavesim.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vysyx_23060229_top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
