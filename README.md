*This project has been created as part of the 42 curriculum by mavascon.*

<div align="center">

# 📚 libft

**Building C from scratch — one function at a time.**

![Language](https://img.shields.io/badge/Language-C-blue?style=flat-square&logo=c)
![Norm](https://img.shields.io/badge/Norm-passing-brightgreen?style=flat-square)
![42](https://img.shields.io/badge/School-42-black?style=flat-square)

</div>

---

## 🗂️ Table of Contents

- [Description](#-description)
- [Instructions](#-instructions)
- [Library Details](#-library-details)
  - [Part 1 — Libc Functions](#part-1--libc-functions)
  - [Part 2 — Additional Functions](#part-2--additional-functions)
  - [Part 3 — Linked List Functions](#part-3--linked-list-functions)
- [Resources](#-resources)

---

## 📖 Description

**libft** is a custom C library built from the ground up as part of the 42 curriculum. Instead of relying on the standard library, every function is written by hand — covering everything from basic character checks to memory manipulation, string utilities, and linked list management.

The goal isn't just to replicate `libc`. It's to deeply understand what happens under the hood when you call `strlen` or `memcpy` for example. This library serves as a personal toolkit reused throughout the entire 42 curriculum.

---

## ⚙️ Instructions

### Clone & Compile

```bash
git clone <your_repo_url>
cd libft
make
```

This generates `libft.a` at the root of the repository.

### Use in a project

Copy `libft.h` and `libft.a` into your project, then include the header:

```c
#include "libft.h"
```

Compile linking the library:

```bash
cc your_file.c libft.a -o your_program
```

### Makefile Rules

| Rule | Effect |
|:-----|:-------|
| `make` / `make all` | Compiles all `.c` files and creates `libft.a` |
| `make clean` | Removes object files (`.o`) |
| `make fclean` | Removes `.o` files and `libft.a` |
| `make re` | Full rebuild from scratch |

---

## 🔬 Library Details

### Part 1 — Libc Functions

Re-implementations of standard `libc` functions, prefixed with `ft_`. 

These do not rely on any external functions (except `malloc` where indicated).

#### 🔤 Character Classification

> All return `1` if the condition matches, `0` otherwise.

| Function | Description |
|:---------|:------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit (0–9) |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character belongs to ASCII set |
| `ft_isprint` | Checks if character is printable |

#### 🧵 String & Memory

| Function | Description |
|:---------|:------------|
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a byte value |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory area (no overlap handling) |
| `ft_memmove` | Copies memory area (handles overlaps) |
| `ft_strlcpy` | Safe string copy with size limit |
| `ft_strlcat` | Safe string concatenation with size limit |
| `ft_toupper` | Converts char to uppercase |
| `ft_tolower` | Converts char to lowercase |
| `ft_strchr` | Finds first occurrence of char in string |
| `ft_strrchr` | Finds last occurrence of char in string |
| `ft_strncmp` | Compares up to `n` bytes of two strings |
| `ft_memchr` | Searches for a byte in memory |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Finds a substring within `n` bytes |
| `ft_atoi` | Converts a string to an integer |

#### 🗃️ Memory Allocation

| Function | Description |
|:---------|:------------|
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string via `malloc` |

> ℹ️ `ft_calloc` — if `nmemb` or `size` is `0`, returns a unique pointer that can safely be passed to `free()`.

> ℹ️ `strlcpy`, `strlcat`, and `bzero` are not part of glibc by default. On Linux, include `<bsd/string.h>` and compile with `-lbsd` to test against system versions.

---

### Part 2 — Additional Functions

Utility functions either absent from `libc` or available in a different form.

| Function | Prototype | Description |
|:---------|:----------|:------------|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Extracts a substring from `s` starting at `start`, max length `len` |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Concatenates `s1` and `s2` into a new string |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Removes characters from `set` at both ends of `s1` |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits `s` by delimiter `c`, returns NULL-terminated array |
| `ft_itoa` | `char *ft_itoa(int n)` | Converts integer to string (handles negatives) |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies `f` to each char of `s`, returns new string |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applies `f` to each char in-place, passing index and pointer |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Writes character `c` to file descriptor `fd` |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Writes string `s` to file descriptor `fd` |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Writes string `s` followed by `\n` to `fd` |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Writes integer `n` to file descriptor `fd` |

---

### Part 3 — Linked List Functions

Implements a singly linked list using the `t_list` structure declared in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Prototype | Description |
|:---------|:----------|:------------|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Creates a new node with `content`, `next` set to NULL |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Inserts `new` at the beginning of the list |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Returns the number of nodes in the list |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns the last node |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Appends `new` at the end of the list |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees a single node using `del`, does not touch `next` |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Frees all nodes and sets list pointer to NULL |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to each node's content |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list by applying `f` to each node's content; uses `del` on failure |

---

## 📎 Resources

| Resource | Description |
|:---------|:------------|
| [C man pages](https://linux.die.net/man/) | Reference for all standard C functions |
| [Python Tutor — C visualizer](https://pythontutor.com/visualize.html#mode=edit) | Visualize memory and pointers step by step |
| [42 Cursus Gitbook](https://42-cursus.gitbook.io/) | Community notes and explanations for 42 projects |
| [42 Norm / norminette](https://github.com/42School/norminette) | Official norm tool and coding rules |
| [Udemy](https://www.udemy.com/) | Solid intro to C fundamentals and other concepts |
| [francinette](https://github.com/xicodomingues/francinette) | Widely used tester across 42 campuses |

### 🤖 AI Usage

AI was used the same way one would use Google — as a tool to look things up, not to generate solutions. For example, to help the following:

- **Debugging** — understanding cryptic error messages and narrowing down where something was going wrong
- **Clarifying concepts** — getting plain-language explanations of pointer arithmetic, undefined behavior, or differences like `memmove` vs `memcpy`
- **Formatting** — structuring and phrasing this README

All code in the library was written and reasoned through independently. AI was never asked to write or complete any function.