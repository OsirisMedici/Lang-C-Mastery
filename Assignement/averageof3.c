#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);


    printf("Enter your third number: ");
    scanf("%d", &c);

    printf("Total average of these three numbers: %d", (a+b+c)/3);

    return 0;
}    

