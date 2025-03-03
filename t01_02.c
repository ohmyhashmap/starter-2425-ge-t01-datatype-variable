// 11S24039 - Christian Alberto Sitohang

#include <stdio.h>

int main(int _argc, char **_argv)
{
  float num_1, num_2, num_3, num_4, num_5,sum,result;

  scanf("%f %f %f %f %f", &num_1, &num_2, &num_3, &num_4, &num_5);
  sum = num_1 + num_2 + num_3 + num_4 + num_5;
  result = sum * 0.2;
  printf("%.3f\n", sum);
  printf("%.3f\n", result);

  return 0;
}
