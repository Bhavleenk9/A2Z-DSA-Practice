// This is the code for Second Largest Element in an Array without sorting.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int secondlargest(vector <int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    int largest = arr[n-1];
    int slargest = INT_MIN;
    for(int i=n-2; i>=0; i--)
    {
        if(arr[i] != largest)
        {
            slargest = arr[i];
            break;
        }
    }
    return slargest;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The second largest element in the Array is: "<<secondlargest(arr,n);
    return 0;
} */

// Better approach.
/* #include<bits/stdc++.h>
using namespace std;
int secondlargest(vector <int> &arr, int n)
{
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    for(int j=0; j<n; j++)
    {
        if(arr[j] > slargest && arr[j] < largest)
        {
            slargest = arr[j];
        }
    }
    return slargest;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The second largest element in the Array is: "<<secondlargest(arr,n);
    return 0;
} */

// Optimal approach.
// This is the code for Second Largest Element and Second Smallest Element in an Array without sorting.
#include<bits/stdc++.h>
using namespace std;
vector <int> second(vector <int> &arr, int n)
{
    int largest = INT_MIN;
    int Slargest = INT_MIN;
    int smallest = INT_MAX;
    int Ssmallest = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            Slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > Slargest && arr[i] != largest)
        {
            Slargest = arr[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] < smallest)
        {
            Ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < Ssmallest && arr[i] != smallest)
        {
            Ssmallest = arr[i];
        }
    }
    return {Slargest,Ssmallest};
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector<int> result = second(arr,n);
    cout<<"The second largest element is "<<result[0]<<" and second smallest element is "<<result[1]<<" in the array";
    return 0;
} 
