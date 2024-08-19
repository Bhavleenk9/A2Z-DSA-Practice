// This is the code for Move Zeros to end.
// Leetcode 283. Move Zeros.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
vector <int> movezeros(vector <int> &arr, int n)
{
    vector <int> temp;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for(int i=0; i<nz; i++)
    {
        arr[i] = temp[i];
    }
    for(int i=nz; i<n; i++)
    {
        arr[i] = 0;
    }
    return arr;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    movezeros(arr,n);
    cout<<"Array after moving all the zeros to the end: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
} */

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
vector <int> movezeros(vector <int> &arr, int n)
{
    int j = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if(j == -1) return arr;
    for(int i=j+1; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    movezeros(arr,n);
    cout<<"Array after moving all the zeros to the end: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

