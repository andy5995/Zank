/** \file utils.c
 */
#include <string.h>

 /* reverse:  reverse string s in place */
static void
reverse (char s[])
{
  int i, j;
  for (i = 0, j = strlen (s) - 1; i < j; i++, j--)
  {
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

 /* itoa:  convert n to characters in s */
void
itoa (int n, char s[])
{
  int i, sign;

  if ((sign = n) < 0)           /* record sign */
    n = -n;                     /* make n positive */
  i = 0;
  do
  {                             /* generate digits in reverse order */
    s[i++] = n % 10 + '0';      /* get next digit */
  }
  while ((n /= 10) > 0);        /* delete it */
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse (s);
}

/*
 *
 * del_char_shift_left():
 *
 * Erases characters from the beginning of a string
 * (i.e. shifts the remaining string to the left
 *
 */
void
del_char_shift_left (const char c, char **str)
{
  while (**str == c)
    (*str)++;

  return;
}

