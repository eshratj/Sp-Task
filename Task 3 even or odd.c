#include <stdio.h>
int isEven(int x){
if (x%2==0){
    return 1;
} else {
return 0;
}
}
int main (){
int x ;
scanf ("%d",&x);
printf(isEven(x) ? "Even\n" : "Odd\n");
return 0;

}
