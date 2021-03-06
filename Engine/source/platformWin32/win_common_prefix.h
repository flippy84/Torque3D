//-----------------------------------------------------------------------------
// Copyright (c) 2012 GarageGames, LLC
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//-----------------------------------------------------------------------------

//------------------------------
//win_common_prefix.h
//------------------------------

//------------------------------
// basic build defines
                                 
// define our platform
//#define TARG_WIN32              1
//#define WIN32                   1

// normally, this should be on for a PC build
//#define USEASSEMBLYTERRBLEND    1


//------------------------------
// setup compiler-specific flags

// METROWERKS CODEWARRIOR
//#if __MWERKS__
//#pragma once
// we turn this on to use inlined CW6-safe ASM in CWProject builds.
// ... and thus not require NASM for CWProject building ...
//#define TARG_INLINED_ASM        1
//#endif


// these are general build flags Torque uses.
//#define PNG_NO_READ_tIME        1
//#define PNG_NO_WRITE_TIME       1

//#define NO_MILES_OPENAL         1
