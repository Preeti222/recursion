// int fact(int num);

// int main(){
//     int num ,c;
//     printf("enter the value of num");
//     scanf("%d",&num);
//     c=fact(num);
//     printf("factorial of num= %d",c);

// }
// int fact(int num){
//     if (num==1){
//         return 1;
//     }else{
//         return (num*fact(num-1));
//     }
// }



int fibo(int num);

int main(){
    int num, c;
    printf("enter the value of num");
    scanf("%d",&num);
    c=fibo(num);
    printf("fibonaci series of num= %d",c);
}

int fibo(int num){
    if(num==0){
        return 1;
    }
    if(num==1){
        return 1;
    }else{
        return fibo(num-1)+fibo(num-2);
    }
}