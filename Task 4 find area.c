#include <stdio.h>
float findArea(int r) {
float pi = 3.1416;
return pi*r*r;

}

int main (){
int r1 , r2;
scanf ("%d%d",&r1,&r2);
float area1= findArea(r1);
float area2= findArea (r2);
if (area1>area2){
    printf ("The area of first circle is greater : %.2f\n",area1);
} else {
    printf ("The area of second circle is greater : %.2f\n",area2);
}
return 0;

}
