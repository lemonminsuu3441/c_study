#include <stdio.h>

 int main()
 {
   float fahrenheit, celsius;

   fahrenheit = 72;
   celsius = (5.0f/ 9.0f) * (fahrenheit - 32);

   printf("ȭ���µ� %lf���� �����µ� %lf���Դϴ�.\n", fahrenheit, celsius);

   return 0;
}