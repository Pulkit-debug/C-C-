#include<iostream>
using namespace std;
// Function overloading is a part of OOPS and in OOPS it is a part of Polymorphism......
void func1()
{
    cout<<"This is func1"<<endl;
}

void func1(int a)    //Idhar dena hai 5 value ko 
{
    cout<<"This is func2 in the name of func1";
}
void func1(char a)
{

}
void func1(int a, int b=6)  // Ya fir idhar dena hai 5 value ko kyuki b has already its value in the funtion parmeter
{}
void func1(char a, int b)
{}
int main()
{
    func1();
    func1(5);//Yhan par ye confuse ho jaega ki is value 5 ko dena kaha pe hai
    return 0;
}