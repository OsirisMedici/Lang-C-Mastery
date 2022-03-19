#include <stdio.h>
 

float squareArea (float side);
float circleArea (float rad);
float rectangularArea (float a, float b);

int main(int argc, char const *argv[])
{
    float a,b;
    printf("Enter the first Number: ");
    scanf("%f", &a);
    printf("Enter the second Number: ");
    scanf("%f", &b);
    printf("%f", rectangularArea);
    return 0;
}

float squareArea (float side){  
    return side*side;
}
float circleArea (float rad){
    return 3.14*rad*rad;
}

float rectangularArea (float a, float b){
    return 2*(a+b);
}


