#include<stdio.h>
int bs(int arr[], int l, int r, int x){

if(r>=l){
    int mid = l +(r-l)/2;

    if(x==arr[mid])
    return mid;
    
    else if(x>arr[mid])
    return bs(arr, mid + 1, r, x );

    else
    
    return bs(arr, l,mid-1, x);

}

else 
return -1;
}
void main()
{
int array[] = {2, 3, 4, 10, 20, 30, 40};
int n = sizeof(array);
int x = 4;
int result = bs(array, 0, n-1, x);
if(result == -1) 
 printf("Your number doesn't exist "); 
else
printf("Element is present at index %d", result);
}