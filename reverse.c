// #include <stdio.h>
// int main(){
//     printf("hello world");
//     return 0;
// }


#include <stdio.h>

int check(int num);

int main(){
    int num;
    printf("enter the value of num");
    scanf("%d",&num);
    int result=check(num);
    printf("%d",result);
}

int check(int num){
    if (num>0){
        printf("number is positive ");
    }else if(num==0){
        printf("number is zero ");
    }else{
        printf("number is negative ");
    }
}