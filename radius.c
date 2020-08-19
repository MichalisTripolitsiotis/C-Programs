#include<stdio.h>
int main()
{
     int radius;
     float v;
     printf("Enter radius:");
     scanf("%d",&radius);
     v = (4/3.0)*3.14*radius*radius*radius;
     printf("Volume is : %f \n\n",v);
     return 0;
}
