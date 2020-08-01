#include<iostream>
using namespace std;
void insertion_sort(int a[], int n)
{   
    int value, hole;
    for(int i =1;i<n;i++)
    {
        value = a[i];
        hole = i;
        while(hole>0 && a[hole-1] > value)
        {
            a[hole] = a[hole-1];
            hole = hole - 1;
        }
        a[hole] = value;
    }
}
void print_array(int a[], int n)
{
    cout<<"Array after sorting is"<<endl;
    for(int i =0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int n, a[10];
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter your unsorted array : ";
    for(int i =0;i<n;i++)
    cin>>a[i];
    cout<<"Before sorting array is "<<endl;
    for(int i =0;i<n;i++)
    cout<<a[i]<<" ";
    insertion_sort(a, n);
    print_array(a, n);
}