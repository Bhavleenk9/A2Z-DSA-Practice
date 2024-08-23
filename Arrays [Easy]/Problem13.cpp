// This is the code for Longest subarray with given sum K (positives).

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int subarray(int arr[], int K, int n)
{
    int len = 0;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=i; j<n; j++)
        {
            sum += arr[j];
            if(sum == K)
            {
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}
int main()
{
    int n,K;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum whose subarray length is to be found: ";
    cin>>K;
    cout<<"The longest subarray with sum "<<K<<" in this Array is: "<<subarray(arr,K,n);
    return 0;
} */

// Better approach.
/* #include<bits/stdc++.h>
using namespace std;
int subarray(int arr[], int K, int n)
{
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum == K)
        {
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - K;
        if(preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
int main()
{
    int n,K;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum whose subarray length is to be found: ";
    cin>>K;
    cout<<"The longest subarray with sum "<<K<<" in this Array is: "<<subarray(arr,K,n);
    return 0;
} */

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
int subarray(int arr[], int K, int n)
{
    int left = 0, right = 0;
    int sum = arr[0];
    int maxLen = 0;
    while(right < n)
    {
        while(left <= right && sum > K)
        {
            sum -= arr[left];
            left++;
        }
        if(sum == K) 
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    return maxLen;
}
int main()
{
    int n,K;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum whose subarray length is to be found: ";
    cin>>K;
    cout<<"The longest subarray with sum "<<K<<" in this Array is: "<<subarray(arr,K,n);
    return 0;
}
