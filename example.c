/* This is for testing only */

#include "cryptolib.h"

#define F fflush(stdout)


void printbinary(int8 *input, int16 size){
    int32 i;
    int8* p;

    assert(size > 0);

    for (i=size, p=input; i; i--, p++){
        if( !(i % 2) ) printf(" ");
        printf("%.02x", *p);

    }
    printf("\n");

    return;

} 


int main(){
    Arcfour *rc4;
    char *key, *text, *encrypted, *decrypted;
    int16 size_key, size_text;
    int32 num;
    num = 4294967295;
    printf("%d", num);

    key=text=encrypted=decrypted=0;
    size_key=size_text=0;
    
    key = "tomatoes";
    size_key = strlen(key);

    text = "This is private text";
    size_text = strlen(text);

    printf("INITIALIZING..."); F;
    rc4 = rc4init((int8*)key, size_key);
    printf("done\n");

    printf("'%s'\n ->", text); F;
    encrypted = rc4encrypt((int8*)text, size_text);
    printf("done\n");

    printbinary(rc4->s, size_key);

    return 0;
}