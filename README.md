# Custom printf Function in C

This repository contains the implementation of a custom `printf` function in C. The goal of this project is to build our own version of the popular `printf` function, which is used to produce formatted output.

## Usage

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/Chukwuderah/printf.git
   ```

2. Include the `printf.h` header file in your C source file:

   ```c
   #include "printf.h"
   ```

3. Call the `_printf` function with the desired format string and any additional arguments:

   ```c
   _printf("Hello, %s! This is a character: %c.\n", "User", 'A');
   ```

4. Compile your C code with the `printf.c` source file:

   ```bash
   gcc -o your_program your_program.c printf.c
   ```

5. Run your compiled program:

   ```bash
   ./your_program
   ```

## Supported Conversion Specifiers

- `%c`: Print a character
- `%s`: Print a string
- `%%`: Print a literal percent sign

Any other conversion specifiers or format options are not supported in this custom implementation.

## Contributing

Contributions to this project are welcome! Please ensure that your code adheres to the C programming style used in this project and includes appropriate tests for any new features or changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
