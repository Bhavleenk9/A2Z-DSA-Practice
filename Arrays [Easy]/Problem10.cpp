// This is the code for Find missing number in an array.
// Leetcode 268. Missing Number

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int missingnumber(int arr[], int N)
{
    int flag;
    for(int i=1; i<=N; i++)
    {
        flag = 0;
        for(int j=0; j<N-1; j++)
        {
            if(arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            return i;
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
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"The missing number in this Array is: "<<missingnumber(arr,n);
    return 0;
} */

// Better approach.
/* include<bits/stdc++.h>
using namespace std;
int missingnumber(int arr[], int N)
{
    int hash[N+1] = {0};
    for(int i=0; i<N-1; i++)
    {
        hash[arr[i]] = 1;
    }
    for(int j=1; j<N; j++)
    {
        if(hash[j] == 0)
        {
            return j;
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
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"The missing number in this Array is: "<<missingnumber(arr,n);
    return 0;
} */

// Optimal approach 1 (Using Sum).
/* #include<bits/stdc++.h>
using namespace std;
int missingnumber(int arr[], int N)
{
    int totalsum = N*(N+1)/2;
    int arrsum = 0;
    for(int i=0; i<N-1; i++)
    {
        arrsum += arr[i];
    }
    int missingnum = totalsum - arrsum;
    return missingnum;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"The missing number in this Array is: "<<missingnumber(arr,n);
    return 0;
} */

// Optimal approach 2 (Using XOR).
/* #include<bits/stdc++.h>
using namespace std;
int missingnumber(int arr[], int N)
{
    int XOR1 = 0;
    for(int i=1; i<=N; i++)
    {
        XOR1 = XOR1 ^ i;
    }
    int XOR2 = 0;
    for(int j=0; j<N-1; j++)
    {
        XOR2 = XOR2 ^ arr[j];
    }
    return XOR1^XOR2;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"The missing number in this Array is: "<<missingnumber(arr,n);
    return 0;
} */

// MOST Optimal approach.
#include<bits/stdc++.h>
using namespace std;
int missingnumber(int arr[], int N)
{
    int XOR1 = 0;
    int XOR2 = 0;
    for(int i=0; i<N-1; i++)
    {
        XOR2 = XOR2 ^ arr[i];
        XOR1 = XOR1 ^ (i+1);
    }
    XOR1 = XOR1 ^ N;
    return XOR1^XOR2;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"The missing number in this Array is: "<<missingnumber(arr,n);
    return 0;
} 
