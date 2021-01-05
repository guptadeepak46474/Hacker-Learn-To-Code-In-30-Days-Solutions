#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here

/*
In This Case We Use Public Beacuse in C++ We have to decleare specific members as private, public and protected. But As written in instruction in this Program Do not use an access modifier (e.g.: public) in the declaration for your Calculator class. This instruction is Specific only for Java. Because in Java we can decleare Class as public not in C++.
*/

class Calculator
{
public:
    int power(int n, int p)
    {
        if(n < 0 || p < 0)
        {
            throw runtime_error("n and p should be non-negative");
        }
        return pow(n, p);
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}