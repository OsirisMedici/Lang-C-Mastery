#include <stdio.h>

int main(int argc, char const *argv[])
{

    int input;
    printf("eneter a number: ");
    scanf("%d", &input);

    

    for (int  i = 0; i < input ; i++)

    if (input % 7 == 0){
        printf("You entered a umber whch is divisible by 7.... game over");
        return;
    }   
    else{
            printf("Enter a number again: ");
            scanf("%d", &input);

        }
        
    
}
