/* File: cryptlolib.c
 author: Shashank 
 */

#include <stdio.h>
#include <errno.h>
#include "cryptolib.h"


Arcfour *rc4init(int8 *key, int16 size){
    typedef unsigned char int8;

    int8 x, tmp;



    Arcfour* p;
    if (p = malloc(sizeof(struct s_arcfour))) 
        assert_perror(errno); 

    for (x=0; x<256; x++){
        p->s[x] = 0;
    }
    p->i=p->j=p->k = 0;


    for (p->i = 0; p->i < 256; p->i++){
        p->s[p->i] = p->i;
    }

    for (p->i = 0; p->i < 256; p->i++){
        p->j = ( p->j + p->s[p->i] + key[ p->i % size ]) % 256;
        tmp = p->s[p->i];
        p->s[p->i] = p->s[p->j];
        p->s[p->j] = tmp;

    }
    p->i=p->j = 0;

    return p;


}


int main(){
    printf("hello");
    return 0;

}