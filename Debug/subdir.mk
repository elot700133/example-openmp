################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ex01.cpp \
../main.cpp \
../omp_hello.cpp \
../omp_mm.cpp \
../omp_orphans.cpp \
../omp_workshare1.cpp \
../omp_workshare2.cpp 

OBJS += \
./ex01.o \
./main.o \
./omp_hello.o \
./omp_mm.o \
./omp_orphans.o \
./omp_workshare1.o \
./omp_workshare2.o 

CPP_DEPS += \
./ex01.d \
./main.d \
./omp_hello.d \
./omp_mm.d \
./omp_orphans.d \
./omp_workshare1.d \
./omp_workshare2.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -fopenmp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


