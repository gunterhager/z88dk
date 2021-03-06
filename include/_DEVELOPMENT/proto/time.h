include(__link__.m4)

#ifndef __TIME_H__
#define __TIME_H__

#include <stdint.h>

#ifndef NULL
#define NULL            ((void*)(0))
#endif

struct tm
{
   uint8_t  tm_sec;     // 0-59 seconds (leap seconds may be accommodated)
   uint8_t  tm_min;     // 0-59 minutes
   uint8_t  tm_hour;    // 0-23 hour (since midnight)
   uint8_t  tm_mday;    // 1-31 day of month
   uint8_t  tm_mon;     // 0-11 month (since January)
   int16_t  tm_year;    // years since 1900 (signed)
   
   // following is not filled in by some time functions
   
   uint8_t  tm_wday;    // 0-6   day (since Sunday)
   uint16_t tm_yday;    // 0-365 day (since January 1)
   int8_t   tm_isdst;   // daylight savings time <0 (not avail), 0 (no), >0 (yes)
   
   // following is bsd/gnu extension and may not be filled in by some targets
   
   // int32_t tm_gmtoff;  // seconds to add to UTC for local time
   // const unsigned char tm_zone[6];   // name of timezone
};

// MSDOS Time for FAT

struct dos_tm
{
   uint16_t time;
   uint16_t date;
};

// dos time affects tm.tm_sec through tm.tm_year

__DPROTO(,,void,,dostm_from_tm,struct dos_tm *,struct tm *)
__DPROTO(,,void,,tm_from_dostm,struct tm *,struct dos_tm *)

#endif
