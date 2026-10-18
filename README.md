*This project has been created as part of the 42 curriculum by qmallia.*

# 📒 Libft

## 📝 Summary

### [Descriptions](##description)
A section that clearly **presents the project**, including its goal and a brief overview.

### [Instructions](##instructions)
A section containing any relevant information about **compilation**, **installation**, and/or **execution**.

### [Resources](##resources)
A section listing classic **references** related to the topic (documentation, articles, tutorials, etc.), as well as a description of how **AI** was used - specifying for which tasks and which parts of the project.

### [Detailing](##detailing)
A **detailed description** of the library.

#

## 📖 Description
**Libft** is a project that aims to make your other projects faster and easier to code by creating a private library that reunites all the helper functions that we can need in our future projects.

It contains some functions of the ``libc``, many strings and memory manipulation, comparison and linked list functions.

We can add all the functions we want by adding the new files and compile the project again.

## ⚙️ Instructions

**1. Clone the project**
```
git clone https://github.com/qmallia/Libft Libft
```

**2. Compiling**

*You can compile all the .c files and create the libft.a archive with the following commands :*
```
make
```
or
```
make all
```

*You can also use the other optionnal rules to clean your project file or re-compile it*

```
make clean    | delete all the .o files
make fclean   | delete all the .o files and the .a file
make re       | delete all the .o files, the .a file and compile the .c again using the "all" rule
```

**3. Using it in your own projects**

To use the library in your own project, you'll need to copy the ``libft.a`` file and the ``libft.h`` files in your project directory. You'll have to include the ``libft.h`` in your ``.c`` files that needs the library and then compile your project with the ``libft.a`` file.

An example to understand :

*Considering that ``libft.a`` and ``libft.h`` are in a ``libft`` folder which is at the root of your project, you could use some of the functions in your main.c like this :*

```C
#include <libft.h>
#include <stdio.h>

int main(void)
{
  char  *str = ft_strdup("Hello World!");
  printf("%s\n", str);
  free(str);
  return (0);
}
```

``ft_strdup`` is a function of the lib. ``stdlib.h`` is also included in the libft.h file to use the ``free`` function.*

Then, you can compile the program with the following command :

```
cc -Wall -Wextra -Werror -I./libft *.c ./libft/libft.a -o program_name
```

## 💻 Resources
No AI were used at all to complete this project. The only resources that has been used were the man pages of the different functions of the ``libc`` and some wikis found on the internet to understand well the principe of pure memory manipulation and linked list.

## 🏷️ Detailing
Here is a detailed list of all the function and their purposes.

### Libc functions

#### Comparison
* ``ft_isalpha`` → T
* ``ft_isdigit``
* ``ft_isalnum``
* ``ft_isascii``
* ``ft_isprint``

#### String and chars manipulation
* ``ft_strlen``
* ``ft_strlcpy``
* ``ft_strlcat``
* ``ft_strchr``
* ``ft_strrchr``
* ``ft_strncmp``
* ``ft_strnstr``
* ``ft_atoi``
* ``ft_strdup``
* ``ft_toupper``
* ``ft_tolower``

#### Memory manipulation
* ``ft_memset``
* ``ft_bzero``
* ``ft_memcpy``
* ``ft_memmove``
* ``ft_memchr``
* ``ft_memcmp``
* ``ft_calloc``

### Additional functions
*Mainly focus on string manipulation*
* ``ft_substr``
* ``ft_strjoin``
* ``ft_strtrim``
* ``ft_split``
* ``ft_itoa``
* ``ft_strmapi``
* ``ft_striteri``
* ``ft_putchar_fd``
* ``ft_putstr_fd``
* ``ft_putendl_fd``
* ``ft_putnbr_fd``

### Linked List
* ``ft_lstnew``
* ``ft_lstadd_front``
* ``ft_lstsize``
* ``ft_lstlast``
* ``ft_lstadd_back``
* ``ft_delone``
* ``ft_lstclear``
* ``ft_lstiter``
* ``ft_lstmap``