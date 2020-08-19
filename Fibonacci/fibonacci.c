#include <stdio.h>

// void fib();

// void fib(){
//     int nth,first,second,plus ;
//     printf("Enter the number of terms");
//     scanf("%d",&nth);
//    printf("fibonacci series of %d terms\n %d \t",nth);
//     first = 0;
//     second = 1;
//     for (int i; i <= nth; ++i)
//     {
//       printf("%d \t",first);
//         plus = first + second;
//         first = second;
//         second = plus;
//     }
// }

int main(){
      int nth,first,second,plus ;
    printf("Enter the number of terms");
    scanf("%d",&nth);
    printf("fibonacci series of %d terms\n",nth);
    first = 0;
    second = 1;
    for (int i = 0; i <= nth; ++i)
    {
        printf("%d \t",first);
        plus = first + second;
        first = second;
        second = plus;   
}
  getch();
}