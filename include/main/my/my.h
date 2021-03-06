/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_


////////////////////////////////////////////////////////////
/// Put a int into a string
///
////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdint.h>

////////////////////////////////////////////////////////////
/// Define
///
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
/// End of a line >> '\n'
///
////////////////////////////////////////////////////////////
#define _END_LINE_ '\n'

////////////////////////////////////////////////////////////
/// End of a string >> '\0'
///
////////////////////////////////////////////////////////////
#define _END_STR_ '\0'

////////////////////////////////////////////////////////////
/// \brief 2-Define returned 84 if an error occured
///
////////////////////////////////////////////////////////////
#define EXIT_ERROR 84

#define EXIT_MALLOC 84

#define BOLD "\x1B[1m"

#define BLUE "\x1B[94m"

#define GREEN "\x1B[32m"

#define RED "\x1B[31m"

#define YEL "\x1B[93m"

#define MAJ "\x1B[35m"

#define CYAN "\x1B[36m"

#define RESET "\033[0m"

////////////////////////////////////////////////////////////
/// Functions
///
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
/// Put a int into a string
///
////////////////////////////////////////////////////////////
char *my_itos(unsigned nb);

////////////////////////////////////////////////////////////
/// Print a string
///
////////////////////////////////////////////////////////////
void my_putstr(char const *string);

////////////////////////////////////////////////////////////
/// Reverse a string
///
////////////////////////////////////////////////////////////
char *my_revstr(unsigned char *string);

////////////////////////////////////////////////////////////
/// Replace a string
///
////////////////////////////////////////////////////////////
char *my_strdup(char *string);

////////////////////////////////////////////////////////////
/// Append SRC on the end of DEST
///
////////////////////////////////////////////////////////////
char *my_strcat(char *dest, char const *src);

////////////////////////////////////////////////////////////
/// \brief Convert a string to a double
///
/// \param str string to convert
///
/// \return The converted number
////////////////////////////////////////////////////////////
double my_atof(const char *str);

////////////////////////////////////////////////////////////
/// Check if a char is a number
///
////////////////////////////////////////////////////////////
_Bool is_alphanum(char c);


////////////////////////////////////////////////////////////
/// Check if a string is a number
///
////////////////////////////////////////////////////////////
_Bool is_strnum(char *str);

////////////////////////////////////////////////////////////
/// \brief Convert a string to an integer
///
/// \param str string to convert
///
/// \return The converted number
////////////////////////////////////////////////////////////
int my_atoi(char *str);

////////////////////////////////////////////////////////////
/// calcul a power of a number
///
////////////////////////////////////////////////////////////
int my_pow(int, int);

////////////////////////////////////////////////////////////
/// Count the length of a line
///
////////////////////////////////////////////////////////////
int my_length_line(char *tab);

////////////////////////////////////////////////////////////
/// Count line number of a file
///
////////////////////////////////////////////////////////////
int my_nbr_line(char *tab, int i, int line);

////////////////////////////////////////////////////////////
/// Open a file and read
///
////////////////////////////////////////////////////////////
int my_open_read(char *filepath, char *str);

////////////////////////////////////////////////////////////
/// Return opposite number
///
////////////////////////////////////////////////////////////
int my_abs(int nbr);

////////////////////////////////////////////////////////////
/// Print a number
///
////////////////////////////////////////////////////////////
int my_put_nbr(int);

////////////////////////////////////////////////////////////
/// Count length of a string
///
////////////////////////////////////////////////////////////
int my_strlen(const char *);

////////////////////////////////////////////////////////////
/// Count length of a word
///
////////////////////////////////////////////////////////////
// int my_strlen_word(char *str, int i);

////////////////////////////////////////////////////////////
/// Check if a string is number
///
////////////////////////////////////////////////////////////
int my_str_isnum(char *str);

////////////////////////////////////////////////////////////
/// Print a char
///
////////////////////////////////////////////////////////////
void my_putchar(char);

////////////////////////////////////////////////////////////
/// Print a char **
///
////////////////////////////////////////////////////////////
void my_putstrstr(char **tab);

////////////////////////////////////////////////////////////
/// \brief Fill a string array of file content
///
/// \param Filepath
///
/// \return string array filled
////////////////////////////////////////////////////////////
char **my_file_to_word_array(char *filepath);

////////////////////////////////////////////////////////////
/// \brief Fill a string array of a string
///
/// \param Array to filled
///
/// \return string array filled
////////////////////////////////////////////////////////////
char **my_str_to_word_array(char *str, char *lim);

////////////////////////////////////////////////////////////
/// \brief Fill a string array of another string array
///
/// \param Filepath
///
/// \return string array filled
////////////////////////////////////////////////////////////
char **wa_to_wa(char **array);

////////////////////////////////////////////////////////////
/// \brief Write a string and assign a color
///
/// \param String to display
/// \param Color to assign
/// \param Boolean to set Bold
///
/// \return void
////////////////////////////////////////////////////////////
char *my_putstrc(char *string, char *color, _Bool bold);

////////////////////////////////////////////////////////////
/// \brief Write a string and add a line break
///
/// \param String to display
///
/// \return void
////////////////////////////////////////////////////////////
void my_putstrl(char const *string);

////////////////////////////////////////////////////////////
/// \brief Write a string and add a space
///
/// \param String to display
///
/// \return void
////////////////////////////////////////////////////////////
void my_putstrb(char *string);

void my_bzero(void *string, size_t size);

////////////////////////////////////////////////////////////
/// \brief Swap two int items
///
/// \param First element
/// \param Second element
///
/// \return void
////////////////////////////////////////////////////////////
void my_int_swap(int *First_Item, int *Second_Item);

////////////////////////////////////////////////////////////
/// \brief Delete a line of a string array
///
/// \param Array to modify
/// \param Line to delete
///
/// \return Modified Array
////////////////////////////////////////////////////////////
char **my_warray_dell(char **array, int line);

////////////////////////////////////////////////////////////
/// \brief Cast a char to an integer
///
/// \param Charac to cast
///
/// \return Cast charac
////////////////////////////////////////////////////////////
int my_ctoi(char charac);

////////////////////////////////////////////////////////////
/// \brief Sort a word array
///
/// \param Array to sort
/// \param first 0
/// \param last word. (-1) if word array is av
///
/// \return Cast charac
////////////////////////////////////////////////////////////
void my_qsort(char **array, int first, int last);

////////////////////////////////////////////////////////////
/// \brief Copy SRC to DEST
///
/// \param destination
/// \param source
///
/// \return String copied
////////////////////////////////////////////////////////////
char *my_strcpy(char *dest, const char *src);

////////////////////////////////////////////////////////////
/// \brief Compare two string
///
/// \param Compared
/// \param Comparing
///
/// \return int represented the ascii difference
////////////////////////////////////////////////////////////
_Bool my_strcmp(const char *compared, const char *comparing);

////////////////////////////////////////////////////////////
/// \brief Resize a string
///
/// \param String to resize
///
/// \return string resized
////////////////////////////////////////////////////////////
char *my_stresize(char *string, size_t beg, size_t end);


////////////////////////////////////////////////////////////
/// \brief Check if a string is a number
///
/// \param String to check
///
/// \return true is it's a string of number else false
////////////////////////////////////////////////////////////
_Bool is_str_nbr(char *string);

////////////////////////////////////////////////////////////
/// \brief Remove character of a string
///
/// \param String to modify
///
/// \return modified string
////////////////////////////////////////////////////////////
char *my_str_rm(char *string, char __DELETE);

////////////////////////////////////////////////////////////
/// \brief Remove \n of string
///
/// \param String to modify
///
/// \return void
////////////////////////////////////////////////////////////
void rm_jline(char *string);

void *my_memalloc(size_t size);

////////////////////////////////////////////////////////////
/// \brief Add a row to a table
///
/// \param Array to modify
///
/// \param String to add
///
/// \return void
////////////////////////////////////////////////////////////
void my_add_line_array(char **array, char *string);

////////////////////////////////////////////////////////////
/// \brief Edit a row in a table
///
/// \param Array to edit
///
/// \param String to replace
///
/// \param Line to edit
///
/// \return void
////////////////////////////////////////////////////////////
void my_modif_line_array(char **array, char *string, size_t line);

////////////////////////////////////////////////////////////
/// \brief Remove a row in a table
///
/// \param Array to edit
///
/// \param Line to remove
///
/// \return void
////////////////////////////////////////////////////////////
void my_rm_line_array(char **array, size_t line);


char *get_next_line(const int fd);

void *my_memcpy(void *dest, const void *src, size_t len);

#endif /* !MY_H_ */