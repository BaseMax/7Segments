# Digit Encoding and Decoding 7 Segments

This C project demonstrates a simple digit encoding and decoding mechanism using a digit struct composed of boolean values to represent segments of a digital display.

The project includes functionalities to encode integers (0-9) into a digit struct and decode a digit struct back into its corresponding integer. Additionally, it provides a function to convert the digit struct into a string representation.

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
