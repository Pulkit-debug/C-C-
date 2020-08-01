//This question is based on kadesn's algorithm
// It will be divided into three parts 
// 1. time complexity -> O(n3)
// 2. time complexity -> O(n2)
// 3. time complexity -> O(n)

#include<iostream>
using namespace std;

void n3()
{
       int a[] = {-1,3, 2, -1, 1, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int maxsum= -234;
    //First step to calculate all the sub ararys in the arrays
    for(int i =0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            int cursum =0;
            for(int k =i;k<j;k++)
            {
                cursum += a[k];
            }
            if(cursum > maxsum)
            {
                maxsum = cursum ;
            }
        }   
    }
    cout<<"Maximum sum of the subarray is : "<<maxsum<<endl;
    // In the above method the time comlexity is too much i.e. O(n^3)

    //Now we have to find  a shorter method in which we can reduce the time complexsity 
}

void n2()
{
    int a[] = {-1, 1, 2, -3, 1, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int sum[10];
    sum[0] = a[0];
    for(int i =1;i<n;i++)
    sum[i] = sum[i-1] + a[i];
    int max = -234;
    for(int i =0;i<n;i++)
    {

        for(int j =i;j<n;j++)
        {
            int cur = sum[j] - sum[i] + a[i];
            if(cur > max)
            {
            max = cur ;
            }
        }
        
    }
    cout<<"Maximum sum by pre-processing is : "<<max<<endl;
}

void n()
{
    int a[] = {1, -2, 3, -1, 2, -4};
    int n = sizeof(a)/sizeof(a[0]);
    int cur_sum=0, max_sum=-345;
    for(int i =0;i<n;i++)
    {
        cur_sum += a[i];
        if(cur_sum > max_sum)
        {
            max_sum = cur_sum ;
        }
        if(cur_sum < 0)
        {
            cur_sum = 0;
        }
    }
    cout<<"Maximum sum using kaden's is : "<<max_sum;
}
int main()
{
    n3();
    n2();
    n();
    return 0;
}
