#ifndef __BIT_MATH_H__
#define __BIT_MATH_H__



#define SET_BIT(reg, bitnum) (reg |= (1<< bitnum))
#define CLR_BIT(reg, bitnum) (reg &= (~(1 << bitnum)))
#define TOGGLE_ BIT(reg, bitnun) (reg ^= (1 << bitnum))
#define GET_BIT(reg, bitnum) ((reg >> bitnum) & 1)
#define WRITE_BIT(reg, bitnum, value) ((reg & (~(1 << bitnum))) | (value << bitnum)



#endif // __BIT_MATH_H__
