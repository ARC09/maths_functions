\\this is the line causing issue conflict branch
#include <stdio.h>
 
int main()
{
   int first, second, add, subtract, multiply;
   float divide;

     printf("Enter three integers\n");
     scanf("%d%d", &first, &second. &third);
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;
 
     printf("Sum = %d\n",add);
     printf("Difference = %d\n", subtract);
     printf("Multiplication = %d\n", multiply);
     printf("Division = %.2f\n", divide);

   return 0;
}
