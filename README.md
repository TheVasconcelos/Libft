*This project has been created as part of the 42 curriculum by mavascon*

---

# 📚 Libft — Your Very First Own Library

## Description

**Libft** is a foundational C project from the 42 curriculum. The goal is to reimplement a set of standard C library functions (`libc`) from scratch, while also developing additional utility functions and linked list manipulation tools.

The resulting static library `libft.a` serves as a personal toolbox reused throughout future 42 projects.

### What's inside?

| Part | Content |
|------|---------|
| **Part 1 — Libc functions** | Reimplementations of standard functions (`ft_strlen`, `ft_memcpy`, `ft_atoi`, etc.) |
| **Part 2 — Additional functions** | Custom utilities not found in libc (`ft_split`, `ft_itoa`, `ft_substr`, etc.) |
| **Part 3 — Linked list** | A full set of linked list operations using the `t_list` struct |

---

## 📦 Library Overview

### Part 1 — Libc Reimplementations

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a byte value |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory, handles overlapping areas |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |
| `ft_strchr` | Locates first occurrence of character in string |
| `ft_strrchr` | Locates last occurrence of character in string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Locates byte in memory |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Locates substring in string, length-bounded |
| `ft_atoi` | Converts string to integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string |

### Part 2 — Additional Functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter character |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character, returns new string |
| `ft_striteri` | Applies a function to each character in-place |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 — Linked List

Uses the following structure defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees a node's content and the node itself |
| `ft_lstclear` | Deletes and frees all nodes in the list |
| `ft_lstiter` | Iterates through the list applying a function |
| `ft_lstmap` | Creates a new list by applying a function to each node |

---

## ⚙️ Instructions

### Compilation

```bash
make        # Compiles the library → libft.a
make clean  # Removes object files
make fclean # Removes object files and libft.a
make re     # Full recompilation
```

### Usage in your project

```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

Include the header in your source files:

```c
#include "libft.h"
```

---

## 📖 Resources

- [C man pages — linux.die.net](https://linux.die.net/man/)
- [Python Tutor — C code visualizer](https://pythontutor.com/visualize.html#mode=edit)
- [42 Cursus Gitbook](https://42-cursus.gitbook.io/)
- [42 Norm documentation](https://github.com/42School/norminette)


### 🤖 AI Usage

AI was used as a learning companion — to understand concepts, clarify documentation, and review logic and bugs — not to generate code directly. 
All implementations were written and understood by the author.

This README was written with help of AI.

---

> ⚠️ **Note:** This library must comply with the [42 Norm](https://github.com/42School/norminette). Global variables are forbidden. All heap-allocated memory must be properly freed.