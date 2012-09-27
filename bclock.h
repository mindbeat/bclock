#ifndef BCLOCK_H
#define BCLOCK_H

#define OFFSET 0x44C00000
#define SIZE 0x204FFF
#define CM_DIV_M2_DPLL_MPU 0x2004A8
#define CM_CLKSEL_DPLL_MPU 0x20042C
#define CM_CLKMODE_DPLL_MPU_DPLL_EN 0x200488
#define	CM_IDLEST_DPLL_MPU 0x200420
#define DPLL_MN_BYP_MODE 4
#define DPLL_LOCK_MODE 7
#define ST_MN_BYPASS 1
#define ST_DPLL_CLK 1
#define CLKINP 24

#include <stdio.h>
#include <sys/mman.h>
#include <errno.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <string.h>


typedef struct Dpll_mpu_struct {
	uint8_t N_divider;
	uint16_t M_multiplier;
	uint8_t M2_divider;
} Dpll_mpu;



void set_dpll(Dpll_mpu* dpll_mpu, uint8_t* map);
void get_dpll_mpu(Dpll_mpu* dpll_mpu, uint8_t* map);
void print_dpll_mpu(Dpll_mpu* dpll_mpu);



#endif
