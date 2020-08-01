#include<stdio.h>
#include<string.h>
// Structures are used to combine different tyep of data types int one datatypes
// Staructues can be called a user defined datatype

struct info
{
    char a[30];
    int id;
    char fav_char;
    float percentage;
    int ar[23];
}ram, lakhan;
// struct info ram, lakhan;
void main()
{
// struct info ram, lakhan;
    strcpy(ram.a, "My name is Ram");
    strcpy(lakhan.a, "My name is Lakahn");
    ram.id = 50;
    lakhan.id= 51;
    ram.fav_char = 'R';
    lakhan.fav_char = 'L';
    ram.percentage = 92.3;
    lakhan.percentage = 91.3;
    for(int i =0;i<5;i++)
    scanf("%d", &ram.ar[i]);
    int n = sizeof(ram.ar)/ sizeof(ram.ar[0]);
    printf("Name is : %s\n",ram.a);
    printf("Name is : %s\n",lakhan.a);
    printf("Fav char of of %s is %c \n", ram.a, ram.fav_char);
    printf("Fav char of of %s is %c \n", lakhan.a, lakhan.fav_char);
    printf("Id of %s is %d \n", ram.a, ram.id);
    printf("Id of %s is %d \n", lakhan.a, lakhan.id);
    printf("Percentage of %s is %0.lf\n", ram.a, ram.percentage);
    printf("Percentage of %s is %0.1f\n", lakhan.a, lakhan.percentage);
    printf("Integer array is :\n ");
    for(int i =0;i<n;i++)
    printf("%d", ram.ar[i]);
}