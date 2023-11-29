#include<stdio.h>
#include<unistd.h>


int   ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    i++;
  }
  return (i);
}


char *ft_strdup(char *src)
{
  int l;
  char dest;
  int i;

  l = ft_strlen(src);
  *dest = (char *)malloc(l * sizeof(char));
  if (dest)
    return (0);
  i = 0;
  while

}