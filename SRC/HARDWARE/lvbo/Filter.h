#ifndef __FILTER_H__
#define __FILTER_H__
#include "stdint.h"
#define B1 (1)
#define B2 (-1)
#define B3 (0)
#define B4 (0)
#define B5 (0)
#define A1 (1)
#define A2 (-0.9999)
#define A3 (0)
#define A4 (0)
#define A5 (0)
double Butter(uint16_t data);
int16_t Ang_ACC_Moving_Average_Filter(int16_t nowdata);
int16_t Ang_Gyro_Moving_Average_Filter(int16_t nowdata);
int16_t L_Encoder_Average_Filter(int16_t nowdata);
int16_t R_Encoder_Average_Filter(int16_t nowdata);

//25
//#define B1 (0.0055)
//#define B2 (0.0111)
//#define B3 (0.0055)
//#define B4 (0)
//#define B5 (0)
//#define A1 (1)
//#define A2 (-1.7786)
//#define A3 (0.8008)
//#define A4 (0)
//#define A5 (0)
//15
//#define B1 (0.0021)
//#define B2 (0.0042)
//#define B3 (0.0021)
//#define B4 (0)
//#define B5 (0)
//#define A1 (1)
//#define A2 (-1.8669)
//#define A3 (0.8752)
//#define A4 (0)
//#define A5 (0)

//10
//#define B1 (0.00094469)
//#define B2 (0.0019)
//#define B3 (0.00094469)
//#define B4 (0)
//#define B5 (0)
//#define A1 (1)
//#define A2 (-1.9112)
//#define A3 (0.9150)
//#define A4 (0)
//#define A5 (0)
//new
//#define B1 (0.00024136)
//#define B2 (0.00048272)
//#define B3 (0.00024136)
//#define B4 (0)
//#define B5 (0)
//#define A1 (1)
//#define A2 (-1.9556)
//#define A3 (0.9565)
//#define A4 (0)
//#define A5 (0)
#endif
