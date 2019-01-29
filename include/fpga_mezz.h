/*
// Title: fpga_mezz.h
// Author: Sahaj Sarup
// Copyright (c) 2019 Linaro Limited
*/

/* Register Defination */
#include "fpga_mezz_reg.h"

/* Macros for Multifunction IO Pins on the Arduino Header */
#define ARD_I2C_0_FUNC 0
#define ARD_SPI_FUNC 1
#define ARD_UART_FUNC 2
#define ARD_I2C_1_FUNC 3

/* I2C Bus used by the FPGA Mezzanine */
#define I2C_BUS 0

/* Macros for Input or Output Mode used in pinMode() */
#define INPUT 1
#define OUTPUT 0

/* Macros for High or LOW GPIO state used in digitalWrite() and digitalRead() */
#define HIGH 1
#define LOW 0

/* Macros for Multifunction IO Pin state used in pinFunction() */
#define FUNC_PASSTHROUGH 0
#define FUNC_GPIO 1

/* Macro for FPGA Mezzanine Error */
#define FPGA_MEZZ_ERROR -1

int check_version(mraa_i2c_context i2c);

int test(mraa_i2c_context i2c);

int pinMode(u_int8_t pin, u_int8_t mode, mraa_i2c_context i2c);

int digitalWrite(u_int8_t pin, u_int8_t state, mraa_i2c_context i2c);

int digitalRead(u_int8_t pin, mraa_i2c_context i2c);

int pinFunction(u_int8_t func_type, u_int8_t func, mraa_i2c_context i2c);
