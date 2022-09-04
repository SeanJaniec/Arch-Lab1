#include <stdio.h>
#include <math.h>

int main(){

    double a;
    double b;
    double c;
    printf("Enter 3 sides of a triangle:");
    scanf("%1f", &a);
    scanf("%1f", &b);
    scanf("%1f", &c);

    double semi = (a + b + c)/2;

    double a1 = semi - a;
    double b1 = semi - b;
    double c1 = semi - c;

    double area = a1 * b1 * c1 * semi;



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
