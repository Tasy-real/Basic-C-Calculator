#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(void) {

  bool loop = true;
  double num1;
  double num2;
  char op;
  char y_or_n;
  
  printf("\nThats a basic calculator!\n\n");

  //time
  time_t t;
  struct tm * ts;

  //Time now
  t = time(NULL);
  ts = localtime(&t);

  printf("It is: %s\n", asctime(ts));

  //loop
  while(loop){

    //Input num 1
    printf("\n\nEnter a number: \n");
    scanf("%lf", &num1);

    //Input operator
    printf("\nEnter a operator: ");
    scanf(" %c", &op);

    //Input num 2
    printf("\nEnter another number: ");
    scanf("%lf", &num2);

    //Calculation
    if(op == '+'){
      printf("\nYour result is: %f\n", num1 + num2);
    }
    else if(op == '-'){
      printf("\nYour result is: %f\n", num1 - num2);
    }
    else if(op == '/'){
      printf("\nYour result is: %f\n", num1 / num2);
    }
    else if(op == '*'){
      printf("\nYour result is: %f\n", num1 * num2);
    }

    //If end or not
    printf("\nAgain? (Y/N): ");
    scanf(" %c", &y_or_n);

    if(y_or_n == 'N' || y_or_n == 'n'){
      printf("\nOK, bye!\n");
      loop = false;
    }
    else if(y_or_n == 'Y' || y_or_n == 'y'){
      loop = true;
    }
  }
    return 0;
}
