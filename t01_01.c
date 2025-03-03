// 11S24039 - Christian Alberto Sitohang

#include <stdio.h>

int main(int _argc, char **_argv)
{
  short num;
  char ch;
  short num2;
  unsigned short num3;
  float num4;

  scanf("%hd %c %hd %hd %f", &num, &ch, &num2, &num3, &num4);

  printf("%d\n%c\n%d\n%d\n%.2f\n", num, ch, num2, num3, num4);

  return 0;
}
