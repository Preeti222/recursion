int isprime(int num);

int main()
{

    int num;
    printf("enter the value of num : ");
    scanf("%d", &num);
    if (isprime(num)){
        printf("number is prime : %d",num);
    }else{
        printf("number is not prime :%d",num);
    }
    return 0;
}

int isprime(int num)
{
    int i = 2;
    while (i <= num / 2)
    {
    if (num % i == 0)
    {
        break;
    }
    i++;
    }
    if (i > num / 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
