# Libft

Libft is a personal C library that reimplements standard C library functions and introduces additional utility functions for memory handling, strings, and linked lists.  
It was developed as part of the **1337/42 Network** curriculum.

---
## 📚 Overview
The purpose of this project is to deepen understanding of how standard C functions work internally and to practice writing clean, modular, and reusable code.

Key objectives:
- Reimplement essential C standard library functions.
- Master memory management and pointer operations.
- Create helper functions for common programming tasks.
- Introduce linked list utilities as part of the bonus section.

---

## 🛠 Features
- **String manipulation** (`ft_strlen`, `ft_strdup`, `ft_strjoin`, ...)
- **Memory handling** (`ft_memset`, `ft_memcpy`, `ft_memmove`, ...)
- **Character checks** (`ft_isalpha`, `ft_isdigit`, ...)
- **Linked list utilities** (bonus part: `ft_lstnew`, `ft_lstadd_front`, ...)

---

## 📂 Project Structure
├── ft_*.c # Function implementations
├── libft.h # Header file with prototypes
├── Makefile # Compilation rules
└── ...


---

## ⚙️ Compilation
To compile the library:
```bash
make        # Compile libft.a
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile

Link the library

To use in another project:

#include "libft.h"
