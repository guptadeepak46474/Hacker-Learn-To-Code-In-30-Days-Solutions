#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int d1,m1,y1;   //Returned Date
    cin>>d1>>m1>>y1;

    int d2,m2,y2;
    cin>>d2>>m2>>y2;    //Due Date
    
    int fine = 0;

    if(y2 < y1)
    {
        fine = 10000;
    }
    else if(y1 == y2)
    {
        if(m2 < m1)
        {
            fine = 500*(m1-m2);
        }
        else if(m1 == m2)
        {
            if(d2 < d1)
            {
                fine = 15*(d1-d2);
            }
            else
            {
                fine = 0;
            }
        }
        else
        {
            fine = 0;
        }
    }
    else
    {
        fine = 0;
    }
    
    cout<<fine;

    return 0;
}
