#include<iostream>
#include<string>
using namespace std;

class cooler 
{
    public : 
    string name;
    int price;

    //Method to use constructor
    //Constructor is made in the name of class
    // There are three types of constructors 1. DEFAULT  2.PARAMETRISED  3. COPY CONSTRUCTOR
    cooler()    //Default constructor
    {
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

    cooler(string coname, int coprice)  //Parameterised constructor
    {
        name  = coname;
        price = coprice;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

//  in copy constructor we send a similar type of constructor and must send by reference because class is so big in space and it is not possible to copy a full class so we send by reference

    cooler(const cooler &cu)        //Copy constructor 
    {
        name = cu.name;
        price = cu.price + 100;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

    // Now a bit of destructor 
    //When a program finishes i.e return zero a destructor(function ) is called which destroys the objects in reverse order
    // Destructor can't be overloaded wereas a constructor can 
    // Representation of destructor
    ~cooler()   // This is a destructor
    {
        cout<<"Creating Destruction "<<price<<endl;
    }
};
int main()
{
    //When ever we create an object of a class an internal functions is called which is called a constructor.
    // And the constructor provides garbage values to the defined variables in the class ex. here name and price
     cooler c; 
    cooler co("Pulkit", 500);
    cooler cool = co;       
    return 0;
}