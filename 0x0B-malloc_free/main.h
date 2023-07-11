/* * It is not recommended to put function definitions 
* in a header file. Ideally there should be only
* function declarations. Purpose of this code is
* to only demonstrate working of header files.
*/


/* * _puthcar function declaration */
int _putchar(char c);

/* * task 0 function declaration */
char *create_array(unsigned int size, char c);

/* * task 1 function declaration */
char *_strdup(char *str);

/* * task 2 function declaration */
char *str_concat(char *s1, char *s2);

/* *task 3 function declaration */
int **alloc_grid(int width, int height);

/* * task 4 function declaration */
void free_grid(int **grid, int height);

/* * task 5 function declaration */
char **argstostr(int ac, char **av);

/* * task 6 function declaration */
char **strtow(char *str);
