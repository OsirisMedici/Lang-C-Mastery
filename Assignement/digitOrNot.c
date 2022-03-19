#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a charcter or Digit and we will tell it's a digit or not: ");
    scanf("%c", &ch);

    if (ch>=0 && ch <=9){
        printf("this is a digit");
    }
    else{
        printf("this is not a digit");
        
    }
    return 0;
}
