#include <stdio.h>

int main(void) {
  //input the operator 
  char Operator;
  printf("Choose an operator [+,-,*,/]: ");
  scanf("%c", & Operator);
  //input the numbers 
  float num1, num2;
  printf("Enter the first number: ");
  scanf("%f", &num1);
  
  printf("Enter the second number : ");
  scanf("%f", &num2);

  float result;
  switch(Operator ){
    case '+':
    result = num1 + num2;
    break;
    case '-':
    result = num1 - num2;
    break;
    case '*':
    result = num1 * num2;
    break;
    case '/':
    result = num1 / num2;
    break;
    default : 
    printf("Invalid Operator ");
  }
  //Display the result 
  printf("Result : %.2f %c %.2f = %.2f", num1, Operator, num2, result);
  return 0;
}