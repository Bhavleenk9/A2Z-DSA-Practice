// This is the code for finding Largest Element in an Array.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int largestElement(vector <int> &arr, int n)
{
    sort(arr.begin(),arr.end());
    return arr[n-1];
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
    cout<<"Largest elment in the Array is "<<largestElement(arr,n)<<endl;
    return 0;
} */

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
int largestElement(vector <int> &arr, int n)
{
    int largest = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
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
    cout<<"Largest elment in the Array is "<<largestElement(arr,n)<<endl;
    return 0;
}
