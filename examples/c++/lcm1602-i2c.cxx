/*
 * Author: Thomas Ingleby <thomas.c.ingleby@intel.com>
 * Copyright (c) 2014 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "lcm1602.hpp"
#include "upm_utilities.h"

int
main(int argc, char **argv)
{
//! [Interesting]
    upm::Lcm1602* lcd = new upm::Lcm1602(0, 0x27);
    lcd->setCursor(0,0);
    lcd->write("Hello World");
//! [Interesting]
    upm_delay(3);
    lcd->setCursor(1,2);
    lcd->write("Hello World");
    upm_delay(3);
    lcd->setCursor(2,4);
    lcd->write("Hello World");
    upm_delay(3);
    lcd->setCursor(3,6);
    lcd->write("Hello World");
    upm_delay(3);
    delete lcd;

    return 0;
}
