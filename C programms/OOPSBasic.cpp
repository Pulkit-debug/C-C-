#include<iostream>
#include<string>
using namespace std;

class cooler
{
    // There are three types of modifiers 1. public   2. private  3.protective
    // If we do not specify them by default the system treate the functions  of class private
    public : // This is a excess modifiers

    string Brand;
    float Price;
    string Name;
    int Speed;

    void getData()
    {
        cout<<"Enter the name of the cooler : ";
        cin>>Name;
        cout<<"Enter the Brand name of the cooler : ";
        cin>>Brand;
        cout<<"Enter the Price of the cooler : ";
        cin>>Price;
        cout<<"Enter the speed of the cooler : ";
        cin>>Speed;
        
    }
    void showdata()
    {
        cout<<"Name : "<<Name<<endl;
        cout<<"Brand : "<<Brand<<endl;
        cout<<"Price : "<<Price<<endl;
        cout<<"Speed : "<<Speed<<endl;
    }

    void on()
    {
        cout<<"Cooler ko on kar :)"<<endl;
    }

    void off()
    {
        cout<<"Cooler ko off kar :("<<endl;
    }

};

int main()
{
    
        cooler cooler1; // Here cooler1 is a object of class cooler
        cooler1.getData();
        cooler1.showdata();
        cooler1.on();
        cooler1.off();
        cooler cooler2;
        cooler2.getData();
        cooler2.showdata();
        return 0;
}