// This is the code for Find the number that appears once, and other numbers twice.
// Leetcode 136. Single Number.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int singlenum(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int num = arr[i];
        int count = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[j] == num)
            {
                count++;
            }
        }
        if(count==1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array (all numbers twice, except one): ";
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"The single number in this Array is: "<<singlenum(arr,n);
    return 0;
} */

// Better approach (Using Hashing).
/* #include<bits/stdc++.h>
using namespace std;
int singlenum(int arr[], int n)
{
    int maxi = 0;
    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int hash[maxi+1] = {0};
    for(int i=0; i<n; i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(hash[arr[i]] == 1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array (all numbers twice, except one): ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The single number in this Array is: "<<singlenum(arr,n);
    return 0;
} */

// Better approach (Using Unordered Map).
/* #include<bits/stdc++.h>
using namespace std;
int singlenum(int arr[], int n)
{
    map<long long, int> mpp;
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp)
    {
        if(it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array (all numbers twice, except one): ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The single number in this Array is: "<<singlenum(arr,n);
    return 0;
} */

// Optimal approach.
/* #include<bits/stdc++.h>
using namespace std;
int singlenum(int arr[], int n)
{
    int XOR = 0;
    for(int i=0; i<n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    return XOR;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array (all numbers twice, except one): ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The single number in this Array is: "<<singlenum(arr,n);
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
int singlenum(int arr[], int n)
{
	int i=0;
    while(i<n)
    {
        if(arr[i]!=arr[i+1])
        {
            return arr[i];
        }
        if(arr[i]==arr[i+1])
        {
            i=i+1;
        }
        i++;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array (all numbers twice, except one): ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The single number in this Array is: "<<singlenum(arr,n);
    return 0;
}
