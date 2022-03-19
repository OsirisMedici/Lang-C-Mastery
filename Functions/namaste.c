#include <stdio.h>

void namaste();
void bonjour();

int main()
{
    char ch;
    printf("Enter i if you are a Indian or b if You are French: ");
    scanf("%c", &ch);

    if (ch=='i'){
        namaste();
    }
    else{
        bonjour();
    }


    return 0;
}


void namaste()
{
    printf("namste you Indian Proud");

}
    
void bonjour()
{
    printf("namste you French Proud");
}
    
