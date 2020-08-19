// solving factorial using Recursion
//Recursion is when a function is called in itself
#include <stdio.h>

long int fact(int n);

int main(){
    int n;
    redo:
    printf("Enter the number you want to find the factorial of:\t");
    scanf("%d",&n);
    if (n <= 0)
    {
    printf("Enter the a non negative number you want to find the factorial of:\t");
    goto redo;
    }
    else
    {
    printf("Factorial of %d is %ld",n,fact(n));
    }
    getch();

}

long int fact(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}
