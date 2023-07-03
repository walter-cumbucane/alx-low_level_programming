/* * It is not recommended to put function definitions 
* in a header file. Ideally there should be only
* function declarations. Purpose of this code is
* to only demonstrate working of header files.
*/

/* * _putchar function declaration */
int _putchar(char c);

/* * task 0 function declaration */
char *_memset(char *s, char b, unsigned int n);

/* * task 1 function declaration */
char *_memcpy(char *dest, char *src, unsigned int n);

/* * task 2 function declaration */
char *_strchr(char *s, char c);

/* * task 3 function declaration */
unsigned int _strspn(char *s, char *accept);

/* * task 4 function declaration */
char *_strpbrk(char *s, char *accept);

/* * task 5 function declaration */
char *_strstr(char *haystack, char *needle);

/* * task 6 function declaration */
void print_chessboard(char (*a)[8]);

/* * task 7 function declaration */
void print_diagsums(int *a, int size);

/* * task 8 function declaration */
void set_string(char **s, char *to);
