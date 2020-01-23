#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_PLAYER
#define LV_ATTRIBUTE_IMG_PLAYER
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_PLAYER uint8_t Player_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0DBH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0DBH, 0B6H, 0DBH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 06DH, 020H, 049H, 08DH, 091H, 0DBH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 091H, 0B1H, 044H, 0FAH, 0B1H, 0ACH, 049H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 06DH, 06DH, 0B1H, 064H, 0FBH, 0FFH, 0FFH, 049H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 06DH, 069H, 08DH, 0B1H, 0FBH, 0FBH, 0D1H, 092H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 044H, 0F6H, 0F6H, 0F6H, 0FAH, 0D1H, 0B2H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0DFH, 0DBH, 0B2H, 0F6H, 0F6H, 0F6H, 0F6H, 0FAH, 092H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 097H, 097H, 097H, 044H, 0D2H, 0FBH, 0ADH, 08DH, 0DAH, 092H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0DBH, 0BBH, 096H, 0DBH, 0FBH, 089H, 089H, 08DH, 0B2H, 0B6H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FBH, 069H, 069H, 0B2H, 0FFH, 089H, 069H, 0B2H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0DBH, 0B2H, 0D2H, 064H, 089H, 0D6H, 0F6H, 0FBH, 0FBH, 0FBH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0DBH, 08EH, 06DH, 069H, 092H, 0FBH, 0FFH, 0FFH, 0B2H, 092H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 06DH, 0B7H, 0FFH, 0FFH, 0FBH, 0B7H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 
  0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  fe, f7, de, 0xf7, 0xbe, 0x0FFH, 0xde, 0x0FFH, 0xde, 0xf7, 0xde, 0xf7, 0xde, 0xf7, 0xde, 0xf7, 0xfe, 0xf7, 0xbe, 0xf7, 0xbf, 0x0FFH, 0x9f, 0x0FFH, 0xbf, 0x0FFH, 0xff, 0xf7, 0xde, 0xf7, 0xdf, 0xf7, 0xdf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xdf, 0xff, 0xbf, 0xf7, 0xdf, 0xff, 
  0xbf, 0xff, 0x9f, 0xff, 0x9f, 0xff, 0xbf, 0xff, 0xdf, 0xf7, 0xdf, 0xf7, 0xbf, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0x9e, 0xf7, 0xbe, 0xf7, 0xde, 0xff, 0xde, 0xff, 0xbe, 0xf7, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xf7, 0xdf, 0xff, 0xbf, 0xff, 
  0x9f, 0xff, 0x9f, 0xff, 0x9f, 0xff, 0xbf, 0xff, 0xbf, 0xf7, 0xdf, 0xf7, 0xbf, 0xff, 0x9f, 0xff, 0x9e, 0xff, 0xde, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xde, 0xff, 0x9d, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xbe, 0xf7, 0xdf, 0xff, 0xbf, 0xf7, 
  0xdf, 0xf7, 0xbf, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xdf, 0xf7, 0xdf, 0xf7, 0xbf, 0xff, 0x9f, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0x9e, 0xf7, 0xff, 0xff, 0x7f, 0xef, 0xbf, 0xf7, 0xde, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0x9e, 0xf7, 
  0xfd, 0xef, 0xfd, 0xf7, 0xdd, 0xff, 0xdd, 0xf7, 0xfe, 0xf7, 0xde, 0xf7, 0xbe, 0xff, 0x9f, 0xff, 0xbf, 0xff, 0xdf, 0xf7, 0xbe, 0xf7, 0xff, 0xff, 0xf9, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xbe, 0xff, 0xde, 0xff, 0xde, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 0xff, 
  0xfd, 0xef, 0xfd, 0xf7, 0xdd, 0xff, 0xdd, 0xf7, 0xde, 0xf7, 0xde, 0xff, 0xbf, 0xff, 0x9f, 0xff, 0x9f, 0xf7, 0xff, 0xff, 0xfd, 0xff, 0xfe, 0xff, 0x38, 0xce, 0xb3, 0x9c, 0x37, 0xce, 0x59, 0xef, 0xff, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xf7, 0xdf, 0xff, 0xdf, 0xff, 
  0xdf, 0xf7, 0xbe, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0x9f, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xfe, 0xff, 0x58, 0xef, 0xe7, 0x6a, 0x20, 0x18, 0x84, 0x41, 0x08, 0x7b, 0xa7, 0x8b, 0x17, 0xce, 0xfe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbf, 0xf7, 
  0x9f, 0xff, 0x9f, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xb7, 0xd6, 0x2a, 0x94, 0x8b, 0xac, 0x61, 0x49, 0xd4, 0xdd, 0xea, 0xab, 0x44, 0x9b, 0x07, 0x4a, 0xfe, 0xff, 0xbe, 0xff, 0xde, 0xff, 0xdf, 0xff, 0xff, 0xff, 
  0x9f, 0xff, 0xbf, 0xff, 0xdf, 0xf7, 0xff, 0xf7, 0xbf, 0xf7, 0x9e, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xc8, 0x5a, 0xc5, 0x6a, 0xc8, 0x9b, 0x61, 0x51, 0x97, 0xfe, 0xd6, 0xfe, 0x14, 0xff, 0xc6, 0x41, 0xde, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xff, 0xff, 
  0xbf, 0xff, 0xde, 0xff, 0xde, 0xf7, 0xde, 0xf7, 0xbf, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xe9, 0x6a, 0x64, 0x6a, 0x26, 0x93, 0xaa, 0xa3, 0xf5, 0xed, 0x14, 0xfe, 0x4a, 0xcc, 0x0f, 0x8c, 0xff, 0xff, 0xde, 0xff, 0xde, 0xff, 0x9e, 0xf7, 0xdf, 0xff, 
  0xbe, 0xff, 0xde, 0xff, 0xde, 0xf7, 0xdf, 0xf7, 0xdf, 0xff, 0x9f, 0xff, 0x9e, 0xff, 0xff, 0xf7, 0xff, 0xff, 0x7c, 0xf7, 0x41, 0x51, 0x0f, 0xdd, 0xd0, 0xdc, 0x73, 0xed, 0xd3, 0xf5, 0x4b, 0xc4, 0x71, 0x9c, 0xff, 0xff, 0x9e, 0xff, 0xde, 0xff, 0xff, 0xff, 0xdf, 0xff, 
  0xde, 0xff, 0xde, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0x9f, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xbf, 0xe7, 0xbb, 0xbe, 0x38, 0xc6, 0x0e, 0xa4, 0x92, 0xf5, 0xcf, 0xe4, 0x52, 0xed, 0x31, 0xdd, 0xb1, 0xe5, 0x51, 0x94, 0xff, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xf7, 0xdf, 0xff, 
  0xde, 0xf7, 0x9e, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xdf, 0xf7, 0xff, 0xf7, 0x55, 0x8d, 0x96, 0x95, 0x8d, 0x63, 0x84, 0x49, 0x0d, 0xbc, 0x35, 0xfe, 0xe8, 0x92, 0xa7, 0x7a, 0x93, 0xd5, 0xef, 0x83, 0xff, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xdf, 0xff, 
  0xde, 0xf7, 0xdf, 0xff, 0x9e, 0xff, 0xff, 0xff, 0xde, 0xf7, 0xff, 0xff, 0x37, 0xc6, 0xd7, 0xb5, 0xb3, 0x8c, 0xd6, 0xb5, 0x36, 0xde, 0x87, 0x82, 0x26, 0x82, 0xc8, 0x82, 0x70, 0xac, 0xf2, 0xac, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xf7, 0xbf, 0xf7, 
  0xdf, 0xf7, 0x9f, 0xf7, 0xdf, 0xff, 0xbe, 0xf7, 0xdd, 0xf7, 0xfe, 0xff, 0x57, 0xe6, 0x07, 0x62, 0xe7, 0x59, 0x70, 0xa4, 0xd9, 0xf6, 0x87, 0x7a, 0x05, 0x72, 0x2f, 0xac, 0xdf, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xdf, 0xff, 
  0xbf, 0xf7, 0xbf, 0xff, 0x9f, 0xff, 0xdf, 0xff, 0xfe, 0xff, 0xd4, 0xcd, 0xcd, 0xb3, 0x0f, 0xd4, 0x04, 0x69, 0x89, 0x82, 0xf1, 0xcc, 0x73, 0xdd, 0x15, 0xf6, 0x36, 0xe6, 0x7a, 0xde, 0xff, 0xf7, 0xbf, 0xff, 0xdf, 0xff, 0xbf, 0xf7, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 
  0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0x9e, 0xff, 0xdf, 0xff, 0xd7, 0xc5, 0x6d, 0x73, 0xeb, 0x6a, 0x49, 0x52, 0x30, 0x8c, 0x59, 0xd6, 0xdb, 0xe6, 0xfb, 0xe6, 0x50, 0x94, 0x30, 0x94, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 
  0xbe, 0xf7, 0xdf, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xdf, 0xff, 0x7d, 0xf7, 0xdf, 0xff, 0xba, 0xde, 0xbe, 0xff, 0xcb, 0x62, 0x34, 0xb5, 0x5d, 0xf7, 0xbe, 0xff, 0x79, 0xde, 0x34, 0xad, 0xff, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 
  0xdf, 0xff, 0x9e, 0xf7, 0xff, 0xff, 0x9e, 0xf7, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 
  0xdf, 0xff, 0xbf, 0xf7, 0xdf, 0xff, 0xbe, 0xf7, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0x9e, 0xf7, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 
  0xdf, 0xf7, 0xff, 0xff, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xff, 0xbe, 0xf7, 0xff, 0xff, 0x9e, 0xf7, 0xdf, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0x9e, 0xf7, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 
  0xbf, 0xf7, 0xbf, 0xf7, 0xdf, 0xf7, 0xbf, 0xf7, 0xdf, 0xff, 0xdf, 0xff, 0x9e, 0xf7, 0xdf, 0xff, 0xbe, 0xf7, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbe, 0xf7, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0xf7, 0xfe, 0xf7, 0xde, 0xff, 0xbe, 0xff, 0xde, 0xf7, 0xde, 0xf7, 0xde, 0xf7, 0xde, 0xf7, 0xde, 0xf7, 0xfe, 0xf7, 0xbe, 0xff, 0xbf, 0xff, 0x9f, 0xff, 0xbf, 0xf7, 0xff, 0xf7, 0xde, 0xf7, 0xdf, 0xf7, 0xdf, 0xf7, 0xbf, 0xf7, 0xbf, 0xff, 0xdf, 0xf7, 0xbf, 0xff, 0xdf, 
  0xff, 0xbf, 0xff, 0x9f, 0xff, 0x9f, 0xff, 0xbf, 0xf7, 0xdf, 0xf7, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xf7, 0x9e, 0xf7, 0xbe, 0xff, 0xde, 0xff, 0xde, 0xf7, 0xbe, 0xff, 0xdf, 0xff, 0xdf, 0xf7, 0xbf, 0xff, 0xdf, 0xff, 0xbf, 
  0xff, 0x9f, 0xff, 0x9f, 0xff, 0x9f, 0xff, 0xbf, 0xf7, 0xbf, 0xf7, 0xdf, 0xff, 0xbf, 0xff, 0x9f, 0xff, 0x9e, 0xff, 0xde, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xde, 0xff, 0x9d, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xdf, 0xf7, 0xbe, 0xff, 0xdf, 0xf7, 0xbf, 
  0xf7, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0xbf, 0xf7, 0xdf, 0xf7, 0xdf, 0xff, 0xbf, 0xff, 0x9f, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xff, 0xf7, 0x9e, 0xff, 0xff, 0xef, 0x7f, 0xf7, 0xbf, 0xff, 0xde, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 0xf7, 0x9e, 
  0xef, 0xfd, 0xf7, 0xfd, 0xff, 0xdd, 0xf7, 0xdd, 0xf7, 0xfe, 0xf7, 0xde, 0xff, 0xbe, 0xff, 0x9f, 0xff, 0xbf, 0xf7, 0xdf, 0xf7, 0xbe, 0xff, 0xff, 0xbd, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xbe, 0xff, 0xde, 0xff, 0xde, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 
  0xef, 0xfd, 0xf7, 0xfd, 0xff, 0xdd, 0xf7, 0xdd, 0xf7, 0xde, 0xff, 0xde, 0xff, 0xbf, 0xff, 0x9f, 0xf7, 0x9f, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xfe, 0xce, 0x38, 0x9c, 0xb3, 0xce, 0x37, 0xef, 0x59, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xbe, 0xf7, 0xbe, 0xff, 0xdf, 0xff, 0xdf, 
  0xf7, 0xdf, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0x9f, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xfe, 0xef, 0x58, 0x6a, 0xe7, 0x18, 0x20, 0x41, 0x84, 0x7b, 0x08, 0x8b, 0xa7, 0xce, 0x17, 0xff, 0xfe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xf7, 0xbf, 
  0xff, 0x9f, 0xff, 0x9f, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0x9e, 0xff, 0xbf, 0xff, 0xff, 0xd6, 0xb7, 0x94, 0x2a, 0xac, 0x8b, 0x49, 0x61, 0xdd, 0xd4, 0xab, 0xea, 0x9b, 0x44, 0x4a, 0x07, 0xff, 0xfe, 0xff, 0xbe, 0xff, 0xde, 0xff, 0xdf, 0xff, 0xff, 
  0xff, 0x9f, 0xff, 0xbf, 0xf7, 0xdf, 0xf7, 0xff, 0xf7, 0xbf, 0xff, 0x9e, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xff, 0x5a, 0xc8, 0x6a, 0xc5, 0x9b, 0xc8, 0x51, 0x61, 0xfe, 0x97, 0xfe, 0xd6, 0xff, 0x14, 0x41, 0xc6, 0xff, 0xde, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xff, 
  0xff, 0xbf, 0xff, 0xde, 0xf7, 0xde, 0xf7, 0xde, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xff, 0x6a, 0xe9, 0x6a, 0x64, 0x93, 0x26, 0xa3, 0xaa, 0xed, 0xf5, 0xfe, 0x14, 0xcc, 0x4a, 0x8c, 0x0f, 0xff, 0xff, 0xff, 0xde, 0xff, 0xde, 0xf7, 0x9e, 0xff, 0xdf, 
  0xff, 0xbe, 0xff, 0xde, 0xf7, 0xde, 0xf7, 0xdf, 0xff, 0xdf, 0xff, 0x9f, 0xff, 0x9e, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0x7c, 0x51, 0x41, 0xdd, 0x0f, 0xdc, 0xd0, 0xed, 0x73, 0xf5, 0xd3, 0xc4, 0x4b, 0x9c, 0x71, 0xff, 0xff, 0xff, 0x9e, 0xff, 0xde, 0xff, 0xff, 0xff, 0xdf, 
  0xff, 0xde, 0xff, 0xde, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0x9f, 0xff, 0x9f, 0xff, 0xff, 0xe7, 0xbf, 0xbe, 0xbb, 0xc6, 0x38, 0xa4, 0x0e, 0xf5, 0x92, 0xe4, 0xcf, 0xed, 0x52, 0xdd, 0x31, 0xe5, 0xb1, 0x94, 0x51, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xbe, 0xf7, 0xbe, 0xff, 0xdf, 
  0xf7, 0xde, 0xff, 0x9e, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 0xf7, 0xdf, 0xf7, 0xff, 0x8d, 0x55, 0x95, 0x96, 0x63, 0x8d, 0x49, 0x84, 0xbc, 0x0d, 0xfe, 0x35, 0x92, 0xe8, 0x7a, 0xa7, 0xd5, 0x93, 0x83, 0xef, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xdf, 
  0xf7, 0xde, 0xff, 0xdf, 0xff, 0x9e, 0xff, 0xff, 0xf7, 0xde, 0xff, 0xff, 0xc6, 0x37, 0xb5, 0xd7, 0x8c, 0xb3, 0xb5, 0xd6, 0xde, 0x36, 0x82, 0x87, 0x82, 0x26, 0x82, 0xc8, 0xac, 0x70, 0xac, 0xf2, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 
  0xf7, 0xdf, 0xf7, 0x9f, 0xff, 0xdf, 0xf7, 0xbe, 0xf7, 0xdd, 0xff, 0xfe, 0xe6, 0x57, 0x62, 0x07, 0x59, 0xe7, 0xa4, 0x70, 0xf6, 0xd9, 0x7a, 0x87, 0x72, 0x05, 0xac, 0x2f, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xdf, 
  0xf7, 0xbf, 0xff, 0xbf, 0xff, 0x9f, 0xff, 0xdf, 0xff, 0xfe, 0xcd, 0xd4, 0xb3, 0xcd, 0xd4, 0x0f, 0x69, 0x04, 0x82, 0x89, 0xcc, 0xf1, 0xdd, 0x73, 0xf6, 0x15, 0xe6, 0x36, 0xde, 0x7a, 0xf7, 0xff, 0xff, 0xbf, 0xff, 0xdf, 0xf7, 0xbf, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 
  0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0x9e, 0xff, 0xdf, 0xc5, 0xd7, 0x73, 0x6d, 0x6a, 0xeb, 0x52, 0x49, 0x8c, 0x30, 0xd6, 0x59, 0xe6, 0xdb, 0xe6, 0xfb, 0x94, 0x50, 0x94, 0x30, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 
  0xf7, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xdf, 0xf7, 0x7d, 0xff, 0xdf, 0xde, 0xba, 0xff, 0xbe, 0x62, 0xcb, 0xb5, 0x34, 0xf7, 0x5d, 0xff, 0xbe, 0xde, 0x79, 0xad, 0x34, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 
  0xff, 0xdf, 0xf7, 0x9e, 0xff, 0xff, 0xf7, 0x9e, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 
  0xff, 0xdf, 0xf7, 0xbf, 0xff, 0xdf, 0xf7, 0xbe, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0xdf, 0xf7, 0x9e, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 
  0xf7, 0xdf, 0xff, 0xff, 0xf7, 0xbf, 0xf7, 0xbf, 0xff, 0xbf, 0xf7, 0xbe, 0xff, 0xff, 0xf7, 0x9e, 0xff, 0xdf, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xbe, 0xff, 0xbf, 0xff, 0xbf, 0xf7, 0x9e, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 
  0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xdf, 0xf7, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xf7, 0x9e, 0xff, 0xdf, 0xf7, 0xbe, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xf7, 0xbe, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 0xff, 0xbf, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0xf2, 0xfb, 0xee, 0xff, 0xf2, 0xf8, 0xf3, 0xff, 0xf2, 0xf6, 0xf7, 0xff, 0xf1, 0xf8, 0xf5, 0xff, 0xf1, 0xfa, 0xf0, 0xff, 0xf2, 0xfa, 0xef, 0xff, 0xf2, 0xf9, 0xf2, 0xff, 0xf2, 0xf9, 0xf2, 0xff, 0xf4, 0xfc, 0xf2, 0xff, 0xf4, 0xf5, 0xf1, 0xff, 0xfb, 0xf4, 0xf9, 0xff, 0xfc, 0xf1, 0xfb, 0xff, 0xfb, 0xf6, 0xf7, 0xff, 0xf9, 0xfc, 0xf3, 0xff, 0xf4, 0xf8, 0xed, 0xff, 0xfb, 0xf9, 0xf1, 0xff, 0xf9, 0xf8, 0xf4, 0xff, 0xf6, 0xf5, 0xf1, 0xff, 0xf7, 0xf6, 0xf2, 0xff, 0xfb, 0xfa, 0xf6, 0xff, 0xf7, 0xf5, 0xf4, 0xff, 0xf9, 0xf7, 0xf7, 0xff, 
  0xff, 0xf4, 0xf6, 0xff, 0xfd, 0xf2, 0xfa, 0xff, 0xfb, 0xf1, 0xfd, 0xff, 0xfa, 0xf5, 0xf7, 0xff, 0xf8, 0xf8, 0xf2, 0xff, 0xf8, 0xf8, 0xf2, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf2, 0xf6, 0xf7, 0xff, 0xf5, 0xfa, 0xf9, 0xff, 0xf2, 0xf6, 0xf7, 0xff, 0xf5, 0xf5, 0xfb, 0xff, 0xf9, 0xf6, 0xff, 0xff, 0xf1, 0xf0, 0xf4, 0xff, 0xf1, 0xf6, 0xf4, 0xff, 0xf2, 0xf8, 0xf7, 0xff, 0xf3, 0xf8, 0xfb, 0xff, 0xf4, 0xf5, 0xf3, 0xff, 0xf9, 0xf7, 0xf6, 0xff, 0xfc, 0xfa, 0xf9, 0xff, 0xf5, 0xf3, 0xf2, 0xff, 0xfa, 0xf8, 0xf7, 0xff, 0xf8, 0xf6, 0xf6, 0xff, 
  0xff, 0xf1, 0xfa, 0xff, 0xff, 0xef, 0xfe, 0xff, 0xff, 0xef, 0xff, 0xff, 0xfd, 0xf3, 0xf9, 0xff, 0xfb, 0xf6, 0xf3, 0xff, 0xfa, 0xf7, 0xf3, 0xff, 0xf8, 0xf4, 0xfa, 0xff, 0xf6, 0xf2, 0xfd, 0xff, 0xf1, 0xf1, 0xf7, 0xff, 0xf3, 0xf7, 0xf8, 0xff, 0xf0, 0xf3, 0xf7, 0xff, 0xf4, 0xf4, 0xfa, 0xff, 0xf9, 0xf8, 0xfc, 0xff, 0xf6, 0xf5, 0xf7, 0xff, 0xf4, 0xf7, 0xfb, 0xff, 0xeb, 0xf2, 0xfb, 0xff, 0xf5, 0xf7, 0xf7, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf7, 0xf5, 0xff, 0xf4, 0xf5, 0xf3, 0xff, 0xf9, 0xf7, 0xf6, 0xff, 0xf6, 0xf4, 0xf4, 0xff, 
  0xfa, 0xf7, 0xf3, 0xff, 0xf6, 0xf5, 0xf9, 0xff, 0xf4, 0xf4, 0xfa, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf9, 0xf0, 0xff, 0xf6, 0xf8, 0xf2, 0xff, 0xf6, 0xf4, 0xfa, 0xff, 0xf8, 0xf2, 0xfd, 0xff, 0xfb, 0xf4, 0xfb, 0xff, 0xf9, 0xf7, 0xf6, 0xff, 0xfb, 0xfe, 0xfc, 0xff, 0xf2, 0xf2, 0xf2, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xf7, 0xeb, 0xeb, 0xff, 0xf8, 0xf3, 0xf2, 0xff, 0xf4, 0xf8, 0xf9, 0xff, 0xf1, 0xf5, 0xf6, 0xff, 0xf5, 0xf9, 0xfa, 0xff, 0xf3, 0xf5, 0xf5, 0xff, 0xf9, 0xf9, 0xf9, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf4, 0xf2, 0xf2, 0xff, 
  0xeb, 0xfe, 0xe9, 0xff, 0xe8, 0xfc, 0xf0, 0xff, 0xe8, 0xf9, 0xf5, 0xff, 0xeb, 0xfa, 0xf2, 0xff, 0xf1, 0xfb, 0xef, 0xff, 0xf2, 0xf9, 0xf2, 0xff, 0xf4, 0xf5, 0xf9, 0xff, 0xfb, 0xf2, 0xfc, 0xff, 0xff, 0xf6, 0xf9, 0xff, 0xfb, 0xf7, 0xf2, 0xff, 0xef, 0xf6, 0xef, 0xff, 0xfc, 0xfd, 0xfb, 0xff, 0xc8, 0xbc, 0xbc, 0xff, 0xff, 0xfe, 0xfb, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xf2, 0xfd, 0xf5, 0xff, 0xf0, 0xf5, 0xf8, 0xff, 0xf2, 0xf7, 0xfa, 0xff, 0xf3, 0xf7, 0xf8, 0xff, 0xf3, 0xf5, 0xf5, 0xff, 0xf9, 0xf9, 0xf9, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 
  0xeb, 0xfe, 0xe9, 0xff, 0xe8, 0xfc, 0xf0, 0xff, 0xe6, 0xfa, 0xf5, 0xff, 0xeb, 0xf9, 0xf3, 0xff, 0xf2, 0xf9, 0xf2, 0xff, 0xf2, 0xf7, 0xf5, 0xff, 0xf6, 0xf4, 0xfa, 0xff, 0xfd, 0xf2, 0xfa, 0xff, 0xff, 0xf2, 0xf4, 0xff, 0xf9, 0xfb, 0xf5, 0xff, 0xeb, 0xfc, 0xf9, 0xff, 0xee, 0xff, 0xff, 0xff, 0xc4, 0xc3, 0xcc, 0xff, 0x9c, 0x95, 0x9a, 0xff, 0xba, 0xc3, 0xc6, 0xff, 0xc8, 0xea, 0xea, 0xff, 0xf6, 0xfe, 0xff, 0xff, 0xee, 0xf4, 0xf9, 0xff, 0xf1, 0xf6, 0xf9, 0xff, 0xef, 0xf3, 0xf4, 0xff, 0xf6, 0xf8, 0xf8, 0xff, 0xf8, 0xf9, 0xf7, 0xff, 
  0xfa, 0xf7, 0xf3, 0xff, 0xf2, 0xf6, 0xf7, 0xff, 0xf1, 0xf6, 0xf9, 0xff, 0xf6, 0xf5, 0xf7, 0xff, 0xfa, 0xf5, 0xf6, 0xff, 0xf8, 0xf4, 0xfa, 0xff, 0xf6, 0xf2, 0xfd, 0xff, 0xfb, 0xf3, 0xfa, 0xff, 0xfd, 0xf5, 0xf5, 0xff, 0xf2, 0xff, 0xfc, 0xff, 0xc3, 0xe8, 0xec, 0xff, 0x36, 0x5b, 0x69, 0xff, 0x00, 0x06, 0x1b, 0xff, 0x23, 0x31, 0x44, 0xff, 0x40, 0x61, 0x75, 0xff, 0x3a, 0x76, 0x8c, 0xff, 0xb9, 0xc2, 0xcb, 0xff, 0xf3, 0xfb, 0xff, 0xff, 0xf0, 0xf6, 0xfb, 0xff, 0xf3, 0xf6, 0xfa, 0xff, 0xf3, 0xf5, 0xf5, 0xff, 0xf5, 0xf6, 0xf4, 0xff, 
  0xff, 0xf0, 0xfd, 0xff, 0xfd, 0xf2, 0xfc, 0xff, 0xf8, 0xf5, 0xf7, 0xff, 0xfb, 0xf6, 0xf5, 0xff, 0xfd, 0xf4, 0xf7, 0xff, 0xf8, 0xf3, 0xfc, 0xff, 0xf4, 0xf2, 0xfe, 0xff, 0xf8, 0xf4, 0xf9, 0xff, 0xfd, 0xfe, 0xfc, 0xff, 0xbb, 0xd3, 0xd1, 0xff, 0x50, 0x83, 0x8d, 0xff, 0x59, 0x90, 0xa5, 0xff, 0x06, 0x2b, 0x47, 0xff, 0x9e, 0xb9, 0xdb, 0xff, 0x52, 0x7e, 0xa7, 0xff, 0x1f, 0x67, 0x96, 0xff, 0x37, 0x40, 0x4a, 0xff, 0xf4, 0xfd, 0xff, 0xff, 0xef, 0xf5, 0xfc, 0xff, 0xf2, 0xf7, 0xfa, 0xff, 0xf5, 0xf7, 0xf8, 0xff, 0xfa, 0xfb, 0xf9, 0xff, 
  0xff, 0xef, 0xfe, 0xff, 0xfb, 0xf5, 0xfa, 0xff, 0xf7, 0xf9, 0xf3, 0xff, 0xfc, 0xfb, 0xf1, 0xff, 0xf8, 0xf4, 0xf3, 0xff, 0xf1, 0xf2, 0xfc, 0xff, 0xf1, 0xf5, 0xff, 0xff, 0xf5, 0xf6, 0xfa, 0xff, 0xfa, 0xff, 0xfb, 0xff, 0x3e, 0x57, 0x59, 0xff, 0x25, 0x59, 0x6a, 0xff, 0x3f, 0x78, 0x97, 0xff, 0x06, 0x2e, 0x51, 0xff, 0xb6, 0xd0, 0xf8, 0xff, 0xae, 0xd7, 0xff, 0xff, 0xa2, 0xe1, 0xff, 0xff, 0x31, 0x3a, 0x44, 0xff, 0xf1, 0xfa, 0xff, 0xff, 0xed, 0xf3, 0xfa, 0xff, 0xf1, 0xf6, 0xf9, 0xff, 0xf2, 0xf4, 0xf5, 0xff, 0xfa, 0xfb, 0xf9, 0xff, 
  0xfa, 0xf3, 0xfa, 0xff, 0xf4, 0xf7, 0xf5, 0xff, 0xf0, 0xf8, 0xed, 0xff, 0xf2, 0xf8, 0xed, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf3, 0xf5, 0xff, 0xff, 0xef, 0xf3, 0xfe, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xfe, 0xff, 0xfa, 0xff, 0x4b, 0x5e, 0x65, 0xff, 0x21, 0x4b, 0x68, 0xff, 0x34, 0x63, 0x8f, 0xff, 0x54, 0x76, 0xa4, 0xff, 0xa5, 0xbc, 0xea, 0xff, 0xa1, 0xc0, 0xf7, 0xff, 0x54, 0x87, 0xc6, 0xff, 0x78, 0x81, 0x8b, 0xff, 0xf5, 0xfc, 0xff, 0xff, 0xf4, 0xfa, 0xff, 0xff, 0xf4, 0xf7, 0xfb, 0xff, 0xee, 0xf0, 0xf1, 0xff, 0xf7, 0xf8, 0xf6, 0xff, 
  0xf4, 0xf5, 0xf9, 0xff, 0xf1, 0xf8, 0xf5, 0xff, 0xf2, 0xf9, 0xf2, 0xff, 0xf7, 0xf8, 0xf4, 0xff, 0xfd, 0xf9, 0xff, 0xff, 0xf5, 0xf2, 0xff, 0xff, 0xf2, 0xef, 0xf8, 0xff, 0xff, 0xfc, 0xf4, 0xff, 0xff, 0xff, 0xf5, 0xff, 0xe2, 0xec, 0xf3, 0xff, 0x0c, 0x29, 0x4e, 0xff, 0x7a, 0xa0, 0xda, 0xff, 0x7d, 0x9a, 0xd7, 0xff, 0x99, 0xae, 0xe5, 0xff, 0x9b, 0xba, 0xf1, 0xff, 0x5c, 0x8a, 0xc4, 0xff, 0x86, 0x8d, 0x96, 0xff, 0xf8, 0xfe, 0xff, 0xff, 0xed, 0xf1, 0xf6, 0xff, 0xf4, 0xf7, 0xfb, 0xff, 0xfa, 0xfc, 0xfc, 0xff, 0xf6, 0xf7, 0xf5, 0xff, 
  0xf3, 0xf8, 0xf9, 0xff, 0xf3, 0xf8, 0xf9, 0xff, 0xf3, 0xf5, 0xf6, 0xff, 0xfc, 0xf6, 0xfb, 0xff, 0xfa, 0xf1, 0xfb, 0xff, 0xf7, 0xf0, 0xf7, 0xff, 0xff, 0xfe, 0xf9, 0xff, 0xfa, 0xf4, 0xdd, 0xff, 0xda, 0xd3, 0xb8, 0xff, 0xc2, 0xc6, 0xc1, 0xff, 0x6d, 0x82, 0xa2, 0xff, 0x90, 0xaf, 0xee, 0xff, 0x7c, 0x99, 0xde, 0xff, 0x8f, 0xa9, 0xe5, 0xff, 0x85, 0xa6, 0xd8, 0xff, 0x89, 0xb3, 0xe2, 0xff, 0x85, 0x88, 0x90, 0xff, 0xfa, 0xfd, 0xff, 0xff, 0xf1, 0xf4, 0xf9, 0xff, 0xf2, 0xf4, 0xf5, 0xff, 0xf3, 0xf3, 0xf3, 0xff, 0xf6, 0xf7, 0xf5, 0xff, 
  0xee, 0xf7, 0xf4, 0xff, 0xed, 0xf2, 0xf5, 0xff, 0xf4, 0xf4, 0xfa, 0xff, 0xfd, 0xf7, 0xfc, 0xff, 0xf9, 0xf4, 0xf5, 0xff, 0xf9, 0xf9, 0xf3, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xab, 0xa9, 0x8b, 0xff, 0xb2, 0xb0, 0x8d, 0xff, 0x6c, 0x72, 0x61, 0xff, 0x1f, 0x2f, 0x46, 0xff, 0x67, 0x80, 0xb8, 0xff, 0xaa, 0xc6, 0xff, 0xff, 0x43, 0x5c, 0x94, 0xff, 0x38, 0x53, 0x78, 0xff, 0x96, 0xb2, 0xd0, 0xff, 0x7b, 0x7e, 0x83, 0xff, 0xfa, 0xfd, 0xff, 0xff, 0xf4, 0xf5, 0xf9, 0xff, 0xf5, 0xf4, 0xf6, 0xff, 0xfb, 0xfb, 0xfb, 0xff, 0xf9, 0xf7, 0xf6, 0xff, 
  0xf0, 0xfa, 0xf4, 0xff, 0xf6, 0xfa, 0xfb, 0xff, 0xf3, 0xf2, 0xf6, 0xff, 0xfb, 0xfc, 0xfa, 0xff, 0xf0, 0xf8, 0xee, 0xff, 0xf7, 0xff, 0xf8, 0xff, 0xbc, 0xc4, 0xbd, 0xff, 0xb6, 0xba, 0xaf, 0xff, 0x95, 0x96, 0x86, 0xff, 0xb3, 0xba, 0xb3, 0xff, 0xb4, 0xc4, 0xd5, 0xff, 0x38, 0x4f, 0x7d, 0xff, 0x2d, 0x46, 0x7e, 0xff, 0x42, 0x57, 0x84, 0xff, 0x80, 0x8e, 0xa5, 0xff, 0x92, 0x9b, 0xa5, 0xff, 0xfd, 0xfe, 0xff, 0xff, 0xf9, 0xf8, 0xfc, 0xff, 0xf5, 0xf4, 0xf6, 0xff, 0xf6, 0xf5, 0xf7, 0xff, 0xf6, 0xf4, 0xf4, 0xff, 0xf6, 0xf4, 0xf3, 0xff, 
  0xf8, 0xf7, 0xf3, 0xff, 0xf7, 0xf2, 0xf4, 0xff, 0xff, 0xf8, 0xfd, 0xff, 0xf3, 0xf4, 0xf0, 0xff, 0xec, 0xfa, 0xef, 0xff, 0xee, 0xff, 0xff, 0xff, 0xba, 0xc8, 0xdf, 0xff, 0x3b, 0x41, 0x64, 0xff, 0x38, 0x3b, 0x5a, 0xff, 0x84, 0x8c, 0xa3, 0xff, 0xc7, 0xd8, 0xf3, 0xff, 0x37, 0x4f, 0x79, 0xff, 0x27, 0x41, 0x6f, 0xff, 0x75, 0x85, 0xa9, 0xff, 0xf9, 0xfa, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xff, 0xf4, 0xf3, 0xf7, 0xff, 0xf7, 0xf4, 0xf6, 0xff, 0xfb, 0xf8, 0xfa, 0xff, 0xf8, 0xf6, 0xf6, 0xff, 0xf8, 0xf6, 0xf6, 0xff, 0xf9, 0xf7, 0xf7, 0xff, 
  0xff, 0xf4, 0xf4, 0xff, 0xff, 0xf5, 0xfc, 0xff, 0xfe, 0xef, 0xf7, 0xff, 0xfa, 0xf9, 0xf5, 0xff, 0xf0, 0xff, 0xf9, 0xff, 0xa4, 0xb8, 0xc9, 0xff, 0x6b, 0x79, 0xae, 0xff, 0x7c, 0x80, 0xce, 0xff, 0x1f, 0x21, 0x68, 0xff, 0x47, 0x4f, 0x84, 0xff, 0x8a, 0x9c, 0xc5, 0xff, 0x95, 0xae, 0xda, 0xff, 0xa6, 0xc1, 0xed, 0xff, 0xb4, 0xc3, 0xe3, 0xff, 0xd2, 0xcd, 0xd6, 0xff, 0xff, 0xfb, 0xf3, 0xff, 0xf8, 0xf5, 0xf7, 0xff, 0xfb, 0xf8, 0xfa, 0xff, 0xf6, 0xf4, 0xf4, 0xff, 0xf7, 0xf5, 0xf5, 0xff, 0xf9, 0xf7, 0xf7, 0xff, 0xfa, 0xf8, 0xf7, 0xff, 
  0xf6, 0xf6, 0xf6, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0xf5, 0xf7, 0xf8, 0xff, 0xf1, 0xf2, 0xf6, 0xff, 0xf7, 0xfa, 0xfe, 0xff, 0xb6, 0xb9, 0xbe, 0xff, 0x69, 0x6c, 0x74, 0xff, 0x5c, 0x5e, 0x68, 0xff, 0x45, 0x4a, 0x53, 0xff, 0x7e, 0x83, 0x8c, 0xff, 0xc5, 0xca, 0xd3, 0xff, 0xd5, 0xda, 0xe3, 0xff, 0xd6, 0xdb, 0xe4, 0xff, 0x83, 0x88, 0x91, 0xff, 0x81, 0x86, 0x8f, 0xff, 0xf0, 0xf5, 0xfe, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 
  0xf4, 0xf4, 0xf4, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0xf7, 0xf6, 0xf8, 0xff, 0xfa, 0xfc, 0xfd, 0xff, 0xf6, 0xf7, 0xfb, 0xff, 0xea, 0xed, 0xf2, 0xff, 0xf6, 0xf8, 0xff, 0xff, 0xd1, 0xd4, 0xdc, 0xff, 0xf2, 0xf5, 0xfd, 0xff, 0x58, 0x5a, 0x64, 0xff, 0xa1, 0xa3, 0xad, 0xff, 0xe8, 0xea, 0xf4, 0xff, 0xf0, 0xf3, 0xfb, 0xff, 0xcb, 0xce, 0xd6, 0xff, 0xa1, 0xa4, 0xac, 0xff, 0xfa, 0xfd, 0xff, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 
  0xfa, 0xf8, 0xf7, 0xff, 0xf1, 0xf2, 0xf0, 0xff, 0xfb, 0xfb, 0xfb, 0xff, 0xf2, 0xf1, 0xf3, 0xff, 0xf5, 0xf7, 0xf8, 0xff, 0xf5, 0xf6, 0xfa, 0xff, 0xf1, 0xf4, 0xf9, 0xff, 0xf9, 0xfc, 0xff, 0xff, 0xfa, 0xfd, 0xff, 0xff, 0xf7, 0xf9, 0xff, 0xff, 0xf2, 0xf5, 0xfd, 0xff, 0xf6, 0xfa, 0xff, 0xff, 0xf6, 0xf9, 0xfe, 0xff, 0xf8, 0xfb, 0xff, 0xff, 0xfa, 0xfd, 0xff, 0xff, 0xf2, 0xf5, 0xfa, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 
  0xf9, 0xf7, 0xf6, 0xff, 0xf7, 0xf5, 0xf4, 0xff, 0xfa, 0xf8, 0xf7, 0xff, 0xf4, 0xf4, 0xf4, 0xff, 0xf9, 0xf9, 0xf9, 0xff, 0xf6, 0xf5, 0xf7, 0xff, 0xf2, 0xf3, 0xf7, 0xff, 0xf7, 0xf8, 0xfc, 0xff, 0xef, 0xf0, 0xf4, 0xff, 0xf6, 0xf7, 0xfb, 0xff, 0xf6, 0xf7, 0xfb, 0xff, 0xf5, 0xf6, 0xfa, 0xff, 0xf2, 0xf3, 0xf7, 0xff, 0xf5, 0xf6, 0xfa, 0xff, 0xf5, 0xf7, 0xf8, 0xff, 0xf5, 0xf7, 0xf8, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 
  0xf8, 0xf7, 0xf3, 0xff, 0xfc, 0xfb, 0xf7, 0xff, 0xf6, 0xf4, 0xf3, 0xff, 0xf7, 0xf5, 0xf4, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf3, 0xf3, 0xf3, 0xff, 0xfd, 0xfc, 0xfe, 0xff, 0xf1, 0xf0, 0xf2, 0xff, 0xfa, 0xf9, 0xfb, 0xff, 0xf3, 0xf5, 0xf6, 0xff, 0xf8, 0xf7, 0xf9, 0xff, 0xf4, 0xf3, 0xf5, 0xff, 0xf6, 0xf5, 0xf7, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf1, 0xf1, 0xf1, 0xff, 0xfa, 0xfa, 0xfa, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 
  0xf6, 0xf5, 0xf1, 0xff, 0xf5, 0xf4, 0xf0, 0xff, 0xf9, 0xf8, 0xf4, 0xff, 0xf7, 0xf5, 0xf4, 0xff, 0xfc, 0xfa, 0xf9, 0xff, 0xf9, 0xf9, 0xf9, 0xff, 0xf2, 0xf2, 0xf2, 0xff, 0xfa, 0xfa, 0xfa, 0xff, 0xf4, 0xf4, 0xf4, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf8, 0xf8, 0xf8, 0xff, 0xf8, 0xf8, 0xf8, 0xff, 0xf8, 0xf8, 0xf8, 0xff, 0xf4, 0xf5, 0xf3, 0xff, 0xfe, 0xfc, 0xfb, 0xff, 0xf9, 0xf7, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 
#endif
};

const lv_img_dsc_t Player = {
  .header.always_zero = 0,
  .header.w = 22,
  .header.h = 22,
  .data_size = 484 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .data = Player_map,
};
