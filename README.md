# Libft
This project aims to code a C library regrouping usual functions that can be used in all other 42 projects.

📄 [Subject PDF v. 15](https://github.com/anasilvr/Libft/blob/main/en.subject.pdf)

The content of this repository is subject to constant change as new general functions developed during other projects are added here.

## Makefile 🔨
| Command | Usage |
| --- | --- |
| `make` | creates .o files for each function as well as the main library file, libft.a |
| `make clean` | removes the .o files used to create the library |
| `make fclean` | removes the .o & .a files used to create the library |
| `make re` | removes all .o & .a files then remakes them |

## Files 
<details><summary>:file_folder: GNL</summary>
  
| Function | Description |
| --- | --- |
| [get\_next\_line.c](https://github.com/anasilvr/Libft/blob/main/GNL/get_next_line.c) | returns a line read from a file descriptor|
</details>

<details><summary>:file_folder: ft_printf</summary>
  
| Function | Description |
| --- | --- |
| [ft\_printf.c](https://github.com/anasilvr/Libft/blob/main/ft_printf/ft_printf.c) | prints to STDOUT and returns an int value equal to the number of printed chars (%cspduxX)|
</details>

<details><summary>:file_folder: io</summary>
 
| Function | Description |
| --- | --- |
| [ft\_putchar\_fd.c](https://github.com/anasilvr/Libft/blob/main/io/ft_putchar_fd.c) | outputs a character to the given file descriptor|
| [ft_putendl_fd.c](https://github.com/anasilvr/Libft/blob/main/io/ft_putendl_fd.c) | outputs a string to the given file descriptor followed by a \n|
| [ft_putnbr_fd.c](https://github.com/anasilvr/Libft/blob/main/io/ft_putnbr_fd.c) | outputs an integer to the given file descriptor|
| [ft_putstr_fd.c](https://github.com/anasilvr/Libft/blob/main/io/ft_putstr_fd.c) | outputs a string to the given file descriptor|
</details>

<details><summary>:file_folder: lists</summary>

| Function | Description |
| --- | --- |
| [ft_lstadd_back.c](https://github.com/anasilvr/Libft/blob/main/lists/ft_lstadd_back.c) | adds a new element at the end of the list|
| [ft_lstadd_front.c](https://github.com/anasilvr/Libft/blob/main/lists/ft_lstadd_front.c) | adds a new element at the beginning of the list|
| [ft_lstclear.c](https://github.com/anasilvr/Libft/blob/main/lists/ft_lstclear.c) | deletes and frees the given element and every successor of that element|
| [ft_lstdelone.c](https://github.com/anasilvr/Libft/blob/main/lists/ft_lstdelone.c) | deletes and frees the given element|
| [ft_lstiter.c](https://github.com/anasilvr/Libft/blob/main/lists/ft_lstiter.c) | iterates through a list while applying the function passed to the content of each element|
| [ft_lstlast.c](https://github.com/anasilvr/Libft/blob/main/lists/ft_lstlast.c) | returns the last element of the list|
| [ft_lstmap.c](https://github.com/anasilvr/Libft/blob/main/lists/ft_lstmap.c) | iterates through a list while applying the function passed to the content of each element and creating a new list with the results|
| [ft_lstnew.c](https://github.com/anasilvr/Libft/blob/main/lists/ft_lstnew.c) | allocates (with malloc(3)) and returns a new element|
| [ft_lstsize.c](https://github.com/anasilvr/Libft/blob/main/lists/ft_lstsize.c) | counts the number of elements in a list|
</details>

<details><summary>:file_folder: memalloc</summary> 
| Function | Description |
| --- | --- |
| [free_table.c](https://github.com/anasilvr/Libft/blob/main/memalloc/free_table.c) | frees all elements of a 2d array |
| [ft_calloc.c](https://github.com/anasilvr/Libft/blob/main/memalloc/ft_calloc.c) | contiguously allocates memory that is filled with bytes of value zero|
| [ft_realloc.c](https://github.com/anasilvr/Libft/blob/main/memalloc/ft_realloc.c) | reallocates the given area of memory|
| [ft_xcalloc.c](https://github.com/anasilvr/Libft/blob/main/memalloc/ft_xcalloc.c) | same as calloc(), but it directly exits in case of memory allocation error|
| [xfree.c](https://github.com/anasilvr/Libft/blob/main/memalloc/xfree.c) | frees a pointer after checking it isn't NULL |
</details>

<details><summary>:file_folder: [WIP] 🚧</summary>

  :file_folder: strings:
| Function | Description |
| --- | --- |

:file_folder: types:
| Function | Description |
| --- | --- |
</details>
