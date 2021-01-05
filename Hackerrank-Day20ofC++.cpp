// #include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
  for(int num = 0; num < n; num++){
    	cin >> arr[num];
    }
    // Write Your Code Here
    int numberofSwaps = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                numberofSwaps++;
            }
        }
        // If no elements were swapped during a traversal, array is sorted
        if(numberofSwaps == 0)
        {
            break;
        }
    }
    cout<<"Array is sorted in "<<numberofSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Last Element: "<<arr[n-1]<<endl;
    return 0;
}

/* Another Method 
   for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j-1]);
                numberofSwaps++;
            }
        }
        // If no elements were swapped during a traversal, array is sorted
        if(numberofSwaps == 0)
        {
            break;
        }
    }
*/