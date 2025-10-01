#COLOR_RED := $(shell echo "\033[1;31m")
#COLOR_END := $(shell echo "\033[0m")

#ifeq ($(wildcard .config),)
#$(warning $(COLOR_RED)Warning: .config does not exists!$(COLOR_END))
#$(warning $(COLOR_RED)To build the project, first run 'make menuconfig'.$(COLOR_END))
#endif

VERSION = V5

Q            := @
KCONFIG_PATH := $(NEMU_HOME)/tools/kconfig
FIXDEP_PATH  := $(NEMU_HOME)/tools/fixdep
Kconfig      := $(NPC_$(VERSION)_HOME)/config/Kconfig
#rm-distclean += include/generated include/config .config .config.old
silent := -s

CONF   := $(KCONFIG_PATH)/build/conf
MCONF  := $(KCONFIG_PATH)/build/mconf
FIXDEP := $(FIXDEP_PATH)/build/fixdep

$(CONF):
	$(Q)$(MAKE) $(silent) -C $(KCONFIG_PATH) NAME=conf

$(MCONF):
	$(Q)$(MAKE) $(silent) -C $(KCONFIG_PATH) NAME=mconf

$(FIXDEP):
	$(Q)$(MAKE) $(silent) -C $(FIXDEP_PATH)

menuconfig: $(MCONF) $(CONF) $(FIXDEP)
	$(Q)$(MCONF) $(Kconfig)
	$(Q)$(CONF) $(silent) --syncconfig $(Kconfig)
	@cp $(NPC_$(VERSION)_HOME)/.config $(NPC_$(VERSION)_HOME)/config/.config
	@$(NPC_$(VERSION)_HOME)/config/generate.sh


savedefconfig: $(CONF)
	$(Q)$< $(silent) --$@=configs/defconfig $(Kconfig)

%defconfig: $(CONF) $(FIXDEP)
	$(Q)$< $(silent) --defconfig=configs/$@ $(Kconfig)
	$(Q)$< $(silent) --syncconfig $(Kconfig)

.PHONY: menuconfig savedefconfig defconfig




