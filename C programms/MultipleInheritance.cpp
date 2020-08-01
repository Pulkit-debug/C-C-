#include<iostream>
using namespace std;

//2. Multiple Inherirance
class cooler // Base class 1   
{
    public : 

    cooler()
    {
        cout<<"The base class 1 is called "<<endl;
    }
    string name;
    int price;
};

class desertCooler  // Base Class 2 is called
{
    public : 
    desertCooler()
    {
        cout <<"The base class 2 is called "<<endl;
    }
};

class newCooler : public cooler, public desertCooler
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