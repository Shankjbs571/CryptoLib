/* This is for testing only */

#include "cryptolib.h"

#define F fflush(stdout)


int main(){
    Arcfour *rc4;
    char *key, *text, *encrypted, *decrypted;
    int16 size_key, size_text;
    
    key = "thisiskey";
    size_key = strlen(key);

    text = "This is private text";
    size_text = strlen(text);

    printf("INITIALIZING..."); F;
    rc4 = rc4init(key, size_key);
    printf("done\n");

    printf("'%s'\n ->", text); F;
    encrypted = rc4encrypt(text, size_text);
    printf("done\n");

    return 0;
}