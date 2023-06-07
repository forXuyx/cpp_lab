//
// Created by xyx on 23-6-7.
//
#include <stdio.h>

int main()
{
    signed char a = 127; // 01111111
    unsigned char b = 0xff; // 11111111
    unsigned char c = 0; // 00000000

    a++;
    b++;
    c--;
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);

    return 0;
}

/* I guess
 * a = 0
 * b = 128
 * c = 255 */

/* sadly, I'm wrong.
 * fine. Let's see how it work
 * Firstly, while a++, the a will overflows the maximum value and wraps around to the minimum value, so, the answer is -128.
 * Secondly, while b++, because of 'unsigned', the maximum value will be 0.
 * At last, c will be 255, because it was the minimum value.
 * Well, it looks like a loop, unsigned range from 0 to 255, and the signed range from -128 to 127. */