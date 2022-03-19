#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num ;
    

    do
    {
        printf("Enter a nUmber you want: ");
       scanf("%d", &num);
        printf("You entered a Even number, enter again ");

        if (num % 2 !=0){
          
          break;
        }

    } while (1);
    printf("You entered a Odd number sorry you can't go further");
    
}
// 
