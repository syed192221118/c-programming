void main()
{
int a,b,n;
clrscr();
printf("enter your number:");
scanf("%d",&n);
do
{
a=n%10;
b=n%10;
printf("%d",a);
n=b;
}while(n>1);
getch();
}