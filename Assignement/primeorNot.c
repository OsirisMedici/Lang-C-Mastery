#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);
    int ans;

    for (int i=2; i<=number/2; i++){
        if (number%i==0){
            ans =1;
        }
       
    }
     if (ans==0){
            printf("Its a prime number\n");
        }
        else{
            printf("Its not  a prime number\n");
            
        }
}
