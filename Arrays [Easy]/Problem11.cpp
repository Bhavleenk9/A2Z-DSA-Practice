// This is the code for Maximum Consecutive Ones.
// Leetcode 485. Max Consecutive Ones.

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(int arr[], int n)
{
    int maxcnt = 0;
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)
        {
            count++;
            maxcnt = max(maxcnt, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxcnt;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array (0's and 1's): ";
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum number of consecutive ones in this Array is: "<<maxConsecutiveOnes(arr,n);
    return 0;
}

