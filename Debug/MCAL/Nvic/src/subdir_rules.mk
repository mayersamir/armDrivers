################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
MCAL/Nvic/src/%.obj: ../MCAL/Nvic/src/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/MCAL/Systick/cfg" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/MCAL/Systick/inc" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/MCAL/SystCtrl/cfg" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/MCAL/SystCtrl/inc" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/MCAL/Dio/inc" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/MCAL/Port/cfg/inc" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/MCAL/Port/inc" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/MCAL/Nvic/cfg" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/MCAL/Nvic/inc" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/lib/globalInterrupt" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/lib/globalInterrupt/inc" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/lib/RegisterManipulation" --include_path="C:/Users/AVE-LAP-070/ArmProjects(Tiva)/FirstProjectTivaC/lib/Types" --include_path="C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="MCAL/Nvic/src/$(basename $(<F)).d_raw" --obj_directory="MCAL/Nvic/src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


