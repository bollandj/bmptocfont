/* https://www.reddit.com/r/haskellgamedev/comments/8s7lch/help_yourself_to_a_perfectly_square_scalable_free/ */

#ifndef FONT_H_
#define FONT_H_

#include <avr/pgmspace.h>

#define CHAR_WIDTH 8
#define CHAR_HEIGHT 8

#define FONT_OFFSET 0

const uint8_t font[] PROGMEM =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0
	0x3C, 0x42, 0x95, 0x91, 0x91, 0x95, 0x42, // 1
	0x3C, 0x7E, 0xEB, 0xEF, 0xEF, 0xEB, 0x7E, // 2
	0x08, 0x1C, 0x3E, 0x7C, 0x7C, 0x3E, 0x1C, // 3
	0x08, 0x1C, 0x3E, 0x7F, 0x3E, 0x1C, 0x08, // 4
	0x1C, 0x1C, 0x4B, 0x7F, 0x4B, 0x1C, 0x1C, // 5
	0x00, 0x1C, 0x5E, 0x7F, 0x5E, 0x1C, 0x00, // 6
	0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, // 7
	0xFF, 0xFF, 0xE7, 0xC3, 0xC3, 0xE7, 0xFF, // 8
	0x00, 0x18, 0x24, 0x42, 0x42, 0x24, 0x18, // 9
	0xFF, 0xE7, 0xDB, 0xBD, 0xBD, 0xDB, 0xE7, // 10
	0x60, 0x90, 0x90, 0x70, 0x0A, 0x06, 0x0E, // 11
	0x00, 0x00, 0x4E, 0x51, 0xF1, 0x51, 0x4E, // 12
	0x00, 0xC0, 0xC0, 0xFF, 0x01, 0x01, 0x00, // 13
	0xC0, 0xC0, 0xFF, 0x05, 0xC5, 0xC5, 0xFF, // 14
	0x49, 0x2A, 0x00, 0x63, 0x00, 0x2A, 0x49, // 15
	0xFF, 0xFF, 0x7E, 0x7E, 0x3C, 0x3C, 0x18, // 16
	0x18, 0x18, 0x3C, 0x3C, 0x7E, 0x7E, 0xFF, // 17
	0x00, 0x24, 0x66, 0xFF, 0xFF, 0x66, 0x24, // 18
	0x00, 0x00, 0x2F, 0x00, 0x2F, 0x00, 0x00, // 19
	0x00, 0x06, 0x0F, 0xFF, 0x01, 0xFF, 0x01, // 20
	0x00, 0x00, 0x9A, 0xA5, 0xA5, 0x59, 0x00, // 21
	0x00, 0x70, 0x70, 0x70, 0x70, 0x70, 0x00, // 22
	0x00, 0xA4, 0xE6, 0xFF, 0xFF, 0xE6, 0xA4, // 23
	0x00, 0x04, 0x06, 0xFF, 0xFF, 0x06, 0x04, // 24
	0x00, 0x20, 0x60, 0xFF, 0xFF, 0x60, 0x20, // 25
	0x18, 0x18, 0x18, 0x18, 0x18, 0x7E, 0x3C, // 26
	0x18, 0x3C, 0x7E, 0x18, 0x18, 0x18, 0x18, // 27
	0x00, 0x38, 0x20, 0x20, 0x20, 0x20, 0x20, // 28
	0x18, 0x3C, 0x7E, 0x18, 0x18, 0x7E, 0x3C, // 29
	0xC0, 0xF0, 0xFC, 0xFF, 0xFF, 0xFC, 0xF0, // 30
	0x03, 0x0F, 0x3F, 0xFF, 0xFF, 0x3F, 0x0F, // 31
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
	0x00, 0x00, 0x00, 0x2F, 0x00, 0x00, 0x00, // 33
	0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, // 34
	0x24, 0x24, 0xFF, 0x24, 0x24, 0xFF, 0x24, // 35
	0x00, 0x24, 0x2A, 0x7F, 0x2A, 0x12, 0x00, // 36
	0x00, 0x00, 0x24, 0x10, 0x08, 0x24, 0x00, // 37
	0x00, 0x60, 0x96, 0x89, 0xD6, 0x20, 0x40, // 38
	0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, // 39
	0x00, 0x00, 0x18, 0x24, 0x42, 0x00, 0x00, // 40
	0x00, 0x00, 0x42, 0x24, 0x18, 0x00, 0x00, // 41
	0x00, 0x54, 0x38, 0x7C, 0x38, 0x54, 0x00, // 42
	0x00, 0x10, 0x10, 0x7C, 0x10, 0x10, 0x00, // 43
	0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, // 44
	0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // 45
	0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, // 46
	0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, // 47
	0x00, 0x3E, 0x71, 0x49, 0x47, 0x3E, 0x00, // 48
	0x00, 0x00, 0x41, 0x7F, 0x40, 0x00, 0x00, // 49
	0x00, 0x72, 0x49, 0x49, 0x49, 0x46, 0x00, // 50
	0x00, 0x22, 0x41, 0x49, 0x49, 0x36, 0x00, // 51
	0x00, 0x1F, 0x10, 0x7E, 0x10, 0x10, 0x00, // 52
	0x00, 0x4F, 0x49, 0x49, 0x49, 0x31, 0x00, // 53
	0x00, 0x3E, 0x49, 0x49, 0x49, 0x30, 0x00, // 54
	0x00, 0x01, 0x01, 0x01, 0x01, 0x7F, 0x00, // 55
	0x00, 0x00, 0x36, 0x49, 0x49, 0x36, 0x00, // 56
	0x00, 0x00, 0x06, 0x49, 0x29, 0x1E, 0x00, // 57
	0x00, 0x00, 0x00, 0x33, 0x33, 0x00, 0x00, // 58
	0x00, 0x00, 0xC0, 0xF3, 0x33, 0x00, 0x00, // 59
	0x00, 0x00, 0x08, 0x14, 0x22, 0x41, 0x00, // 60
	0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, // 61
	0x00, 0x00, 0x41, 0x22, 0x14, 0x08, 0x00, // 62
	0x00, 0x06, 0x01, 0xB1, 0x11, 0x0E, 0x00, // 63
	0x00, 0x3E, 0x41, 0x5D, 0x6D, 0x61, 0x5E, // 64
	0x7E, 0x09, 0x09, 0x09, 0x09, 0x09, 0x7E, // 65
	0x7F, 0x49, 0x49, 0x49, 0x49, 0x49, 0x36, // 66
	0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, // 67
	0x7F, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, // 68
	0x7F, 0x49, 0x49, 0x49, 0x41, 0x41, 0x41, // 69
	0x7F, 0x09, 0x09, 0x09, 0x01, 0x01, 0x01, // 70
	0x3E, 0x41, 0x41, 0x41, 0x41, 0x49, 0x39, // 71
	0x7F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x7F, // 72
	0x00, 0x41, 0x41, 0x7F, 0x41, 0x41, 0x00, // 73
	0x30, 0x41, 0x41, 0x3F, 0x01, 0x01, 0x00, // 74
	0x00, 0x7F, 0x08, 0x08, 0x14, 0x22, 0x41, // 75
	0x00, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x00, // 76
	0x7F, 0x01, 0x02, 0x04, 0x02, 0x01, 0x7F, // 77
	0x7F, 0x01, 0x02, 0x04, 0x08, 0x10, 0x7F, // 78
	0x3E, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3E, // 79
	0x7F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06, // 80
	0x3E, 0x41, 0x41, 0x41, 0x51, 0x61, 0x7E, // 81
	0x7F, 0x09, 0x09, 0x19, 0x29, 0x49, 0x06, // 82
	0x46, 0x49, 0x49, 0x49, 0x49, 0x49, 0x31, // 83
	0x01, 0x01, 0x01, 0x7F, 0x01, 0x01, 0x01, // 84
	0x3F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, // 85
	0x03, 0x0C, 0x30, 0x40, 0x30, 0x0C, 0x03, // 86
	0x7F, 0x40, 0x20, 0x10, 0x20, 0x40, 0x7F, // 87
	0x41, 0x22, 0x14, 0x08, 0x14, 0x22, 0x41, // 88
	0x01, 0x02, 0x04, 0x78, 0x04, 0x02, 0x01, // 89
	0x41, 0x61, 0x51, 0x49, 0x45, 0x43, 0x41, // 90
	0x00, 0x00, 0x7F, 0x41, 0x41, 0x00, 0x00, // 91
	0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, // 92
	0x00, 0x00, 0x00, 0x41, 0x41, 0x7F, 0x00, // 93
	0x00, 0x04, 0x02, 0x01, 0x02, 0x04, 0x00, // 94
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
	0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, // 96
	0x38, 0x44, 0x44, 0x44, 0x44, 0x3C, 0x40, // 97
	0x7F, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, // 98
	0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, // 99
	0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x7F, // 100
	0x38, 0x54, 0x54, 0x54, 0x54, 0x54, 0x48, // 101
	0x04, 0x7E, 0x05, 0x05, 0x01, 0x01, 0x02, // 102
	0x98, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0x78, // 103
	0x7F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x78, // 104
	0x00, 0x00, 0x3D, 0x40, 0x40, 0x00, 0x00, // 105
	0x00, 0x40, 0x80, 0x80, 0x80, 0x7D, 0x00, // 106
	0x00, 0x7F, 0x08, 0x14, 0x22, 0x40, 0x00, // 107
	0x00, 0x00, 0x3F, 0x40, 0x40, 0x40, 0x00, // 108
	0x78, 0x04, 0x04, 0x18, 0x04, 0x04, 0x78, // 109
	0x7C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x78, // 110
	0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, // 111
	0xFC, 0x24, 0x24, 0x24, 0x24, 0x24, 0x18, // 112
	0x18, 0x24, 0x24, 0x24, 0x24, 0xFC, 0x40, // 113
	0x78, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // 114
	0x48, 0x54, 0x54, 0x54, 0x54, 0x54, 0x20, // 115
	0x04, 0x04, 0x3E, 0x44, 0x44, 0x44, 0x40, // 116
	0x3C, 0x40, 0x40, 0x40, 0x40, 0x20, 0x7C, // 117
	0x0C, 0x10, 0x20, 0x40, 0x20, 0x10, 0x0C, // 118
	0x3C, 0x40, 0x40, 0x30, 0x40, 0x40, 0x3C, // 119
	0x00, 0x44, 0x28, 0x10, 0x28, 0x44, 0x00, // 120
	0x1C, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0x7C, // 121
	0x64, 0x64, 0x54, 0x54, 0x4C, 0x4C, 0x44, // 122
	0x00, 0x00, 0x08, 0x36, 0x41, 0x41, 0x00, // 123
	0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, // 124
	0x00, 0x00, 0x41, 0x41, 0x36, 0x08, 0x00, // 125
	0x04, 0x02, 0x01, 0x02, 0x04, 0x02, 0x01, // 126
	0x00, 0x78, 0x46, 0x41, 0x46, 0x78, 0x00, // 127
};

#endif /* FONT_H_ */