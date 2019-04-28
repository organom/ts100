/********************* (C) COPYRIGHT 2017 e-Design Co.,Ltd. ********************
File Name :      I2C.h
Version :        TS100 APP 2.18
Description:
Author :         Ning
Data:            2017/11/06
History:
2015/07/07   Í³Ò»ÃüÃû£»
*******************************************************************************/
#ifndef __I2C_H
#define __I2C_H

#define I2C_TX    1
#define I2C_RX    2

void I2C_Configuration(void);
void Delay_uS(u32 us);
void I2C_PageWrite(u8* pbuf, u8 numbyte,u8 deviceaddr );
void I2C_PageRead(u8* pbuf,  u8 numbyte,u8 deviceaddr, u8 readaddr);
#endif
/******************************** END OF FILE *********************************/
