// C program to find cube of any number using function
#include <stdio.h>

double cube(double num);

int main(){
    int num;
    double c;
    printf("enter the value of num");
    scanf("%d",&num);
    c=cube(num);
    printf("cube of %d is %.3f",num,c);
    return 0;
    
}
double cube(double num){
    return (num*num*num);
}



// #include <stdio.h>

// /* Function declaration */
// double cube(double num);

// int main()
// {
//     int num;
//     double c;
    
//     /* Input number to find cube from user */
//     printf("Enter any number: ");
//     scanf("%d", &num);
    
//     c = cube(num);

//     printf("Cube of %d is %.2f", num, c); 
    
//     return 0;
// }

// /**
//  * Function to find cube of any number
//  */
// double cube(double num)
// {
//     return (num * num * num);
// }