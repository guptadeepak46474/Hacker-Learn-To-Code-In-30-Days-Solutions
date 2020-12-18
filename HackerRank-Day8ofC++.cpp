// Day 8: Dictionaries and Maps

#include<iostream>
#include<map>
#include<iterator>
#include<string>

using namespace std;

int main()
{
    int n;
    string name;
    long num;
    cin>>n;
    cin.ignore();
    map<string, long> dict;
    for(int i = 0; i < n; i++)
    {
        cin>>name;
        cin>>num;
        dict[name] = num;
    }
    while(cin >> name)
    {
        if(dict.find(name) != dict.end())
        {
            cout<<name<<"="<<dict.find(name)->second<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
        
    }
    return 0;
}