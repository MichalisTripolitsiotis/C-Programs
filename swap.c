#include <stdio.h>
void swap(int *i, int *j){
    int temp = *i;
    *i=*j;
    *j=temp;
}
int main (){
int a =2;
int b=3;
int *ptra = &a;
int *ptrb = &b;


printf("number a %d number b %d",a,b);
swap(*ptra,*ptrb);
printf("After swap number a %d number b %d",a,b);
return 0;
}
