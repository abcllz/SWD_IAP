/*
*********************************************************************************************************
*
*	模块名称 : ASCII点阵字库。
*	文件名称 : asc24.c
*	版    本 : V1.0
*	说    明 : 只包含本程序用到汉字字库
*********************************************************************************************************
*/

#include "fonts.h"

/*
	FLASH中内嵌小字库，只包括本程序用到的汉字点阵
	每行点阵数据，头2字节是汉子的内码，后面字节是点阵汉字的字模数据。
*/
#ifdef USE_SMALL_FONT

unsigned char const g_Hz24[] = {

0xB0,0xB2, 0x00,0x60,0x00,0x00,0x30,0x00,0x00,0x18,0x00,0x10,0x10,0x18,0x1F,0xFF,0xFC,0x30,// 安 //
           0x40,0x18,0x30,0x70,0x20,0x60,0x60,0x00,0x00,0x60,0x00,0x00,0xC0,0x00,0x00,0xC0,
           0x0C,0x7F,0xFF,0xFE,0x01,0x81,0x80,0x01,0x81,0x80,0x03,0x03,0x00,0x03,0x03,0x00,
           0x07,0x86,0x00,0x00,0xFC,0x00,0x00,0x1E,0x00,0x00,0x37,0x80,0x00,0xE1,0xE0,0x03,
           0x80,0x78,0x0E,0x00,0x18,0x70,0x00,0x08,
		   
/* 最后一行必须用0xFF,0xFF结束，这是字库数组结束标志 */
0xFF,0xFF

};
#else
	unsigned char const g_Hz24[] = {0xFF, 0xFF};
#endif

