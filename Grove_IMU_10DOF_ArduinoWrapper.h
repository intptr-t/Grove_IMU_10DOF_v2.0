#ifndef GROVE_IMU_10ODF_ARDUINO_WRAPPER_H_
#define GROVE_IMU_10ODF_ARDUINO_WRAPPER_H_

#include <stdint.h>
#include <Arduino.h>

#ifndef BUFFER_LENGTH
    #define BUFFER_LENGTH 32
#endif

#if !defined(ARDUINO) && (defined(ARDUINO_WIO_3G) || defined(ARDUINO_WIO_LTE_M1NB1_BG96))
#   define ARDUINO 101
#endif

#endif