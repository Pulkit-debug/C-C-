#include<stdio.h>
// int func(int arr[])
// {
//     for(int i =0;i<=4;i++){

//         printf("The value at %d is %d\n",i, arr[i]);
//     }
// arr[0] = 234;
// }

int func2(int *ptr)
{

    for(int i =0;i<=4;i++){

        printf("The value at %d is %d\n",i, *(ptr+ i));
    }
*(ptr + 2) = 232; 

}
int main()
{
int array[] = {3, 5, 4, 2, 6}   ;
printf("The value at index is %d\n", array[0]);
func2(array);
func2(array);

}