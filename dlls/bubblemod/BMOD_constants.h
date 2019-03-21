// ---------------------------------------------------------------
// BubbleMod
// 
// AUTHOR
//        Tyler Lund <halflife@bubblemod.org>
//
// LICENSE                                                            
//                                                                    
//        Permission is granted to anyone to use this  software  for  
//        any purpose on any computer system, and to redistribute it  
//        in any way, subject to the following restrictions:          
//                                                                    
//        1. The author is not responsible for the  consequences  of  
//           use of this software, no matter how awful, even if they  
//           arise from defects in it.                                
//        2. The origin of this software must not be misrepresented,  
//           either by explicit claim or by omission.                 
//        3. Altered  versions  must  be plainly marked as such, and  
//           must  not  be  misrepresented  (by  explicit  claim  or  
//           omission) as being the original software.                
//        3a. It would be nice if I got  a  copy  of  your  improved  
//            version  sent to halflife@bubblemod.org. 
//        4. This notice must not be removed or altered.              
//                                                                    
// ---------------------------------------------------------------
// Global BubbleMod Constants

#ifndef BMOD_CONSTANTS_H
#define BMOD_CONSTANTS_H

// ---------------------------------------------------------------
// Branch customizations

// Fill this in with the title of your bubblemod branch
#define BMOD_BRANCH_NAME	"Bubblemod+"
//
// The URL of the website describing your branch
#define BMOD_BRANCH_URL		"https://github.com/tyabus/hlsdk-xash3d-bmod"

// End branch customizations
// ---------------------------------------------------------------

#if defined(_WIN32) && defined(_MSC_VER)
#define BMOD_PLATFORM			"WIN32"
#elif defined(_WIN32) && defined(__MINGW32_)
#define BMOD_PLATFORM			"WIN32-MinGW"
#elif defined(__ANDROID__)
#define BMOD_PLATFORM			"Android"
#elif defined(__APPLE__) && ( defined(__arm__) || defined(__aarch64__) )
#define BMOD_PLATFORM			"ios"
#elif defined(__APPLE__)
#define BMOD_PLATFORM			"Apple"
#elif defined(__FreeBSD__)
#define BMOD_PLATFORM			"FreeBSD"
#elif defined(__NetBSD__)
#define BMOD_PLATFORM			"NetBSD"
#elif defined(__OpenBSD__)
#define BMOD_PLATFORM			"OpenBSD"
#elif defined(__DragonFly__)
#define BMOD_PLATFORM			"DragonFly"
#elif defined(sun) || defined(__sun)
#define BMOD_PLATFORM			"Solaris"
#else
#define BMOD_PLATFORM			"Linux"
#endif

#if defined(__amd64__) || defined(_M_X64)
#define BMOD_ARCH			"amd64"
#elif defined(__aarch64__)
#define BMOD_ARCH			"arm64"
#elif defined(__i386__) || defined(_X86_) || defined(_M_IX86)
#define BMOD_ARCH			"i386"
#elif defined(__arm__) || defined(_M_ARM)
#define BMOD_ARCH			"arm"
#elif defined(__mips__)
#define BMOD_ARCH			"mips"
#elif defined (__powerpc__)
#define BMOD_ARCH			"powerpc"
#elif defined (__sparc__)
#define BMOD_ARCH			"sparc"
#elif defined (__ia64__)
#define BMOD_ARCH			"itanium"
#else
#define BMOD_ARCH			"unknown"
#endif

#endif
