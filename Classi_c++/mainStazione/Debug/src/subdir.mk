################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Orario.cpp \
../src/Stazione.cpp \
../src/Treno.cpp 

OBJS += \
./src/Orario.o \
./src/Stazione.o \
./src/Treno.o 

CPP_DEPS += \
./src/Orario.d \
./src/Stazione.d \
./src/Treno.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


