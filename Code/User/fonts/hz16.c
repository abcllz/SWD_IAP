/*
*********************************************************************************************************
*
*	模块名称 : 汉字点阵字库。有效显示区 高16x宽15, 最右一列留白
*	文件名称 : hz16.c
*	版    本 : V1.0
*	说    明 : 只包含本程序用到汉字字库
*********************************************************************************************************
*/

#include "fonts.h"

/*
	FLASH中内嵌小字库，只包括本程序用到的汉字点阵
	每行点阵数据，头2字节是汉子的内码，后面是16点阵汉子的字模数据。
*/

#ifdef USE_SMALL_FONT

unsigned char const g_Hz16[] = {

0xBC,0xB6, 0x10,0x08,0x17,0xFC,0x21,0x08,0x21,0x08,0x49,0x10,0xF9,0x10,0x11,0x3C,0x21,0x84,// 级 //
           0x41,0x88,0xF9,0x48,0x02,0x50,0x02,0x20,0x1A,0x50,0xE4,0x88,0x49,0x0E,0x02,0x04,

0xC9,0xFD, 0x01,0x20,0x07,0xA0,0x7C,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x24,0xFF,0xFE,// 升 //
           0x04,0x20,0x04,0x20,0x04,0x20,0x08,0x20,0x08,0x20,0x10,0x20,0x20,0x20,0x00,0x20,

0xD4,0xDA, 0x02,0x00,0x02,0x00,0x02,0x04,0xFF,0xFE,0x04,0x00,0x04,0x40,0x08,0x40,0x08,0x50,// 在 //
           0x13,0xF8,0x30,0x40,0x50,0x40,0x90,0x40,0x10,0x40,0x10,0x44,0x17,0xFE,0x10,0x00,

0xD5,0xFD, 0x00,0x08,0x7F,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x11,0x10,0x11,0xF8,// 正 //
           0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x04,0xFF,0xFE,0x00,0x00,

/* 最后一行必须用0xFF,0xFF结束，这是字库数组结束标志 */
0xFF,0xFF

};

#else
	unsigned char const g_Hz16[] = {0xFF, 0xFF};
#endif

