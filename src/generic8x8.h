/* https://forums.nesdev.com/viewtopic.php?f=21&t=10284 */

#ifndef FONT_H_
#define FONT_H_

#include <avr/pgmspace.h>

#define CHAR_WIDTH 8
#define CHAR_HEIGHT 8

#define FONT_OFFSET 0

const uint8_t font[] PROGMEM =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 1
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 3
	0x3E, 0x41, 0x49, 0x55, 0x55, 0x41, 0x3E, // 4
	0x18, 0x24, 0x24, 0x10, 0x08, 0x24, 0x24, // 5
	0x40, 0x78, 0x0F, 0x41, 0x78, 0x0F, 0x01, // 6
	0x08, 0x0C, 0x7E, 0x7F, 0x7E, 0x0C, 0x08, // 7
	0x08, 0x18, 0x3F, 0x7F, 0x3F, 0x18, 0x08, // 8
	0x08, 0x1C, 0x3E, 0x7F, 0x1C, 0x1C, 0x1C, // 9
	0x1C, 0x1C, 0x1C, 0x7F, 0x3E, 0x1C, 0x08, // 10
	0x00, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x3C, // 11
	0x00, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42, // 12
	0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, // 13
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 14
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 15
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 16
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 17
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 18
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 19
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 20
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 21
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 22
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 23
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 24
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 25
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 26
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 27
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 28
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 29
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 30
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 31
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
	0x00, 0x00, 0x00, 0x6F, 0x6F, 0x00, 0x00, // 33
	0x00, 0x07, 0x03, 0x00, 0x07, 0x03, 0x00, // 34
	0x14, 0x14, 0x7F, 0x14, 0x7F, 0x14, 0x14, // 35
	0x04, 0x2E, 0x2A, 0x7F, 0x2A, 0x3A, 0x10, // 36
	0x02, 0x05, 0x42, 0x78, 0x0F, 0x21, 0x50, // 37
	0x36, 0x49, 0x49, 0x56, 0x20, 0x50, 0x4C, // 38
	0x00, 0x00, 0x00, 0x07, 0x03, 0x00, 0x00, // 39
	0x00, 0x00, 0x3E, 0x7F, 0x41, 0x00, 0x00, // 40
	0x00, 0x00, 0x41, 0x7F, 0x3E, 0x00, 0x00, // 41
	0x44, 0x64, 0x3C, 0x1F, 0x3C, 0x64, 0x44, // 42
	0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00, // 43
	0x00, 0x00, 0x40, 0x70, 0x30, 0x00, 0x00, // 44
	0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 45
	0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, // 46
	0x00, 0x00, 0x40, 0x78, 0x0F, 0x01, 0x00, // 47
	0x3E, 0x7F, 0x41, 0x49, 0x41, 0x7F, 0x3E, // 48
	0x00, 0x00, 0x02, 0x7F, 0x7F, 0x00, 0x00, // 49
	0x30, 0x79, 0x49, 0x49, 0x49, 0x4F, 0x46, // 50
	0x00, 0x41, 0x41, 0x49, 0x49, 0x7F, 0x36, // 51
	0x06, 0x0F, 0x09, 0x08, 0x7F, 0x7F, 0x08, // 52
	0x07, 0x4F, 0x49, 0x49, 0x49, 0x79, 0x31, // 53
	0x3E, 0x7F, 0x49, 0x49, 0x49, 0x79, 0x30, // 54
	0x01, 0x01, 0x01, 0x79, 0x7D, 0x07, 0x03, // 55
	0x36, 0x7F, 0x49, 0x49, 0x49, 0x7F, 0x36, // 56
	0x06, 0x4F, 0x49, 0x49, 0x49, 0x7F, 0x3E, // 57
	0x00, 0x00, 0x00, 0x36, 0x36, 0x00, 0x00, // 58
	0x00, 0x00, 0x40, 0x76, 0x36, 0x00, 0x00, // 59
	0x00, 0x08, 0x1C, 0x36, 0x63, 0x41, 0x00, // 60
	0x00, 0x14, 0x14, 0x14, 0x14, 0x14, 0x00, // 61
	0x00, 0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, // 62
	0x00, 0x01, 0x69, 0x6D, 0x05, 0x07, 0x02, // 63
	0x3E, 0x41, 0x49, 0x55, 0x5D, 0x11, 0x1E, // 64
	0x7E, 0x7F, 0x09, 0x09, 0x09, 0x7F, 0x7E, // 65
	0x7F, 0x7F, 0x49, 0x49, 0x49, 0x7F, 0x36, // 66
	0x3E, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x00, // 67
	0x7F, 0x7F, 0x41, 0x41, 0x41, 0x7F, 0x3E, // 68
	0x3E, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x41, // 69
	0x7E, 0x7F, 0x09, 0x09, 0x09, 0x01, 0x01, // 70
	0x3E, 0x7F, 0x41, 0x49, 0x49, 0x79, 0x38, // 71
	0x7F, 0x7F, 0x08, 0x08, 0x08, 0x7F, 0x7F, // 72
	0x41, 0x41, 0x7F, 0x7F, 0x41, 0x41, 0x00, // 73
	0x00, 0x40, 0x40, 0x40, 0x40, 0x7F, 0x3F, // 74
	0x7F, 0x7F, 0x08, 0x08, 0x1C, 0x77, 0x63, // 75
	0x3F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, // 76
	0x7F, 0x7F, 0x06, 0x0C, 0x06, 0x7F, 0x7F, // 77
	0x7F, 0x7F, 0x01, 0x01, 0x01, 0x7F, 0x7E, // 78
	0x3E, 0x7F, 0x41, 0x41, 0x41, 0x7F, 0x3E, // 79
	0x7F, 0x7F, 0x09, 0x09, 0x09, 0x0F, 0x06, // 80
	0x3E, 0x7F, 0x41, 0x41, 0x51, 0x2F, 0x5E, // 81
	0x7F, 0x7F, 0x09, 0x09, 0x09, 0x7F, 0x76, // 82
	0x06, 0x4F, 0x49, 0x49, 0x49, 0x79, 0x30, // 83
	0x00, 0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, // 84
	0x3F, 0x7F, 0x40, 0x40, 0x40, 0x7F, 0x3F, // 85
	0x7F, 0x7F, 0x30, 0x18, 0x0C, 0x07, 0x03, // 86
	0x3F, 0x7F, 0x30, 0x18, 0x30, 0x7F, 0x3F, // 87
	0x63, 0x77, 0x3E, 0x1C, 0x3E, 0x77, 0x63, // 88
	0x07, 0x4F, 0x48, 0x48, 0x48, 0x7F, 0x3F, // 89
	0x61, 0x71, 0x79, 0x5D, 0x4F, 0x47, 0x43, // 90
	0x00, 0x00, 0x7F, 0x7F, 0x41, 0x00, 0x00, // 91
	0x00, 0x00, 0x01, 0x0F, 0x78, 0x40, 0x00, // 92
	0x00, 0x00, 0x41, 0x7F, 0x7F, 0x00, 0x00, // 93
	0x08, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x08, // 94
	0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, // 95
	0x00, 0x00, 0x03, 0x07, 0x0E, 0x00, 0x00, // 96
	0x20, 0x74, 0x54, 0x54, 0x54, 0x7C, 0x78, // 97
	0x7F, 0x7F, 0x44, 0x44, 0x44, 0x7C, 0x38, // 98
	0x38, 0x7C, 0x44, 0x44, 0x44, 0x44, 0x44, // 99
	0x38, 0x7C, 0x44, 0x44, 0x44, 0x7F, 0x7F, // 100
	0x38, 0x7C, 0x54, 0x54, 0x54, 0x5C, 0x48, // 101
	0x00, 0x08, 0x7E, 0x7F, 0x09, 0x01, 0x01, // 102
	0x98, 0xBC, 0xA4, 0xA4, 0xA4, 0xFC, 0x78, // 103
	0x7F, 0x7F, 0x04, 0x04, 0x04, 0x7C, 0x78, // 104
	0x00, 0x00, 0x00, 0x7D, 0x7D, 0x00, 0x00, // 105
	0x00, 0x40, 0x40, 0x40, 0x40, 0x7D, 0x3D, // 106
	0x00, 0x7F, 0x7F, 0x10, 0x38, 0x6C, 0x44, // 107
	0x00, 0x00, 0x01, 0x7F, 0x7F, 0x00, 0x00, // 108
	0x7C, 0x7C, 0x04, 0x7C, 0x04, 0x7C, 0x78, // 109
	0x7C, 0x7C, 0x04, 0x04, 0x04, 0x7C, 0x78, // 110
	0x38, 0x7C, 0x44, 0x44, 0x44, 0x7C, 0x38, // 111
	0xFC, 0xFC, 0x24, 0x24, 0x24, 0x3C, 0x18, // 112
	0x18, 0x3C, 0x24, 0x24, 0x24, 0xFC, 0xFC, // 113
	0x78, 0x7C, 0x04, 0x04, 0x04, 0x00, 0x00, // 114
	0x48, 0x5C, 0x54, 0x54, 0x54, 0x74, 0x20, // 115
	0x00, 0x00, 0x04, 0x7F, 0x7F, 0x04, 0x00, // 116
	0x3C, 0x7C, 0x40, 0x40, 0x40, 0x7C, 0x7C, // 117
	0x7C, 0x7C, 0x40, 0x60, 0x30, 0x1C, 0x0C, // 118
	0x3C, 0x7C, 0x40, 0x7C, 0x40, 0x7C, 0x3C, // 119
	0x44, 0x6C, 0x38, 0x10, 0x38, 0x6C, 0x44, // 120
	0x9C, 0xBC, 0xA0, 0xA0, 0xA0, 0xFC, 0x7C, // 121
	0x64, 0x74, 0x54, 0x54, 0x54, 0x5C, 0x4C, // 122
	0x00, 0x08, 0x3E, 0x7F, 0x41, 0x00, 0x00, // 123
	0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, // 124
	0x00, 0x00, 0x41, 0x7F, 0x3E, 0x08, 0x00, // 125
	0x08, 0x08, 0x0C, 0x08, 0x10, 0x30, 0x10, // 126
	0x20, 0x54, 0x44, 0x3E, 0x09, 0x09, 0x02, // 127
};

#endif /* FONT_H_ */