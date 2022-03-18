#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the first side of the rectangle: ");
    scanf("%d", &a);
    printf("Enter the Second side of the rectangle: " );
    scanf("%d", &b);

    printf("Perimeter of the rectangle: %d ", 2*(a+b) );

    return 0;
}
