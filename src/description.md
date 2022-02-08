



#################################################################



#################################################################

ft_strmapi.c

Parameters
#1 The string on which to iterate.
#2 The function to apply to each character.
Return Value
The string created from te successive applications of 'f'.
Returns NULL if the allocation fails.

External Functions
malloc

Description
Applies the function 'f' to each character of the string 's', and
passing its indes as first argument to create a new string (with malloc(3))
resulting from successive applications of 'f'.

#################################################################

ft_striteri.c

Parameters
#1 The string on which to iterate.
#2 The function to apply to each character.

Return Value
None

External Functions
None

Description
Applies the function f to each character of the string passed as argument,
and passing its index as first argument. Each character is passed by
address to f to be modified if necessary.

#################################################################

ft_putchar_fd.c

Parameters
#1 The character to output.
#2 The file descriptor on which to write.

Return Value
None

External Functions
write

Description
Outputs the character 'c' to the given file descriptor.

#################################################################

ft_putstr_fd.c

Parameters
#1 The string to output.
#2 The file descriptor on which to write.

Return Value
None

External Functions
write

Description
Outputs the string 's' to the given file descriptor.

#################################################################

ft_putendl_fd.c

Parameters
#1 The string to output.
#2 The file descriptor on which to write.

Return Value
None
External Functions
write

Description
Outputs the string 's' to the given file descriptor, followed by a newline.

#################################################################

ft_putnbr_fd.c

Parameters
#1 The integer to output.
#2 The file descriptor on which to write.

Return Value
None
External Functions
Write

Description
Outputs the integer 'n' to the given file descriptor.

#################################################################

ft_lstnew.c

Parameters
#1 The content to create the new element with.

Return Value
The new element.
External Functions
malloc

Description
Allocates (with mallloc(3)) and returns a new element.
The variable 'content' is initialized with the value of the parameter
'content'. The variable 'next' is initialized to NULL.


#################################################################

ft_lstadd_front.c

Parameters
#1 The address of a pointer to the first link of a list.
#2 The address of a pointer to the element to be added to the list.

Return Value
None

External Functions
None

Description
Adds the element 'new' at the beginning to the list.

#################################################################

ft_lstsize.c

Parameters
#1 The beginning of the list.

Return Value
Length of the list.

External Functions
None

Description
Counts the number of elementts in a list.

#################################################################

ft_lstadd_back.c

Parameters
#1 The address of a pointer to the first link of a list.
#2 The address of fa pointer to the element to be added to the list.

Return Value
None

External Functions
None

Description
Adds the element 'new' at the end of the list.

#################################################################

ft_lstdelone.c

Parameters
#1 The element to free.
#2 The address of the function used to delete the content.

Return Value
None

External Functions
free

Description
//Takes as a parameter an element and frees the memory of the element's content
using the function 'del' given as a parameter and free the element.
The memory of 'next' must not be freed.

#################################################################

ft_lstclear.c

Parameters
#1 The address of a pointer to an element.
#2 The address of the function used to delete the content of the element.

Return Value
None
External Functions
Free

Description
Deletes and frees the given element and every successor of that elemente,
using the function 'del' and free(3).
Finally, the pointer to the list must be set to NULL.

#################################################################

ft_lstiter.c

Parameters
#1 The address of a pointer to an element.
#2 The address of the function used to iterate on the list.
Return Value
None
External Functions
None

Description
Iterates the list 'lst' and applies the function 'f' to the content of each element.
#################################################################
