// This is the code for Kadane's Algorithm, maximum subarray sum.
// Leetcode 53. Maximum Subarray.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n)
{
    int maxi = INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = 0;
            for(int k=i; k<=j; k++)
            {
                sum = sum+arr[k];
            }
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum subarray sum is : "<<maxSubarraySum(arr,n);
    return 0;
} */

// Better approach.
/* #include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n)
{
    int maxi = INT_MIN;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=i; j<n; j++)
        {
            sum = sum+arr[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum subarray sum is : "<<maxSubarraySum(arr,n);
    return 0;
} */


// Optimal approach (Kadane's Algorithm).
#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, maxi = INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum > maxi)
        {
            maxi = sum;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    if(maxi < 0)
    {
        return 0;
    }
    return maxi;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum subarray sum is : "<<maxSubarraySum(arr,n);
    return 0;
} 

// Follow-up question.
// Print Maximum Sum Subarray. 
/* #include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, maxi = INT_MIN;
    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for(int i=0; i<n; i++)
    {
        if(sum == 0)
        {
            start = i;
        }
        sum += arr[i];
        if(sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "]n";
    return maxi;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum subarray sum is : "<<maxSubarraySum(arr,n);
    return 0;
} */
