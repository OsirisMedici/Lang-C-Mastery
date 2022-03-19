#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a Number you want to check: ");
    scanf("%d", &num);

    int count =0;

    for (int i=2; i<=num; i++)
    {
        if (num%i==0)
        count++;
    }
    
    if (count !=0)
    {
        printf("It's Not a prime Number ");
    } 

    else 
    {
        printf(" prime Number ");
    }    
    
    
    return 0;
}
