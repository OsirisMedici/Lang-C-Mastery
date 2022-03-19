#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number you want to make a table from: ");
    scanf("%d", &num);
    printf("Table is: ");
    for (int i=1; i<=10; i++){
        
        printf(" %d \n", num*i);

    }
    
    return 0;
}
