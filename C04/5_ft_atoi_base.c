#include <stdio.h>

int strlen(char *str){
  int i;
  i = 0;
  while (*str){
    i++;
    str++;
  }
  return i;
}

int verif(char *base, int len){

  int i;
  int j;
  i = 0;
  j = 0;

  if (len < 2)
    return 1;
  while (base[i]){
    while (base[j]){
      if (base[i] == base[j])
        return 1;
      j++;
    }
    i++;
  }
  while (*base){
    if (*base == '+' || *base == '-' || *base == ' ' || *base == '\n' || *base == '\r' || *base == '\t' || *base == '\v' || *base == '\f')
      return 1;
    base++;
  }
  return 0;
}

int in_base(char c, char *base){
  while(*base){
    if (c == *base++)
      return 1;
  }
  return 0;
}

int find_nbr(char *str, char *base){
  int count;
  int j;
  int k;
  int sign;
  sign = 1;
  count = 0;
  j = 0;
  k = 0;
  
  while (str[j] == ' ')
    j++;
  while (str[j] == '-' || str[j] == '+')
    if (str[j++] == '-')
      count++;
  while (str[j] && in_base(str[j], base) == 1)
    str[k++] = str[j++];
  while (str[k])
    str[k++] = '\0';
  if (count % 2 > 0)
    sign = -1;
  return sign;
}

int powering(int lenBase, int power){
  
  int init;
  init = lenBase;

  if (power == 0)
    return 1;
  if (power == 1)
    return lenBase;
  while(--power >= 1)
    lenBase *= init;
  return lenBase;
}

int convert(char c, char *base, int power, int lenBase){

  int val;
  int nb;
  val = 0;
 
  while(*base++ != c)
    val++;
  nb = val * powering(lenBase, power);
  return nb;
}

int run(char *str, char *base, int lenBase){

  int i;
  int lenNbr;
  int nb;
  int power;

  lenNbr = strlen(str);
  i = lenNbr - 1;
  nb = 0;
  
  while (i >= 0){
    power = (lenNbr - 1) - i;
    nb = nb + convert(str[i], base, power, lenBase);
    i--;
  }
  return nb;
}



int ft_atoi_base(char *str, char *base){
  
  int len;
  int sign;
  int nbr;

  len = strlen(base);
  if (verif(base, len) == 1){
    printf("error in base");
    return 0; 
  }
  sign = find_nbr(str, base);
  nbr = run(str, base, len);
  nbr *= sign;
  return nbr;
}

int main(){
  char base[17] = "0123456789ABCDEF";
  char str[100] = "  -+3Aa";
  int nbr;
  nbr = ft_atoi_base(str, base);
  printf("%d", nbr);
  return 0;
}