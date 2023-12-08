// int check(int num);

// int main(){
//     int num,result;
//     printf("enter the value of num :");
//     scanf("%d",&num);
//     result=check(num);
//     printf("num is even or odd : %d",result);

int isEven(int num)
{
    return !(num & 1);
}


int main()
{
    int num;
    
    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    
    /* If isEven() function returns 0 then the number is even */
    if(isEven(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}