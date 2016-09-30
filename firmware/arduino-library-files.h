#ifndef _ARDUINO_H_
#define _ARDUINO_H_

/*
 * Arduino compatability shim for Particle applications and libraries
 *
 * 2015, John Plocher
 * Released to the public domain
 *
 * Leverage the normal include <Arduino.h> mechanism to do the right thing.
 *
 * The "right thing" means
 *  assume the caller wants an Arduino/wiring-like environment,
 *  define the things that are defined for 'duino users in the official IDE env
 *  don't require libs and apps to sprinkle  ifdef PARTICLE or SPARK directives 
 */

#include <application.h>

#endif
