// common.h -- Defines typedefs and some global functions.
//             From JamesM's kernel development tutorials.

#ifndef COMMON_H
#define COMMON_H

// Some nice typedefs, to standardise sizes across platforms.
// These typedefs are written for 32-bit X86.
typedef unsigned int   u32int;
typedef          int   s32int;
typedef unsigned short u16int;
typedef          short s16int;
typedef unsigned char  u8int;
typedef          char  s8int;

void outb(u16int port, u8int value);
u8int inb(u16int port);
u16int inw(u16int port);
char *strcat(char *dest, const char *src);
char *strcpy(char *dest, const char *src);
int strcmp(char *str1, char *str2);
void memset(u8int *dest, u8int val, u32int len);
void memcpy(u8int *dest, const u8int *src, u32int len);
unsigned int strlen(const char * str);

#endif // COMMON_H
