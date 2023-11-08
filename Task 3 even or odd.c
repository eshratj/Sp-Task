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
isEven(x)? printf("Even\n") : printf("Odd\n");
return 0;

}
