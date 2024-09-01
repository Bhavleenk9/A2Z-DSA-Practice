// This is the code for Stock Buy And Sell. 
// Leetcode 121. Best Time to Buy and Sell Stock.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int maxprofit(int arr[], int n)
{
    int maxProfit = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            maxProfit = max(maxProfit, arr[j] - arr[i]);
        }
    }
    return maxProfit;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter price of stock for consecutive days in the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum profit is : "<<maxprofit(arr,n);
    return 0;
} */

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
int maxprofit(int arr[], int n)
{
    int maxProfit = INT_MIN;
    int mini = arr[0];
    for(int i=0; i<n; i++)
    {
        mini = min(mini, arr[i]);
        maxProfit = max(maxProfit, arr[i] - mini);
    }
    return maxProfit;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter price of stock for consecutive days in the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum profit is : "<<maxprofit(arr,n);
    return 0;
}
