#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i, n;
    bool isPrime = true;

    cin >> n;

    vector<int>arr(n);

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        // 0 and 1 are not prime numbers
        if (arr[i] == 0 || arr[i] == 1) {
            isPrime = false;
        }
        else {
            for (int j = 2; j <= sqrt(arr[i]); ++j) {
                if (arr[i] % j == 0) {
                    isPrime = false;
                    break;
                }
                isPrime = true;
            }
        }
        if (isPrime)
            cout <<"Prime"<<endl;
        else
            cout <<"Not prime"<<endl;
    }
    return 0;
}