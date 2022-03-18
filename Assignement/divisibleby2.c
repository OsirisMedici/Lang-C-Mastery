#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number you want to check\n");
    printf("If it will be useful or not: ");
    scanf("%d", &num);
    if(num%2==0){
    printf("this number is even");
    }
    else{
        printf("It's an odd number like you are odd");
    }
    return 0;
}
