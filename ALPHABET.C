void main()
{
char n;
printf("enter an alphabet");
scanf("%c",&n);
if((n>='a'&& n>='z')||(n>='A'&& n>='Z'))
{
printf("the given character is an alphabet");
}
else
{
printf("the given character is not an alphabet");
}
getch();
}