#include <iostream>
#include<string>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        string s,temp1,temp2;
        cin>>s;
        for(int j = 0; j < s.size(); j++)
        {
            if(j % 2 == 0)
            {
                temp1 += s[j];
            }
            else
            {
                temp2 += s[j];
            }
        }
        cout << temp1 << " " << temp2 << endl;
    }
    return 0;
}
