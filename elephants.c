/*
    A program that reads a data file (elephants and finds the average
*/
#include <stdio.h>
#include<stdlib.h>

int main()

{
    float avg_weight;

    long int total=0;

    int num,i;
    //pointer to the file
    FILE *fp;
    //open the file
    fp=fopen("data.txt","r");

    if(fp!=NULL)

    {

    int weights[1000];

    for(i=0;i<1000;i++)

        {

        fscanf(fp,"%d",&num);

        weights[i]=num;

        }

    for(i=0;i<1000;i++)

    {

        total+=weights[i];

    }

    avg_weight=(float)total/1000; //Calculating average of weights

    printf("Average weight= %.2f",avg_weight);

}else

    printf("File not opened");

}
