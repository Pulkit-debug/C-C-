#include<iostream>
using namespace std;

//1. Single Inherirance
class cooler    // This is the base class or parent class
{
    public : 

    cooler()
    {
        cout<<"The base class is called "<<endl;
    }
    string name;
    int price;
};


class newCooler : public cooler   // This is the derived class or  inherited class
{
    public : 
    newCooler()   
    {
        cout << "The derived class is called "<<endl;
    }
     string name;
     int newprice;
   
};
 int main()
 {
     newCooler c1;
     return 0;
 }