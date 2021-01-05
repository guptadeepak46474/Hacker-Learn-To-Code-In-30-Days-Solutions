#include<iostream>
using namespace std;

int main()
{
    int t;  // t for number of test cases
    cin >> t;
    int n,k;
    for(int m = 0; m < t; m++)
    {
        int max = 0;
        cin >> n >> k;
        for(int i = 1; i < n; i++)
        {
            for(int j = i+1; j <= n; j++)
            {
                if( (i&j) > max && (i&j) < k )
                    max = (i&j);
            }
        }
        cout << max << endl;
    }
    return 0;
}

// int main()
// {
//     int t;
//     cin >> t;
//     int n,k;
//     for (int p = 0; p < t; ++p) {
//     int max = 0;
//     cin >> n >> k;
//     for (int i = 1; i < n; ++i) {
//         for (int j = i+1; j <= n; ++j) {
//         if ((i&j) > max && (i&j) < k) max = (i&j);
//         }
//     }
//     cout << max << '\n';
//     }

// }