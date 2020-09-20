/* https://forums.nesdev.com/viewtopic.php?f=21&t=10284 */

#ifndef FONT_H_
#define FONT_H_

#include <avr/pgmspace.h>

#define CHAR_WIDTH 8
#define CHAR_HEIGHT 8

#define FONT_OFFSET 32

const uint8_t font[] PROGMEM =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
	0x00, 0x00, 0x0E, 0xBF, 0xBF, 0x0E, 0x00, // 33
	0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, // 34
	0x14, 0x7F, 0x7F, 0x14, 0x7F, 0x7F, 0x14, // 35
	0x24, 0x2E, 0x6B, 0x6B, 0x3A, 0x12, 0x00, // 36
	0x46, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x62, // 37
	0x30, 0x7A, 0x4F, 0x5D, 0x37, 0x7A, 0x48, // 38
	0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, // 39
	0x00, 0x1C, 0x3E, 0x63, 0x41, 0x00, 0x00, // 40
	0x00, 0x41, 0x63, 0x3E, 0x1C, 0x00, 0x00, // 41
	0x08, 0x2A, 0x3E, 0x1C, 0x1C, 0x3E, 0x2A, // 42
	0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00, // 43
	0x00, 0x80, 0xE0, 0x60, 0x00, 0x00, 0x00, // 44
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 45
	0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, // 46
	0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, // 47
	0x1C, 0x3E, 0x61, 0x41, 0x43, 0x3E, 0x1C, // 48
	0x00, 0x40, 0x42, 0x7F, 0x7F, 0x40, 0x40, // 49
	0x62, 0x73, 0x79, 0x59, 0x5D, 0x4F, 0x46, // 50
	0x20, 0x61, 0x49, 0x4D, 0x4F, 0x7B, 0x31, // 51
	0x18, 0x1C, 0x16, 0x13, 0x7F, 0x7F, 0x10, // 52
	0x27, 0x67, 0x45, 0x45, 0x45, 0x7D, 0x38, // 53
	0x3C, 0x7E, 0x4B, 0x49, 0x49, 0x79, 0x30, // 54
	0x03, 0x03, 0x71, 0x79, 0x0D, 0x07, 0x03, // 55
	0x36, 0x7F, 0x49, 0x49, 0x49, 0x7F, 0x36, // 56
	0x06, 0x4F, 0x49, 0x49, 0x69, 0x3F, 0x1E, // 57
	0x00, 0x00, 0x66, 0x66, 0x00, 0x00, 0x00, // 58
	0x00, 0x80, 0xE6, 0x66, 0x00, 0x00, 0x00, // 59
	0x08, 0x1C, 0x36, 0x63, 0x41, 0x00, 0x00, // 60
	0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, // 61
	0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00, // 62
	0x02, 0x03, 0x51, 0x59, 0x0F, 0x06, 0x00, // 63
	0x3E, 0x7F, 0x41, 0x5D, 0x5D, 0x1F, 0x1E, // 64
	0x7C, 0x7E, 0x13, 0x11, 0x13, 0x7E, 0x7C, // 65
	0x7F, 0x7F, 0x49, 0x49, 0x49, 0x7F, 0x36, // 66
	0x1C, 0x3E, 0x63, 0x41, 0x41, 0x63, 0x22, // 67
	0x7F, 0x7F, 0x41, 0x41, 0x63, 0x3E, 0x1C, // 68
	0x7F, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x41, // 69
	0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x01, // 70
	0x1C, 0x3E, 0x63, 0x41, 0x49, 0x79, 0x79, // 71
	0x7F, 0x7F, 0x08, 0x08, 0x08, 0x7F, 0x7F, // 72
	0x00, 0x41, 0x41, 0x7F, 0x7F, 0x41, 0x41, // 73
	0x30, 0x70, 0x40, 0x41, 0x41, 0x7F, 0x3F, // 74
	0x7F, 0x7F, 0x18, 0x3C, 0x76, 0x63, 0x41, // 75
	0x00, 0x7F, 0x7F, 0x40, 0x40, 0x40, 0x40, // 76
	0x7F, 0x7F, 0x0E, 0x1C, 0x0E, 0x7F, 0x7F, // 77
	0x7F, 0x7F, 0x0E, 0x1C, 0x38, 0x7F, 0x7F, // 78
	0x3E, 0x7F, 0x41, 0x41, 0x41, 0x7F, 0x3E, // 79
	0x7F, 0x7F, 0x11, 0x11, 0x11, 0x1F, 0x0E, // 80
	0x3E, 0x7F, 0x41, 0x51, 0x71, 0x3F, 0x5E, // 81
	0x7F, 0x7F, 0x11, 0x31, 0x79, 0x6F, 0x4E, // 82
	0x26, 0x6F, 0x49, 0x49, 0x4B, 0x7A, 0x30, // 83
	0x00, 0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, // 84
	0x3F, 0x7F, 0x40, 0x40, 0x40, 0x7F, 0x3F, // 85
	0x0F, 0x1F, 0x38, 0x70, 0x38, 0x1F, 0x0F, // 86
	0x7F, 0x7F, 0x38, 0x1C, 0x38, 0x7F, 0x7F, // 87
	0x63, 0x77, 0x3E, 0x1C, 0x3E, 0x77, 0x63, // 88
	0x00, 0x07, 0x0F, 0x78, 0x78, 0x0F, 0x07, // 89
	0x61, 0x71, 0x79, 0x5D, 0x4F, 0x47, 0x43, // 90
	0x00, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00, // 91
	0x01, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, // 92
	0x00, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, // 93
	0x08, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x08, // 94
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
	0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00, // 96
	0x00, 0x38, 0x7C, 0x44, 0x44, 0x3C, 0x78, // 97
	0x00, 0x7F, 0x7F, 0x44, 0x44, 0x7C, 0x38, // 98
	0x00, 0x38, 0x7C, 0x44, 0x44, 0x44, 0x44, // 99
	0x00, 0x38, 0x7C, 0x44, 0x44, 0x7F, 0x7F, // 100
	0x00, 0x38, 0x7C, 0x54, 0x54, 0x5C, 0x58, // 101
	0x00, 0x08, 0x08, 0x7E, 0x7F, 0x09, 0x09, // 102
	0x00, 0x18, 0xBC, 0xA4, 0xA4, 0xFC, 0x7C, // 103
	0x00, 0x7F, 0x7F, 0x08, 0x08, 0x78, 0x70, // 104
	0x00, 0x00, 0x00, 0x7A, 0x7A, 0x00, 0x00, // 105
	0x00, 0x40, 0xC0, 0x80, 0x80, 0xFA, 0x7A, // 106
	0x00, 0x7F, 0x7F, 0x20, 0x30, 0x68, 0x44, // 107
	0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, // 108
	0x00, 0x7C, 0x7C, 0x04, 0x78, 0x04, 0x7C, // 109
	0x00, 0x7C, 0x7C, 0x04, 0x04, 0x7C, 0x78, // 110
	0x00, 0x38, 0x7C, 0x44, 0x44, 0x7C, 0x38, // 111
	0x00, 0xFC, 0xFC, 0x24, 0x24, 0x3C, 0x18, // 112
	0x00, 0x18, 0x3C, 0x24, 0x24, 0xFC, 0xFC, // 113
	0x00, 0x7C, 0x7C, 0x08, 0x04, 0x04, 0x04, // 114
	0x00, 0x48, 0x54, 0x54, 0x54, 0x74, 0x20, // 115
	0x04, 0x04, 0x3F, 0x7F, 0x44, 0x44, 0x00, // 116
	0x00, 0x3C, 0x7C, 0x40, 0x40, 0x7C, 0x3C, // 117
	0x00, 0x1C, 0x3C, 0x40, 0x40, 0x3C, 0x1C, // 118
	0x00, 0x3C, 0x7C, 0x40, 0x38, 0x40, 0x7C, // 119
	0x00, 0x44, 0x6C, 0x38, 0x10, 0x38, 0x6C, // 120
	0x00, 0x8C, 0xDC, 0x60, 0x30, 0x1C, 0x0C, // 121
	0x00, 0x44, 0x64, 0x74, 0x5C, 0x4C, 0x44, // 122
	0x08, 0x08, 0x3E, 0x77, 0x41, 0x41, 0x00, // 123
	0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, // 124
	0x41, 0x41, 0x77, 0x3E, 0x08, 0x08, 0x00, // 125
	0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, // 126
	0x70, 0x78, 0x4C, 0x46, 0x4C, 0x78, 0x70, // 127
};

#endif /* FONT_H_ */