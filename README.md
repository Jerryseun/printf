# Custom Printf Function - Group Project

## Contributors
- Chigbu Joshua
- Adetunji Jeremiah

## Introduction
This project aims to implement a custom version of the `printf` function in C. The standard `printf` function in the C standard library is a powerful tool for formatted output, supporting various data types, formats, and special characters. Our custom implementation will provide a simplified version of this functionality, supporting basic data types such as integers, characters, and strings.

## Implementation Details
The custom `printf` function will be named `_printf`. It will take a format string and a variable number of arguments, similar to the standard `printf`. The format string will contain format specifiers that begin with the '%' character. We will support the following format specifiers:

- `%c`: Character
- `%s`: String

Any other characters in the format string will be printed as-is.

### Function Signatures
```c
// Custom version of putchar for our example
void _putchar(char c);

// Custom print function that supports integers and strings
void _printf(const char* format, ...);
```

### Function Descriptions

#### _putchar
```c
void _putchar(char c);
```
The `_putchar` function is a utility function to print a single character to the standard output (file descriptor 1). It will be used by `_printf` to output individual characters.

#### _printf
```c
void _printf(const char* format, ...);
```
The `_printf` function is our custom version of the `printf` function. It will accept a format string and variable arguments (variadic function) and print the formatted output to the standard output. The format string can contain format specifiers that start with the '%' character.

Supported format specifiers:
- `%c`: Character - The function will take an `int` argument representing the character code and print the corresponding character.
- `%s`: String - The function will take a `const char*` argument and print the string.

Any '%' character not followed by one of the supported format specifiers will be treated as a literal '%' character and printed as-is.

### Example Usage
```c
int main() {
    int number = 42;
    custom_printf("Printing a number: %d\n", number);

    char character = 'A';
    custom_printf("Printing a character: %c\n", character);

    const char* message = "Hello, custom_printf!";
    custom_printf("Printing a string: %s\n", message);

    return 0;
}
```

## Conclusion
Our custom implementation of the `printf` function, `_printf`, provides a simplified version of formatted output in C. Although it lacks the full range of features found in the standard `printf`, it serves as a valuable exercise in understanding how format specifiers can be processed and used to print different data types. Feel free to build upon this implementation and add more features as needed for your specific projects. Happy coding!
