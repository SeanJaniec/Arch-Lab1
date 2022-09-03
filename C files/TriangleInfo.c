#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;
    printf("Enter 3 sides of a triangle:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    double semi = (a + b + c)/2;

    double a = sqrt(semi(semi - a)(semi - b)(semi - c));



    if (a == b && b == c)
    {
        printf("Equilateral");
    }
    else if(a != b && a != c && b != c){
        printf("Scalene");
    }
    else if(a == b || a == c || b == c){
        printf("Isosceles");
    }
    else{
        printf("Impossible");
    }
    


    return 0;
}