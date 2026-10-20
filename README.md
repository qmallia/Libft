*This project has been created as part of the 42 curriculum by qmallia.*

# 📒 Libft

## 📝 Summary

### [Descriptions](#-description)
A section that clearly **presents the project**, including its goal and a brief overview.

### [Instructions](#-instructions)
A section containing any relevant information about **compilation**, **installation**, and/or **execution**.

### [Resources](#-resources)
A section listing classic **references** related to the topic (documentation, articles, tutorials, etc.), as well as a description of how **AI** was used - specifying for which tasks and which parts of the project.

### [Detailing](#-detailing)
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
* ``ft_isalpha`` → *Takes an integer.* Return 1 if it is an alpha char in the ascii table and 0 if not.
* ``ft_isdigit`` → *Takes an integer.* Return 1 if it is a digit char in the ascii table and 0 if not.
* ``ft_isalnum`` → *Takes an integer.* Return 1 if it is an alphanumeric char in the ascii table and 0 if not.
* ``ft_isascii`` → *Takes an integer.* Return 1 if it is a character of the ascii table and 0 if not.
* ``ft_isprint`` → *Takes an integer.* Return 1 if it is a printable char of the ascii table and 0 if not.

#### String and chars manipulation
* ``ft_strlen`` → *Takes a constant string and return its size.*
* ``ft_strlcpy`` → *Takes a constant string, the source; a string, the destination; and a size_t.* Copy the content of the source in the destination and return its size.
* ``ft_strlcat`` → *Takes a constant string, the source; a string, the destination; and a size_t.* Concatenate the content of the source at the end of the destination and return its size.
* ``ft_strchr`` → *Takes a constant string and an integer.* Return the first occurence of the integer as a char and return a pointer on this occurence. Return NULL if not found.
* ``ft_strrchr`` → *Takes a constant string and an integer.* Return the last occurence of the integer as a char and return a pointer on this occurence. Return NULL if not found.
* ``ft_strncmp`` → *Takes two constant strings and a size.* Return the difference in the ascii table as an int of the first char that differs on the strings. It compares up to the size.
* ``ft_strnstr`` → *Takes two constant strings and a size.* It searches the second string in the first one and return a pointer on the first char of the second string in the first if it is found. Return NULL if not found.
* ``ft_atoi`` → *Takes a constant string.* It converts the string in an integer by skipping the first whitespace (isspace(3)) and taking one sign (+ or -) as the sign of the int. It ends to convert at the first char that is not a digit and return the result.
* ``ft_strdup`` → *Takes a constant strings, the source.* It allocates with malloc a new string, to copy from the source to the destination, NULL-terminate it and return the result.
* ``ft_toupper`` → *Takes an integer.* Return it converted in its upcase form if it is possible and with any change if it is not (If it is not a lowercase char).
* ``ft_tolower`` → *Takes an integer.* Return it converted in its lowcase form if it is possible and with any change if it is not (If it is not an uppercase char).

#### Memory manipulation
* ``ft_memset`` → *Takes a pointer on any type, an integer and a size.* Fills the memory area pointed by the pointer with the integer, up to the size declared.
* ``ft_bzero`` → *Takes a pointer on any type and a size.* Replaces all the data on the area pointed by the pointer, up to the size declared.
* ``ft_memcpy`` → *Takes a constant pointer on any type, the source; a pointer on any type, the destination; and a size_t.* Copy the content of the source in the destination and return a pointer to the destination. The user must ensures that the two pointers does not overlap.
* ``ft_memmove`` → *Takes a constant pointer on any type, the source; a pointer on any type, the destination; and a size_t.* Copy the content of the source in the destination and return a pointer to the destination. The user don't have to worry about the two pointers overlapping.
* ``ft_memchr`` → *Takes a constant pointer on any type, an integer and a size.* Return the first occurence of the integer int the area pointed by the pointer, up to the size declared, and return a pointer on this occurence. Return NULL if not found.
* ``ft_memcmp`` → *Takes two constant pointer on any type and a size.* Compares the two memory area as eturn the difference in the ascii table as an int of the first char that differs on the strings. It compares up to the size.
* ``ft_calloc`` → *Takes two size_t.* The first is the number of members to allocates and the second is the size of these members. It returns a pointer on the start of the allocated area on the memory.

### Additional functions
*Mainly focus on string manipulation*
* ``ft_substr`` → *Takes a constant string, an unsigned integer and a size.* Allocates memory of a substring from the constant string that starts at the index of the unsigned integer and of maximum of the size declared, and then return the substring.
* ``ft_strjoin`` → *Takes two constant strings.* Concatenates the two strings into a third allocated string and return it.
* ``ft_strtrim`` → *Takes two constant strings.* Allocates a third string and returns a copy of the first string with the characters from the second string removed from the beginning and the end of the first string.
* ``ft_split`` → *Takes a constant string and a char.* Allocates and returns an array of strings from the string passed as first argument, using the char to split them. The array is NULL terminated.
* ``ft_itoa`` → *Takes an integer.* Allocates a new string and returns the conversion of the integer into chars on the string.
* ``ft_strmapi`` → *Takes a constant string and a pointer on a function that returns a char and takes an unsigned int and a char as parameters.* It creates and allocates a new string that stores all the characters of the initial string that has been passed in the function passed as parameter.
* ``ft_striteri`` → *Takes a string and a pointer on a function that returns nothing and takes an unsigned int and a string as parameters.* It iterates thru the string and applies the function passed as argument to each character.
* ``ft_putchar_fd`` → *Takes a character and an integer.* Outputs the character to the specified file descriptor (the integer).
* ``ft_putstr_fd`` → *Takes a string and an integer.* Outputs all the characters to the specified file descriptor (the integer).
* ``ft_putendl_fd`` → *Takes a string and an integer.* Outputs all the characters to the specified file descriptor (the integer) followed by a newline.
* ``ft_putnbr_fd`` → *Takes two integers.* Output the first integer to the specified file descriptor (the second integer).

### Linked List
* ``ft_lstnew`` → *Takes a pointer on any type.* ALlocates and returns a new node that contains the content of the pointer passed as argument. The next node is initialized to NULL.
* ``ft_lstadd_front`` → *Takes a pointer to the first node of a list and a pointer to a node.* Adds the node to the beginning of the list.
* ``ft_lstsize`` → *Takes a pointer to the beginning of a list.* Counts the number of nodes in the list.
* ``ft_lstlast`` → *Takes a pointer to the beginning of a list.* Returns the last node of the list.
* ``ft_lstadd_back`` → *Takes a pointer to the first node of a list and a pointer to a node.* Adds the node to the end of the list.
* ``ft_delone`` → *Takes a node and a pointer to a function that returns nothing and takes a pointer to any type.* Frees and deletes the node.
* ``ft_lstclear`` → *Takes a pointer to the first node of a list and a pointer to a function that returns nothing and takes a pointer to any type.* Deletes and frees all the node of the list.
* ``ft_lstiter`` → *Takes a pointer to the beginning of a list and pointer to a function that returns nothing and takes a pointer to any type.* Iterates through the list and applies the function to all the content of the nodes.
* ``ft_lstmap`` → *Takes a pointer to the beginning of a list, a pointer to a function that returns a pointer to any type and takes a pointer to any type and a pointer to a function that returns nothing and takes a pointer to any type.* Iterates through the list and applies the function to all the content of the nodes. Iterates through the list and applies the first function to each node's content, creating and allocating a new list resulting of all these applications. The second function is used to delete and free the content of a node if needed.