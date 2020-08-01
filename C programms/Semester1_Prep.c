// #include<stdio.h>
// #include<string.h> 
// int main() {
//         // Binary Search
//         int n, a[20],x;
//         printf("Enter the size of your array: :");
//         scanf("%d", &n);
//     printf("Enter the elements of your array: ");
//     for(int i =0;i<n;i++)
//     scanf("%d", &a[i]);
//     printf("Enter the element you want to search");
//     scanf("%d", &x);
//     // Sorting the array
//     for(int i =0;i<n;i++)
//     {
//         for(int j = i+1;j<n;j++)
//         if(a[i] > a[j]) {
//        int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         }
//     }
//     int first = 0;
//     int last = n-1;
//     int flag  = 0;
//     while(first <= last) {

//         int mid = (first + last)/ 2;
//         if(a[mid] == x)
//         {
//             printf("Element %d is found at the location %d", x, mid);
//             break;
//         }
//         else if(a[mid] < x)
//         first = mid + 1;
//         else if(a[mid] > x)
//         last  = mid - 1;
//         else flag = 1;

//     }
//     if(flag == 1)
//     printf("The element %d is not present in the array:", x);   // based on zero base indexing
//     return 0;
// }

// Insertion of an elemnt in the array 

// #include<stdio.h>
// int main()
// {
//     int n, a[55];
//     int index = 0, element = 0;
//     printf("Enter the size of your array: :");
//     scanf("%d", &n);
//     printf("Enter the elements of the array: :");
//     for(int i =0;i<n;i++)
//     scanf("%d", &a[i]);

//     printf("Enter the index of the inserting element: ");
//     scanf("%d", &index);
//     printf("Enter the element you want to insert: ");
//     scanf("%d", &element);

//     n++;
//     for(int i =n;i>=index;i--) {
//         a[i] = a[i-1];
//     }
//     a[index] = element;
//     // Resultant array is : 
//     for(int i =0;i<n;i++)
//     printf("%d ", a[i]);

// return 0;
// }

// Deletion of an element from an array
// #include<stdio.h>
// int main()
// {
//     int n, a[50];
//     printf("Enter the size of your array: ");
//     scanf("%d", &n);
//     printf("Enter the elements of the array: ");
//     for(int i =0;i<n;i++)
//     scanf("%d", &a[i]);
    
//     printf("Enter the index from which you want to delete the array: " );
//     int index = 0;
//     n--;
//     scanf("%d", &index);
//     for(int i = index-1;i<n;i++)
//     a[i] = a[i+1];
//     for(int i = 0;i<n;i++)
//     printf("%d ", a[i]);
//     return 0;
// }

// Bubble sort (swapping)

// #include<stdio.h>
// int main()
// {
//     int n,a[210];
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     printf("Enter the elements of the array: ");
//     for(int i =0;i<n;i++)
//     scanf("%d", &a[i]);

//     for(int i =0;i<n;i++)
//     {
//         for(int j = i+1;j<n;j++)
//         {
//         if(a[i] > a[j])
//         {
//             int temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//         }
//         }
//     }
//     for(int i =0;i<n;i++)
//     printf("%d ", a[i]);
//     return 0;

// }


// Selection sort
// #include<stdio.h>
// int main()
// {
//     int n, a[30];
//     printf("Enter the size of ther array : ");
//     scanf("%d", &n);
//     printf("Enter the elements of the array: ");
//     for(int i =0;i<n;i++)
//     scanf("%d", &a[i]);
//     int index = 0;
//     for(int i = 0;i<n;i++)
//     {
//         int min = a[i];
//         index = i;
//         for(int k = i+1;k<n;k++)
//         {
//         if(min > a[k])   {
//             min = a[k];
//             index = k;
//         int temp = a[i];
//         a[i] = a[index];
//         a[index] = temp;
//         }
        
//         }
//     }

//     // The sorted array is
//     for(int i =0;i<n;i++)
//     printf("%d ", a[i]);
// return 0;

// }



// Insertion sort
// #include<stdio.h>
// int main()
// {
//     int n, a[20];
//     printf("Enter the sieze of the array: ");
//     scanf("%d", &n);
//     printf("Enter the elements of the array: ");
//     for(int i =0;i<n;i++)
//     scanf("%d", &a[i]);
//     for(int i = 1;i<n;i++)
// {
//     int value = a[i];
//     int hole = i;
//     while(hole > 0 && a[hole-1] > value)
//     {
//         a[hole] = a[hole-1];
//         hole = hole -1;
//     }
//     a[hole] = value;
// }
// for(int i =0;i<n;i++)
// printf("%d ", a[i]);
// return 0;
// }
