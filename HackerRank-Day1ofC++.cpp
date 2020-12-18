#include <iostream>
#include <iomanip>
#include <limits>
#include<string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int num;
    double num1;
    string num2;

    cin>>num;
    cin>>num1;
    cin.ignore();
    getline(cin,num2);

    cout<<i + num<<endl;
    cout<<fixed;
    cout<<setprecision(1);
    cout<<d + num1<<endl;
    cout<<s<<num2;

    return 0;
}