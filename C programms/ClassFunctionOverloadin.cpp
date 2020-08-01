#include<iostream>
#include<string>
using namespace std;
/// Function overloading in class 
// Function overloading is a part of the OOPS concept polymorphism
// Polymorphism = polymorphim is a process of repeating a particular type of code again and again
// like here we are using sme data and showData again. This is function overloading -> polymorphism 

class cooler
{
    public :
    string name;
    string name2;
    int price;
    int price2;
    void data()
    {
        cout<<"Name is ";
        cin>>name;
        cout<<"Price is ";
        cin>>price;
    }
    void data(int a)    // Anything in the parameter
    {
        cout<<"Name2 is : ";
        cin>>name2;
        cout<<"Price2 is : ";
        cin>>price2;
    }
    void showData()
        {
            cout<<"Name is " <<name<<endl;
            cout<<"Price is "<<price<<endl;
    }
    void showData(int newdata)  // "Anything" in the parameter 
    {
        cout<<"Name2 is " <<name2<<endl;
        cout<<"Price2 is " <<price2<<endl;
    }

};
int main()
{
    cooler c;   //Here c is the object of the cooler class
c.data();
c.data(5); //Any value in parameter just to differentiate data
c.showData();
c.showData(4);  // Any value in parameter just to differentiate showData
return 0;
}