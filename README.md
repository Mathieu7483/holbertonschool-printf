<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/holberton%20modif.png">

# 🚀 holbertonschool-printf
This project aims to create a simplified version of the printf function from the standard C library. The goal is to understand its internal workings and reproduce some of its key functionalities, while adhering to the style and compilation requirements defined by Holberton School.

# 📚 Table of Contents
Project Context

Learned Resources

General Requirements

Usage

Project Structure and Tasks

Compilation

Authors

# 💡 Project Context
This project is part of the Holberton School programming curriculum. It focuses on creating a custom implementation of printf, emphasizing the handling of basic conversion specifiers and adherence to coding standards.

# 📖 Learned Resources
Throughout this project, the following concepts and tools were explored in depth:

Secrets of printf: In-depth understanding of how the printf function works.

Group Projects: Collaboration and team project management.

Flowcharts: Visualization and logical design of algorithms.

Man pages: Using official documentation for printf (section 3).

gcc and its options: Compiling C code with specific flags (-Wall, -Werror, -Wextra, -pedantic, -std=gnu89, -Wno-format).

Betty style: Adherence to Holberton School's code style standards.

Functions with a variable number of arguments (va_list, va_start, va_end, va_copy, va_arg): Handling function arguments dynamically.

Dynamic memory allocation (malloc, free): Memory management for strings and other data.

Input/output management (write): Direct writing to standard output.

# ✅ General Requirements
Allowed Editors: vi, vim, emacs.

Compilation Environment: Ubuntu 20.04 LTS.

C Compiler: gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89.

End of File: All files must end with a newline.

README.md File: Mandatory at the root of the project folder.

Code Style: Conforms to Betty style (checked with betty-style.pl and betty-doc.pl).

Global Variables: Forbidden.

Number of Functions per File: No more than 5 functions per file.

main.c Files: Must not be pushed into the root repository. Test files with main can be placed in a separate folder (test/).

Header File: main.h must contain the prototypes of all functions and be include-guarded.

# 💻 Usage
The _printf function is designed to be used like the standard printf function. It takes a format string and a variable number of arguments, and prints the result to standard output.

```Bash

C

#include "main.h" // Include your header file

int main(void)
{
    int count;

    count = _printf("This is a simple string.\n");
    _printf("Number of characters printed: %d\n", count);

    _printf("A character: %c\n", 'A');
    _printf("A string: %s\n", "Hello, world!");
    _printf("A percentage: %%\n");
    _printf("An integer: %d\n", 42);
    _printf("Another integer: %i\n", -123);

    return (0);
}
```

# 📋 Project Structure and Tasks
The project is organized around the progressive implementation of the _printf function and its functionalities.

Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Prototype: int _printf(const char *format, ...);

Return: The number of characters printed (excluding the null terminator).

Specifier management:

%c (character)

%s (string)

%% (percentage character)

Limitations: No handling of buffer, flags, field width, precision, or length modifiers.

Education is when you read the fine print. Experience is what you get if you don't
Handling of additional specifiers:

%d (signed decimal integer)

%i (signed decimal integer)

Limitations: No handling of flags, field width, precision, or length modifiers.

Just because it's in print doesn't mean it's the gospel
Documentation: Creation of a manual page (man page) for the _printf function.

File: man_3_printf

# ⚙️ Compilation
Your code will be compiled as follows:

 ```Bash


gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
Important note: Do not push any `main.c` files into your project's root directory. Our `main` files will include your main header file (`main.h`) via `#include "main.h"`.
```

# ✍️ Authors
Mathieu GODALIER et Mathis ROY [liens vers le Github de Mathis](https://github.com/rpokman) - Élèves en programmation à la Holberton School
