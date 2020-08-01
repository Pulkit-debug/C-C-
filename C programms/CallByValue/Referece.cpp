#include<iostream>
using namespace std;
//At first this is call by value

// void square(int nu)
// {
//     nu = nu*nu;
//     cout<<"Value in the square: "<<nu<<endl;
// }
// int main()
// {
//     int n=2;
//     square(n);
//     cout<<"Value in the main: " <<n<<endl;
//     return 0;   
// }


// This is call by reference
void add(int &no) //reference
{
    no+=no;
    cout<<"Value in function is : "<<no<<endl;
}

int main()
{
    int n=2;
   add(n);
    cout<<"Value in main is : "<<n;
    return 0;
}