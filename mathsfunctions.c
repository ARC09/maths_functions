#include <stdio.h>
 
int main()
{
   int first, second, third, fourth, add, subtract, multiply;
   float divide;

     printf("Enter three integers\n");
     scanf("%d%d", &first, &second. &third, &fourth);
 
   add = first + second + third + fourth;
   subtract = first - second - third - fourth;
   multiply = first * second * third * fourth;
   divide = first / (float)second / third / fourth;
 
     printf("Sum = %d\n",add);
     printf("Difference = %d\n", subtract);
     printf("Multiplication = %d\n", multiply);
     printf("Division = %.2f\n", divide);

   return 0;
}
