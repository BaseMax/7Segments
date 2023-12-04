# Digit Encoding and Decoding 7 Segments

This C project demonstrates a simple digit encoding and decoding mechanism using a digit struct composed of boolean values to represent segments of a digital display.

The project includes functionalities to encode integers (0-9) into a digit struct and decode a digit struct back into its corresponding integer. Additionally, it provides a function to convert the digit struct into a string representation.

## Tests

```
Encoded to Decoded mapping:
Encoded: 0 (1111110 - 0000001) => Decoded: 0
Encoded: 1 (0110000 - 1001111) => Decoded: 1
Encoded: 2 (1101101 - 0010010) => Decoded: 2
Encoded: 3 (1111001 - 0000110) => Decoded: 3
Encoded: 4 (0110011 - 1001100) => Decoded: 4
Encoded: 5 (1011011 - 0100100) => Decoded: 5
Encoded: 6 (1011111 - 0100000) => Decoded: 6
Encoded: 7 (1110000 - 0001111) => Decoded: 7
Encoded: 8 (1111111 - 0000000) => Decoded: 8
Encoded: 9 (1111011 - 0000100) => Decoded: 9
```

## Usage

To use this project, you can follow these steps:

Compilation:

Compile the source code using a C compiler. For example:

```
gcc 7-segments.c -o 7
```

Run:

Execute the compiled binary:

```bash
./digit_encoding
```

## Functions

### `digit encode(int d)`

Encodes an integer (0-9) into a digit struct composed of boolean values.

### `int decode(digit d)`

Decodes a digit struct back into its corresponding integer.

### `char* digitToString(digit d)`

Converts a digit struct into a string representation.

#### Examples

The main function in the code demonstrates examples of encoding, decoding, and converting the digit struct into a string for integers 0-9.

## Contributors

- Max Base

## License

This project is licensed under GPL3 See the [LICENSE] file for details.

Copyright 2023, Max Base
