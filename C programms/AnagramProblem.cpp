#include<bits/stdc++.h>
using namespace std;

void n2()
{
    // First Method
    string a = "aabb";
    string b = "aabd";
    bool check = false;
    
    if(a.length() == b.length())
    {
        for(int i =0;i<a.length();i++)
        {
            char chOfa = a[i];
            check = false;
            for(int j =0;j<b.length();j++)
            {
                char checked[10];
                 
                if(chOfa == b[j] && !checked[j])
                {
                    checked[j] = b[j];
                    check = true;
                    break;
                } 
            }
            if(check == false)
                break;
        }
    }
    
    if(check == true)
        cout<<"Strings are anagram";
    else
    cout<<"Strings are not Anagram";
    
}

void usingvectors()
{
     vector<string> a ;
     vector<string> b;
    // vector<string> b ;
    string ch;
    string newch;
    cout<<"Enter your first string : ";
    cin>>a;
    cout<<"Enter your second string : ";
    cin>>b;
    // a.push_back(ch);
    // b.push_back(newch);

    // cin>>b;
    // set<string> b = "bbaa";
    
     sort(a.begin(), a.end());
      sort(b.begin(), b.end());
    for(string x : a)
    cout<<x<<" ";
    cout<<endl;
    for(string x : b)
    cout<<x<<" ";
    
    
    // if(sorted1 == sorted2)
    // cout<<"Anagram";
    // else
    // cout<<"Not Anagram";
    
}
int main()
{
    // n2();
    usingvectors();
    return 0;
}