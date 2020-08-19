#include <stdio.h>
int main(){
    int outside,weather;
    printf("enter if outside 1 true or 0 false:");
    scanf("%d",&outside);
    printf("enter if 1 rain or 0 false");
    scanf("%d",&weather);

    if(outside && weather)
        printf("take umbrella");
    else
        printf("don't take");
}
