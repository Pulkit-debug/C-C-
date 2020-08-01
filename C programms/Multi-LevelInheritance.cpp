  #include<iostream>
using namespace std;

//3. Multi-Level Inherirance
class cooler // Base class   
{
    public : 

    cooler()
    {
        cout<<"The base class is called "<<endl;
    }
    string name;
    int price;
};

class desertCooler : public cooler 
{
    public : 
    desertCooler()
    {
        cout <<"The derived class 1 is called "<<endl;
    }
};

class newCooler : public desertCooler
{
   public : 
    newCooler()   
    {
        cout << "The derived class 2 is called "<<endl;
    }
     string name;
     int newprice;
   
};
 int main()
 {
     newCooler c1;
     /*Here first we are calling derived class 2 i.e newCooler then newCooler is calling derived class 1 i.e 
     desertCooler and desertCooler is then inheriting from the base class i.e cooler */

     // Here a chain like structure is forming 
     return 0;
 }