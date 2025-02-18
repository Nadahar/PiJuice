/*
 * rtc_ds1339_emu.h
 *
 *  Created on: 19.01.2017.
 *      Author: milan
 */

#ifndef RTC_DS1339_EMU_H_
#define RTC_DS1339_EMU_H_

#include "stdint.h"

typedef void (*RtcCommand_T)(uint8_t dir, uint8_t *pData, uint16_t *dataLen);

void RtcDs1339ProcessRequest(uint8_t dir, uint8_t command, uint8_t *pData, uint16_t *dataLen);
uint8_t RtcGetPointer();
uint8_t RtcSetPointer(uint8_t val);

void RtcInit(void);
void RtcReadAlarm1(uint8_t *buffer, uint8_t extended);
void RtcWriteAlarm1(uint8_t *buffer, uint8_t extended);
void RtcWriteTime(uint8_t *buffer, uint8_t extended);
void RtcReadTime(uint8_t *buffer, uint8_t extended);
void RtcReadControlStatus(uint8_t *buffer, uint16_t *dataLen);
void RtcWriteControlStatus(uint8_t *buffer, uint16_t dataLen);

void RTC_EvaluateAlarm(void);
bool RTC_GetAlarmState(void);
bool RTC_GetWakeEvent(void);
void RTC_ClearWakeEvent(void);

#endif /* RTC_DS1339_EMU_H_ */
