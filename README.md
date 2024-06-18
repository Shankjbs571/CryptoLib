# CryptoLib

CryptoLib is a C library designed to apply cryptographic techniques. This project is created out of curiosity and exploration, aiming to learn how C libraries are built and to deepen understanding of the C programming language.

## Features

- Basic encryption and decryption functions
- Application of common cryptographic algorithms
- Modular design for easy integration into other projects
- Extensive comments and documentation for educational purposes

## Motivation

The primary goal of this project is to explore and learn:
- How cryptographic techniques can be implemented in C
- The process of building and using C libraries
- General principles and practices of C programming

<!-- ## Installation

To build and use CryptoLib, follow these steps:

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/cryptolib.git
    ```

2. Navigate to the project directory:
    ```sh
    cd cryptolib
    ```

3. Compile the library:
    ```sh
    gcc -c cryptolib.c -o cryptolib.o
    gcc -shared -o libcryptolib.so cryptolib.o
    ```

4. Include and link the library in your C projects:
    ```c
    #include "cryptolib.h"

    // Compile your project with the library
    gcc -L. -o yourproject yourproject.c -lcryptolib
    ```

## Usage

Here is a simple example of how to use CryptoLib in your C code:

```c
#include <stdio.h>
#include "cryptolib.h"

int main() {
    char *plaintext = "Hello, World!";
    char encrypted[256];
    char decrypted[256];

    // Encrypt the plaintext
    encrypt(plaintext, encrypted);
    printf("Encrypted: %s\n", encrypted);

    // Decrypt the text
    decrypt(encrypted, decrypted);
    printf("Decrypted: %s\n", decrypted);

    return 0;
} -->
