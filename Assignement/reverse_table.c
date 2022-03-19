#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number you want to make a reverse table: ");
    scanf("%d", &num);
    printf("Your reverse table is : \n");


    for (int i =10; i >=1; i--){
    printf("%d\n", num*i);

    }
    return 0;
}
