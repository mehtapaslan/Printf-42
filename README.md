*This project has been created as part of the 42 curriculum by mehaslan.*

# ft_printf

## Description
The `ft_printf` project is a custom implementation of the standard C library function `printf`. The primary goal of this project is to understand and utilize variadic functions in C while structuring code modularly to handle various format specifiers. 

Based on the project structure, it supports the following conversions:
- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a void * pointer argument in hexadecimal format.
- `%d` / `%i`: Prints a decimal (base 10) number.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

## Instructions

### Compilation
The project includes a `Makefile` to compile the source files into a static library (`libftprintf.a`). 
To compile the library, navigate to the root of the repository and run:
```bash
make
```
Other available `make` commands:
- `make clean`: Removes the object (`.o`) files.
- `make fclean`: Removes the object files and the compiled `libftprintf.a` library.
- `make re`: Recompiles the entire project from scratch.

### Installation and Execution
To use the `ft_printf` function in your own projects:
1. Include the header in your C files:
   ```c
   #include "ft_printf.h"
   ```
2. Compile your source code alongside the `libftprintf.a` library:
   ```bash
   cc your_main.c -L. -lftprintf -o your_program
   ```
3. Run your executable:
   ```bash
   ./your_program
   ```

## Algorithm and Data Structure
### Algorithm
The core algorithm relies on a linear, character-by-character parsing of the format string. The `ft_printf` function operates as follows:
1. It reads the given format string sequentially.
2. If the current character is not a `%`, it is immediately written to the standard output, and the overall return length counter is incremented.
3. If a `%` is encountered, the algorithm inspects the immediately following character to identify the conversion specifier (e.g., `c`, `s`, `d`, `x`).
4. Based on this specifier, a dispatcher routes the variadic argument (retrieved via `va_arg`) to the corresponding helper function (e.g., `ft_print_char`, `ft_print_str`, `ft_print_hex`, `ft_print_nbr`).
5. Each helper function processes its specific data type, handles the conversion to a string representation if necessary, outputs it, and returns the number of bytes written.
6. The total count of printed bytes is accumulated and finally returned once the format string is fully processed.

### Data Structure Justification
The mandatory implementation of `ft_printf` does not require advanced data structures such as linked lists or trees. The chosen approach strictly utilizes fundamental C data types and the standard variadic macros (`va_list`, `va_start`, `va_arg`, `va_end`) from `<stdarg.h>`. 
- **Variables:** Simple integer counters are maintained to keep track of the number of bytes printed.
- **Pointers and Arrays:** Character arrays and pointers are used minimally and efficiently within helper functions to process strings and perform base conversions. Memory is managed statically where possible to adhere to strict compilation rules and optimize performance.
This lightweight approach was chosen because it minimizes memory overhead, avoids unnecessary dynamic allocation, and fulfills the project's formatting requirements efficiently.

## Resources
- **Documentation:** Linux Programmer's Manual (`man 3 printf`, `man 3 stdarg`).
- **Articles & Tutorials:** Standard guides on understanding and implementing variadic functions in C.
- **AI Usage:** AI was utilized during the project as a learning assistant to clarify edge cases of the standard `printf` behavior and to structure this README document according to the curriculum's formatting requirements.