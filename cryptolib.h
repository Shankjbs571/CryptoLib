/* File: cryptolib.h
 author: Shashank */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>


#define rc4decrypt(x,y) rc4encrypt(x,y)



typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;

struct s_arcfour { 
    int8 i, j, k;
    int8 s[256];
};

typedef struct s_arcfour Arcfour;


Arcfour *rc4init(int8*, int16);
int8 rc4byte(void);
int8 *rc4encrypt(int8*, int16);
