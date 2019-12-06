################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./tm4c123gh6pm_startup_ccs.obj" \
"./MCAL/Dio/src/Dio.obj" \
"./MCAL/Nvic/cfg/Nvic_Lcfg.obj" \
"./MCAL/Nvic/src/Nvic.obj" \
"./MCAL/Port/cfg/src/Port_Lcfg.obj" \
"./MCAL/Port/src/Port.obj" \
"./MCAL/SystCtrl/cfg/src/SystCtrl_Lcfg.obj" \
"./MCAL/SystCtrl/src/SystCtrl.obj" \
"./MCAL/Systick/src/Systick.obj" \
"./lib/globalInterrupt/src/GInterrupt.obj" \
"../tm4c123gh6pm.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include MCAL/Dio/src/subdir_vars.mk
-include MCAL/Nvic/cfg/subdir_vars.mk
-include MCAL/Nvic/src/subdir_vars.mk
-include MCAL/Port/cfg/src/subdir_vars.mk
-include MCAL/Port/src/subdir_vars.mk
-include MCAL/SystCtrl/cfg/src/subdir_vars.mk
-include MCAL/SystCtrl/src/subdir_vars.mk
-include MCAL/Systick/src/subdir_vars.mk
-include lib/globalInterrupt/src/subdir_vars.mk
-include subdir_rules.mk
-include MCAL/Dio/src/subdir_rules.mk
-include MCAL/Nvic/cfg/subdir_rules.mk
-include MCAL/Nvic/src/subdir_rules.mk
-include MCAL/Port/cfg/src/subdir_rules.mk
-include MCAL/Port/src/subdir_rules.mk
-include MCAL/SystCtrl/cfg/src/subdir_rules.mk
-include MCAL/SystCtrl/src/subdir_rules.mk
-include MCAL/Systick/src/subdir_rules.mk
-include lib/globalInterrupt/src/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
FirstProjectTivaC.out \

EXE_OUTPUTS__QUOTED += \
"FirstProjectTivaC.out" \

BIN_OUTPUTS += \
FirstProjectTivaC.hex \

BIN_OUTPUTS__QUOTED += \
"FirstProjectTivaC.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "FirstProjectTivaC.out"

# Tool invocations
FirstProjectTivaC.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"FirstProjectTivaC.map" --heap_size=0 --stack_size=512 -i"C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/lib" -i"C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="FirstProjectTivaC_linkInfo.xml" --rom_model -o "FirstProjectTivaC.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

FirstProjectTivaC.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/bin/armhex"  -o "FirstProjectTivaC.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "tm4c123gh6pm_startup_ccs.obj" "MCAL\Dio\src\Dio.obj" "MCAL\Nvic\cfg\Nvic_Lcfg.obj" "MCAL\Nvic\src\Nvic.obj" "MCAL\Port\cfg\src\Port_Lcfg.obj" "MCAL\Port\src\Port.obj" "MCAL\SystCtrl\cfg\src\SystCtrl_Lcfg.obj" "MCAL\SystCtrl\src\SystCtrl.obj" "MCAL\Systick\src\Systick.obj" "lib\globalInterrupt\src\GInterrupt.obj" 
	-$(RM) "main.d" "tm4c123gh6pm_startup_ccs.d" "MCAL\Dio\src\Dio.d" "MCAL\Nvic\cfg\Nvic_Lcfg.d" "MCAL\Nvic\src\Nvic.d" "MCAL\Port\cfg\src\Port_Lcfg.d" "MCAL\Port\src\Port.d" "MCAL\SystCtrl\cfg\src\SystCtrl_Lcfg.d" "MCAL\SystCtrl\src\SystCtrl.d" "MCAL\Systick\src\Systick.d" "lib\globalInterrupt\src\GInterrupt.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

