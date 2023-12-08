#include <stdio.h>
double area(double radius);
double circumference(double radius);
double diameter(double radius);

int main(){
    float radius,c,c1,c2;
    printf("enter the value of radius");
    scanf("%f",&radius);
    c=area(radius);
    c1=circumference(radius);
    c2=diameter(radius);
    printf("area of the circle=%.2f \n",c);
    printf("circumference of circle= %.2f \n",c1);
    printf("area of circle =%.2f \n",c2);
    return 0;
}

double area(double radius){
    return (3.14*radius*radius);
}
double circumference(double radius){
    return (2*3.14*radius);
}
double diameter(double radius){
    return (2*radius);
}