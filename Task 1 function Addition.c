#include <stdio.h>
int add (int num1,int num2)
{
    return num1+num2;
}
int main (){
int a,b;
scanf ("%d %d",&a,&b);
int sum = add (a,b);
printf ("The sum is %d\n",sum);
return 0;



}

