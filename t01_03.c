// 11S24039 - Christian Alberto Sitohang

#include <stdio.h>

int main(int _argc, char **_argv)
{
  unsigned int x, y, z;
  scanf("%d %d %d", &x, &y, &z);
  x = x << y;
  printf("%d\n", x);
  printf("%d", x == z);
  return 0;
}
