#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter four numbers\n");
scanf("%d %d %d %d",&a, &b,&c,&d);
if (a>b && a>c && a>d)
{
printf("a is greater");
}
 if(b>a && b>c && b>d)
{
    printf("b is grater");
}
 if(c>a && c>b && c>d)
{
    printf("c is greater");
}
   if(d>a && d>b && d>c )
{
    printf("d is greater");

}
return 0;
}