// This is the code for Majority Element (>n/2 times).
// Leetcode 169. Majority Element.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int majorityele(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if(cnt > (n/2))
        return arr[i];
    }
    return -1;
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
    cout<<"The majority element of the array is: "<<majorityele(arr,n);
    return 0;
} */

// Better approach.
/* #include<bits/stdc++.h>
using namespace std;
int majorityele(int arr[], int n)
{
    map<int,int> mpp;
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp)
    {
        if(it.second > (n/2))
        {
            return it.first;
        }
    }
    return -1;
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
    cout<<"The majority element of the array is: "<<majorityele(arr,n);
    return 0;
} */

// Optimal approach (Moore’s Voting Algorithm).
#include<bits/stdc++.h>
using namespace std;
int majorityele(int arr[], int n)
{
    int cnt = 0;
    int ele;
    for(int i=0; i<n; i++)
    {
        if(cnt == 0)
        {
            cnt = 1;
            ele = arr[i];
        }
        else if(arr[i] == ele)
        {
            cnt++;
        }
        else 
        {
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == ele) 
        cnt1++;
    }
    if(cnt1 > (n/2))
    {
        return ele;
    }
    return -1;
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
    cout<<"The majority element of the array is: "<<majorityele(arr,n);
    return 0;
}
