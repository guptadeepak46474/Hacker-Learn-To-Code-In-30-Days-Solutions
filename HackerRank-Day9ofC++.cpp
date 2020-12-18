#include<iostream>
#include<fstream>
#include<limits>

using namespace std;

// Complete the factorial function below.
int factorial(int n) 
{
    if(n == 1)
    {
        return 1;
    }
    else 
    {
    return (n * (factorial(n-1))); //Recursion
    }
    cout<<n;
}

int main() 
{

    int n;
    cin >> n;
    cout << factorial(n) << endl;

    return 0;
}
