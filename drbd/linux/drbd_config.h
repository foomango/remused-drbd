/*
  drbd_config.h
  DRBD's compile time configuration.

  drbd is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.

  drbd is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with drbd; see the file COPYING.  If not, write to
  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef DRBD_CONFIG_H
#define DRBD_CONFIG_H

extern const char * drbd_buildtag(void);

#define REL_VERSION "8.0pre6"
#define API_VERSION 85
#define PRO_VERSION 85

// undef if you need the workaround in drbd_receiver
#define HAVE_UML_TO_VIRT 1

#define DBG_ALL_SYMBOLS // no static functs, improves quality of OOPS traces

//#define DBG_SPINLOCKS   // enables MUST_HOLD macro (assertions for spinlocks)
//#define DBG_ASSERTS     // drbd_assert_breakpoint() function
#define DUMP_MD 2       // Dump even all cstate changes (I like it!)
//#define PARANOIA // some extra checks

// Dump every hour the usage / not usage of zero copy IO
//#define SHOW_SENDPAGE_USAGE

// Define this to enable dynamic tracing controlled by module parameters
// at run time. This enables ALL use of dynamic tracing including packet
// and bio dumping, etc
#define ENABLE_DYNAMIC_TRACE

// You can disable the use of the sendpage() call (= zero copy
// IO )  If you have the feeling that this might be the cause
// for troubles.
// #define DRBD_DISABLE_SENDPAGE

// Enable fault insertion code
//#define DRBD_ENABLE_FAULTS

// RedHat's 2.6.9 kernels have the gfp_t type. Mainline has this feature
// since 2.6.16. If you build for RedHat enable the line below.
// #define KERNEL_HAS_GFP_T


#endif
