# Caesar Cipher Command-Line Tool

This project is a command-line C program that encrypts plaintext using the Caesar cipher, a simple substitution cipher. The user provides a numeric key as a command-line argument, and the program shifts each alphabetical character in the input by that key, wrapping around the alphabet as needed. Non-alphabetical characters remain unchanged.

## Features

- Accepts a numeric key as a command-line argument.
- Prompts the user for plaintext input.
- Encrypts the input using the Caesar cipher algorithm.
- Preserves the case of letters (uppercase/lowercase).
- Leaves non-alphabetic characters unchanged.
- Prints the resulting ciphertext to the console.
- Validates input and provides usage instructions for incorrect input.

## How It Works

1. **Input Validation**
   - The program checks that exactly one command-line argument is provided and that it consists only of digits.
   - If the input is invalid, it prints a usage message and exits.

2. **Encryption**
   - The user is prompted to enter the plaintext.
   - Each character in the plaintext is checked:
     - If it is an alphabetical character, it is shifted by the key (modulo 26) and wrapped around the alphabet if necessary.
     - Non-alphabetical characters are printed unchanged.

3. **Output**
   - The encrypted ciphertext is printed to the console.

## Usage

Compile the program (requires the CS50
