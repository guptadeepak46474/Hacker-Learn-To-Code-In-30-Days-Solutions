// #include <bits/stdc++.h>
#include<iostream>
#include<limits>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int result;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i = 1; i <= 10; i++)
    {
        result = n * i;
        cout<< n << " x " << i << " = " << result << endl;
    }
    return 0;
}
