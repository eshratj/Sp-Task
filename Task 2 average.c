#include <stdio.h>

float calculateAverage (float a, float b){
float avg = (a+b)/2;
return avg;
}
int main (){
float a , b;
scanf ("%f %f",&a,&b);
printf ("%f", calculateAverage (a,b));
return 0;


}
