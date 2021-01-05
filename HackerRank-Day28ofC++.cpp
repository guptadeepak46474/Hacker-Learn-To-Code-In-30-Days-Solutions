#include<iostream>
#include<vector>
#include<string>
#include<regex>
using namespace std;

int main()
{
    int n;    // n for Numbers of Rows
    cin>>n;

    regex e(".+@gmail\\.com$");

    vector<string> arr;

    for(int i = 0; i < n; i++)
    {
        string firstName;
        string email;
        cin >> firstName >> email;

        if(regex_match(email,e))
        {
            arr.push_back(firstName);
        }
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}

// Another Method

// int main()
// {
//     int n;  // n for Number of Rows
//     cin>>n;
//     regex e(".+@gmail\\.com$");
//     multiset<string> db;

//     for(int i = 0; i < n; i++)
//     {
//         string firstName;
//         string email;
//         cin >> firstName >> email;

//         if(regex_match(email,e))
//         {
//             db.insert(firstName);
//         }
//     }
//     for(auto it : db)
//     {
//         cout<<it<<endl;
//     }
//     return 0;
// }