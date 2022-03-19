#include <stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("square of number is: %f", pow(num, 2));
    return 0;
}
