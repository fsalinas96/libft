*This project has been created as part of the 42 curriculum by fsalinas.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 curriculum. Its goal is to recreate a selection of standard C library functions and build additional utilities for string handling, memory management, file-descriptor output, and linked lists.

The project reinforces fundamental C concepts, including pointers, dynamic memory allocation, data structures, and careful handling of edge cases. The resulting library, `libft.a`, can be reused in future C projects.

## Library Contents

### Part 1 — Standard C Library Functions

These functions reproduce the behavior of their standard counterparts, with the `ft_` prefix.

| Category | Functions | Purpose |
| --- | --- | --- |
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Classify characters and ASCII values. |
| Character conversion | `ft_toupper`, `ft_tolower` | Convert alphabetic characters between cases. |
| String operations | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | Measure, copy, concatenate, search, and compare strings. |
| Memory operations | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Initialize, copy, move, search, and compare memory blocks. |
| Conversion and allocation | `ft_atoi`, `ft_calloc`, `ft_strdup` | Convert strings to integers and allocate or duplicate data. |

### Part 2 — Additional Utilities

| Function | Description |
| --- | --- |
| `ft_substr` | Extracts a substring from a given position. |
| `ft_strjoin` | Allocates and joins two strings. |
| `ft_strtrim` | Removes specified characters from both ends of a string. |
| `ft_split` | Splits a string into a NULL-terminated array using a delimiter. |
| `ft_itoa` | Converts an integer into a newly allocated string. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3 — Linked Lists

Part 3 implements utilities for singly linked lists using the `t_list` structure defined in `libft.h`. All three parts are mandatory in the current subject (v19.2).

| Function | Description |
| --- | --- |
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Inserts a node at the beginning. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstadd_back` | Appends a node to the end. |
| `ft_lstdelone` | Deletes one node using a provided content-deletion function. |
| `ft_lstclear` | Deletes an entire list and resets its head. |
| `ft_lstiter` | Applies a function to each node's content. |
| `ft_lstmap` | Creates a new list by transforming each node's content, with cleanup on allocation failure. |

## Instructions

### Requirements

- A C compiler (such as `cc` or `gcc`)
- `make` and `ar`

### Compilation

Run these commands from the repository root:

```sh
make          # Build libft.a
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Rebuild the library
```

### Using the Library

Include `libft.h` in your C source file, then compile and link your program with the library:

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o program
./program
```

`main.c` refers to your own program. Libft is a **static library**, not a standalone executable.

## Testing

The library was tested using several complementary approaches:

- **My own tests**, written by me and later expanded and improved with AI assistance to cover additional cases.
- **Tests created by my peers `mevan-le` and `rvolovoy`**, providing independent test cases.
- **[Francinette](https://github.com/thecloudrazor/francinette)**, an external Libft testing tool.
- **Peer reviews at the Codam cluster**, discussing implementations, identifying issues, and checking behavior together.

## Resources

- **42 Libft subject** — Project requirements, constraints, and expected behavior.
- **My dear peers at Codam** — Discussions, guidance, and shared problem-solving throughout the project.
- [Makefile Tutorial](https://makefiletutorial.com/) — Understanding Makefile rules, variables, and compilation workflows.
- [Stack Overflow](https://stackoverflow.com/) — Community explanations and discussions about C programming.
- **"The Russian youtuber with a video with 84 views explaining malloc"** — A memorable explanation of dynamic memory allocation.
- [W3Schools](https://www.w3schools.com/c/) — Introductory C tutorials and examples.
- [GeeksforGeeks](https://www.geeksforgeeks.org/c-programming-language/) — Articles and examples covering C programming concepts.
- [Linux man-pages](https://man7.org/linux/man-pages/) — Reference documentation for C library functions and their behavior.
- [The GNU C Library Manual](https://www.gnu.org/software/libc/manual/) — Explanations of strings, memory, character handling, and allocation.
- [cppreference — C](https://en.cppreference.com/w/c) — C language and standard-library reference.


### AI Usage

AI assistance was used to explain C concepts, edge cases, and memory management; review or debug approaches for `ft_memmove`, `ft_itoa`, and `ft_lstmap`; and provide implementation examples for `ft_strtrim` and `ft_split`. AI was also used to expand and improve my own test cases and to draft and edit this README. All code and test results remain subject to my own review and validation.
