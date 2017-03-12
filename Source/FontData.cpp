/*
 *  Cannon Fodder
 *  ------------------------
 *
 *  Copyright (C) 2008-2017 Robert Crossfield
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include "stdafx.hpp"

const uint8 mFont_Briefing_Width[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 
  0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 
  0x08, 0x08, 0x08, 0x03, 0x07, 0x08, 0x08, 0x0A, 0x08, 0x08, 
  0x08, 0x08, 0x08, 0x08, 0x09, 0x08, 0x08, 0x0A, 0x08, 0x09, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8 mFont_Recruit_Width[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x08, 
  0x09, 0x09, 0x0A, 0x09, 0x0A, 0x09, 0x0A, 0x0A, 0x0C, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x0D, 0x0D, 0x0B, 
  0x0B, 0x0E, 0x0D, 0x06, 0x08, 0x0D, 0x0C, 0x10, 0x0D, 0x0E, 
  0x0B, 0x0E, 0x0C, 0x0A, 0x0C, 0x0D, 0x0F, 0x0F, 0x0E, 0x0E, 
  0x0C, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8 mFont_Sidebar_Width[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x04,
	0x05, 0x05, 0x06, 0x05, 0x05, 0x05, 0x05, 0x05, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};

const uint8 mFont_Underlined_Width[] = {
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    0,   0,   8,   0,   0,   0,   0,   0,   0,   7, 
    0,   0,   0,   0,   0,   0,   0,   0,  11,   8, 
    9,   8,  10,   9,  10,   9,  10,  10,   0,   0, 
    0,   0,   0,   0,   0,  15,  12,  13,  13,  11, 
   11,  14,  13,   6,   8,  13,  12,  16,  13,  14, 
   11,  15,  13,  10,  12,  13,  15,  16,  14,  13, 
   12,   0,   0,   0,   0,   0
};

const uint8 mFont_Service_Width[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x06,
	0x07, 0x07, 0x07, 0x06, 0x07, 0x07, 0x06, 0x07, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x08, 0x09, 0x0A, 0x08,
	0x08, 0x0A, 0x09, 0x04, 0x05, 0x09, 0x08, 0x0C, 0x0A, 0x09,
	0x07, 0x09, 0x0A, 0x07, 0x08, 0x09, 0x0A, 0x0E, 0x0B, 0x0A,
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x05, 0x07, 0x08, 0x04, 0x04, 0x08, 0x04, 0x0C,
	0x08, 0x06, 0x07, 0x07, 0x06, 0x05, 0x05, 0x07, 0x08, 0x0D,
	0x08, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00
};


const uint8 mFont_Intro_Width[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x09, 0x07, 
  0x08, 0x08, 0x09, 0x08, 0x09, 0x08, 0x09, 0x09, 0x0C, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0B, 0x0C, 0x0C, 0x0A, 
  0x0A, 0x0D, 0x0C, 0x05, 0x07, 0x0C, 0x0B, 0x0E, 0x0C, 0x0D, 
  0x0A, 0x0D, 0x0C, 0x09, 0x0B, 0x0C, 0x0E, 0x0E, 0x0D, 0x0D, 
  0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x08, 
  0x09, 0x08, 0x07, 0x09, 0x0A, 0x05, 0x05, 0x0A, 0x05, 0x0F, 
  0x0A, 0x09, 0x09, 0x09, 0x08, 0x08, 0x07, 0x09, 0x0A, 0x0E, 
  0x0A, 0x0A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0xB0, 
  0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 
  0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 
  0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 
  0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 
  0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 
  0xA0, 0xA0, 0x90, 0x90, 0x80, 0x80, 0x70, 0x70, 0x60, 0x60, 
  0x50, 0x50, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0x40, 0x40, 0x50, 0x50, 0x60, 0x60, 0x70, 0x70, 0x80, 0x80, 
  0x90, 0x90, 0xA0, 0xA0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 
  0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0
};

const uint8 mFont_ServiceName_Width[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0A, 0x0B, 0x0B, 0x0A,
	0x0A, 0x0C, 0x0A, 0x04, 0x0B, 0x0B, 0x0B, 0x0C, 0x0B, 0x0C,
	0x0A, 0x0C, 0x0A, 0x0B, 0x0C, 0x0B, 0x0C, 0x0C, 0x0B, 0x0C,
	0x0A, 0x00, 0x00, 0x00, 0x00, 0x00
};
