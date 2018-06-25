include(__link__.m4)

#ifndef __MZGRAPHICS_H__
#define __MZGRAPHICS_H__

// ----------------------------------------------------------------------------
//
// SHARP MZ-800 Graphics
// Graphics functions
//
// ----------------------------------------------------------------------------

#include <stdint.h>

// Colors

typedef enum MZGFXColor {
  MZGFXColorBlack,
  MZGFXColorBlue,
  MZGFXColorRed,
  MZGFXColorPurple,
  MZGFXColorGreen,
  MZGFXColorCyan,
  MZGFXColorYellow,
  MZGFXColorWhite,

  MZGFXColorGray,
  MZGFXColorLightBlue,
  MZGFXColorLightRed,
  MZGFXColorLightPurple,
  MZGFXColorLightGreen,
  MZGFXColorLightCyan,
  MZGFXColorLightYellow,
  MZGFXColorLightWhite
};

// FUNCTIONS

__DPROTO(,,void,,MZGFXBorder,uint8_t color)

#endif
