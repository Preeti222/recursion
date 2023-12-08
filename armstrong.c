int armstrong(int num);

int main(){
    int num;
    printf("Enter the value of num");
    scanf("%d",&num);
    if(armstrong(num)){
        printf("the number is armstrong: %d",num);
    }else{
        printf("the value is not armstrong : %d",num);
    }
    return 0;
}

int armstrong(int num){
    int sum,digit,k, k2;
    k=sizeof(num);
    k2=num;
    while(num>0){
        digit=num%10;
        sum+=digit**k;
        num=num/10;
    }
  return sum==k2;
}