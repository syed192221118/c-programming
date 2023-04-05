void main()
{
char n;
clrscr();
printf("enter an alphabet:");
scanf("%c",&n);
if(n>='A' && n<='Z')
{
printf("the given char is in uppercase");
}
else if(n>='a' && n<='z')
{
printf("the given char is in lowercase");
}
else
{
printf("the given char in not an alphabet");
}
getch();
}