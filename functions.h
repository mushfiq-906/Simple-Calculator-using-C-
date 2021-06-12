void print()
{
    printf("Invalid Input!! Try Again\n");
}

void Add()
{
    float a,b;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("Result is: %.2f\n",a+b);
}

void Subtract()
{
    float a,b;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("Result is: %.2f\n",a-b);
}
void Multiplication()
{
    float a,b;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("Product is: %.2f\n",a*b);
}

void Division()
{
    float a,b;
    printf("Enter Numerator: ");
    scanf("%f",&a);
    printf("Enter Denominator: ");
    scanf("%f",&b);
    if(b==0){
        print();
        return;
    }
    printf("Result is: %.2f\n",a/b);
}

void Square()
{
    float a;
    printf("Enter number: ");
    scanf("%f",&a);
    printf("Square of the number: %.2f\n",a*a);
}
void Cube()
{
    float a;
    printf("Enter number: ");
    scanf("%f",&a);
    printf("Cube of the number: %.2f\n",a*a*a);
}
void Power()
{
    int a,n;
    printf("Enter Base: ");
    scanf("%d",&a);
    printf("Enter power: ");
    scanf("%d",&n);
    int p=n;
    if(p<0)
        p=p*(-1);
    long long res=1;
    while(p)
    {
        if(p%2)
        {
            res=res*a;
            p--;
        }
        else
        {
            a=a*a;
            p/=2;
        }
    }
    if(n>0)
        printf("Result is: %lld\n",res);
    else{
        float b = 1.0/res;
        printf("Result is: %f\n",b);
    }
}


void Mod()
{
    int a,m;
    printf("Enter num1: ");
    scanf("%d",&a);
    printf("Enter num2: ");
    scanf("%d",&m);
    if(a<0||m<=0){
        print();
        return;
    }
    printf("Num1 MOD Num2 is: %d\n",a%m);
}

void factorial()
{
    int n;
    printf("Enter number (range between 20):");
    scanf("%d",&n);
    if(n>20){
        print();
        return;
    }
    long long fact=1;
    int i;
    for(i=2; i<=n; i++)
        fact=fact*i;
    printf("Result is: %lld\n",fact);
}

void COnvertToInt()
{
    float a;
    printf("Enter number: ");
    scanf("%f",&a);
    long long b=a;
    printf("Result is: %lld\n",b);
}

void Inverse()
{
    long long a;
    printf("Enter number: ");
    scanf("%lld",&a);
    if(a==0){
        print();
        return;
    }
    float b = 1.0/a;
    printf("Result is: %f\n",b);
}

void Sign_Change()
{
    long long a;
    printf("Enter number: ");
    scanf("%lld",&a);
    a=a*(-1);
    printf("Result is: %lld\n",a);

}
void Func()
{
    int n,i;
    printf("Enter number: ");
    scanf("%d",&n);
    int base=10;
    long long res=1;
    while(n)
    {
        if(n%2)
        {
            res=res*base;
            n--;
        }
        else
        {
            base=base*base;
            n/=2;
        }
    }
    if(n<0)
        printf("Result is : %.4f\n",1.0/res);
    else
        printf("Result is : %lld\n",res);
}
void EXP()
{
    float a,b;
    printf("Enter number: ");
    scanf("%f",&a);
    printf("Enter number: ");
    scanf("%f",&b);
    float n=10;
    b--;
    while(b--)
    {
        n=n*10;
    }
    printf("Result is: %.2f\n",a*n);

}
void Percent()
{
    float a,b;
    printf("Enter number: ");
    scanf("%f",&a);
    printf("Enter number: ");
    scanf("%f",&b);
    if(a<0||b<0)
    {
        print();
        return;
    }
    printf("Result is: %.2f\n",a*b/100);

}
