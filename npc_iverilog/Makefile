VERSION=IV
TOP=top_dut

#VFILE += $(shell find $(NPC_$(VERSION)_HOME)/vfile -type f -name "*_dut.v") \
#		 $(NPC_$(VERSION)_HOME)/vfile/macro.v
VFILE=$(NPC_$(VERSION)_HOME)/vfile/$(TOP).v
TB += $(NPC_$(VERSION)_HOME)/vfile/$(TOP)_tb.v
VVP = ./$(TOP)

SEARCH_PATH = $(NPC_$(VERSION)_HOME)/vfile
INCLUDES = $(foreach dir, $(SEARCH_PATH), -I$(dir))

iverilog:
	iverilog -o $(VVP) $(TB) $(VFILE) $(INCLUDES)

sim:
	vvp -n $(VVP) -lxt2
