/* times stub for MMIXware.

   Copyright (C) 2001 Hans-Peter Nilsson.
   Permission to use, copy, modify, and distribute this software is freely
   granted, provided that this notice is preserved with no changes.
   THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
   IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
   PURPOSE.  */

#include <_ansi.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "sys/syscall.h"
#include "sys/times.h"

clock_t
times (struct tms *buffer)
{
  memset (buffer, 0, sizeof (*buffer));
  return 0;
}
