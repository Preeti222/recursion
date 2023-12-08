// int max(int a, int b);

// int main(){
//     int a,b,max1;
//     printf("enter the value of b: ");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     max1=max(a,b);
//     printf("maximum of two number : %d",max1);
//     return 0;
// }

// int max(int a,int b){
//     if (a>b){
//         return a;
//     }else{
//         return b;
//     }
// }


// using recursion
int max(int a, int b);

int main(){
    int a,b,max1;
    printf("enter the value of b: ");
    scanf("%d",&a);
    scanf("%d",&b);
    max1=max(a,b);
    printf("maximum of two number : %d",max1);
    return 0;
}
