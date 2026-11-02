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

*``ft_strdup`` is a function of the lib. ``stdlib.h`` is also included in the libft.h file to use the ``free`` function.*

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
* ``int ft_isalpha(int c)`` →  Returns 1 if `c`is an alpha char in the ascii table and 0 if not.
* ``int ft_isdigit(int c)`` →  Returns 1 if `c`is a digit char in the ascii table and 0 if not.
* ``int ft_isalnum(int c)`` →  Returns 1 if `c`is an alphanumeric char in the ascii table and 0 if not.
* ``int ft_isascii(int c)`` →  Returns 1 if `c` is a character of the ascii table and 0 if not.
* ``int ft_isprint(int c)`` →  Returns 1 if `c` is a printable char of the ascii table and 0 if not.

#### String and chars manipulation
* ``size_t	ft_strlen(const char *s)`` → Returns the size of `s`.
* ``size_t	ft_strlcpy(char *dst, const char *src, size_t size)`` → Copy the content of `src` in `dst` with a max of `size` char and returns its size.
* ``size_t	ft_strlcat(char *dst, const char *src, size_t size)`` → Concatenate the content of `src` at the end of `dst` with a max of `size` char and returns its size.
* ``char	*ft_strchr(const char *s, int c)`` → Returns the first occurence of `c` as a char and returns a pointer to this occurence. Returns NULL if not found.
* ``char	*ft_strrchr(const char *s, int c)`` → Returns the last occurence of `c` as a char and returns a pointer to this occurence. Returns NULL if not found.
* ``int		ft_strncmp(const char *s1, const char *s2, size_t n)`` → Returns the difference in the ascii table as an int of the first char that differs on the strings. It compares up to `n` characters.
* ``char	*ft_strnstr(const char *big, const char *little, size_t len)`` → It searches `little` string in `big` string and returns a pointer on the first char of `little` in `big` if it is found. Returns NULL if not found.
* ``int		ft_atoi(const char *nptr)`` → It converts `nptr` in an integer by skipping the first whitespace (isspace(3)) and taking one sign (+ or -) as the sign of the int. It ends to convert at the first char that is not a digit and returns the result.
* ``char	*ft_strdup(const char *s)`` → It allocates with malloc a new string, to copy from `s` to the new string, NULL-terminate it and returns the result.
* ``int		ft_toupper(int c)`` → Returns `c` converted in its upcase form if it is possible and with any change if it is not (If `c` is not a lowercase char).
* ``int		ft_tolower(int c)`` → Returns `c` converted in its lowcase form if it is possible and with any change if it is not (If `c` is not an uppercase char).

#### Memory manipulation
* ``void	*ft_memset(void *s, int c, size_t n)`` → Fills the memory area pointed by the pointer with the integer, up to the size declared.
* ``void	*ft_bzero(void *s, size_t n)`` → Replaces all the data on the area pointed by `s`, up to the `n` elements.
* ``void	*ft_memcpy(void *dest, const void *src, size_t n)`` → Copy the content of `src` in `dest` and returns a pointer to `src`. The user must ensures that the two area does not overlap.
* ``void	*ft_memmove(void *dest, const void *src, size_t n)`` → Copy the content of `src` in `dest` and returns a pointer to it. The user don't have to worry about the two areas overlapping.
* ``void	*ft_memchr(const void *s, int c, size_t n)`` → Returns a pointer to the first occurence of `c` in the area pointed by `s`, up to `n` elements. Returns NULL if not found.
* ``int		ft_memcmp(const void *s1, const void *s2, size_t n)`` → Compares the two memory area and returns the difference as an int of the first element that differs on the areas. It compares up to `n` elements.
* ``void	*ft_calloc(size_t nmemb, size_t size)`` → `nmemb` is the number of elements to allocate and `size` is the size of the type of theses elements. It returns a pointer on the start of the allocated area.

### Additional functions
*Mainly focus on string manipulation*
* ``char	*ft_substr(char const *s, unsigned int start, size_t len)`` → Allocates memory of a substring created with `s` that starts at `start` index and of maximum of `len` characters, and then returns the substring.
* ``char	*ft_strjoin(char const *s1, char const *s2)`` → Concatenates the two strings into a third allocated string and returns it.
* ``char	*ft_strtrim(char const *s1, char const *set)`` → Allocates a third string and returns a copy of `s1` with the characters from `set` removed from the beginning and the end of `s1`.
* ``char	**ft_split(char const *s, char c)`` → Allocates and returns an array of strings created from `s, using `c` to split them. The array is NULL terminated.
* ``char	*ft_itoa(int n)`` → Allocates a new string and returns the conversion of `n` into chars on the string.
* ``char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))`` → Creates and allocates a new string that stores all the characters of `s`` that has been passed in the function `f`.
* ``void	ft_striteri(char *s, void (*f)(unsigned int, char*))`` → Iterates through `s` and applies the function `f` to each character.
* ``void	ft_putchar_fd(char c, int fd)`` → Outputs `c` to the specified file descriptor `fd`.
* ``void	ft_putstr_fd(char *s, int fd)`` → Outputs all the characters of `s` to the specified file descriptor `fd`.
* ``void	ft_putendl_fd(char *s, int fd)`` → Outputs all the characters of `s` to the specified file descriptor `fd` followed by a newline.
* ``void	ft_putnbr_fd(int n, int fd)`` → Outputs the first integer to the specified file descriptor `fd`.

### Linked List
* ``t_list	*ft_lstnew(void *content)`` → Allocates and returns a new node that takes `content` as content. The next node is initialized to NULL.
* ``void	ft_lstadd_front(t_list **lst, t_list *new)`` → Adds the node `new` to the beginning of the list pointed by `lst`.
* ``int		ft_lstsize(t_list *lst)`` → Counts the number of nodes in the list `lst`.
* ``t_list	*ft_lstlast(t_list *lst)`` →  Returns the last node of the list `lst`.
* ``void	ft_lstadd_back(t_list **lst, t_list *new)`` → Adds the node `new` to the end of the list pointed by `lst`.
* ``void	ft_lstdelone(t_list *lst, void (*del)(void *))`` → Frees (using `free`) and deletes (using the function `del`) the node `lst`.
* ``void	ft_lstclear(t_list **lst, void (*del)(void *))`` → Frees (using `free`) and deletes (using the function `del`) all the nodes of the list pointed by `lst`.
* ``void	ft_lstiter(t_list *lst, void (*f)(void *))`` → Iterates through the list `lst` and applies the function `f` to all the content of the nodes.
* ``t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`` → Iterates through the list `lst` and applies the function `f` to each node's content, creating and allocating a new list resulting of all these applications. The function `del` is used to delete and free the node and its content if needed.