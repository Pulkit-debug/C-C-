#include<iostream>
#include<string>
using namespace std;

// There are three types of access specifiers 
/*1. public
2. private // If we do not declare any of these three the compiler recognizes it as a private part
3. protected
*/
class cooler 
{
    // We can use public access specifier outside the class with no problem 
    //But we can't access the private part outside the class, It wil only remain in the class

    private: 
    string name ;
    // We must not make these variables public not good :(  
    public : 
    int price;
    
    cooler()
    {
        name = "Pulkit";
        price = 300;
        
    }
    void show()
    {
        cout<<"Name : "<<name<<endl<<"price :" <<price<<endl;
    }
};
int main()
{
    cooler c;
    c.show();
    cout<<c.name;
    
}