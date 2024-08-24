// This is the code for 2Sum Problem.
// Leetcode 1. Two Sum.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
string twosum(int arr[], int n, int target)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                return "YES"; // return {i,j};
            }
        }
    }
    return "NO"; // return {-1,-1};
}
int main()
{
    int n, target;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target whose sum pair is to be found: ";
    cin>>target;
    cout<<"The answer if pair of elements equal to target exists is: "<<twosum(arr,n,target);
    return 0;
} */

// Better approach and Optimal approach (for O/P as indexes).
/* #include<bits/stdc++.h>
using namespace std;
string twosum(int arr[], int n, int target)
{
    map<int,int> mpp;
    for(int i=0; i<n; i++)
    {
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end())
        {
            return "YES"; // return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return "NO"; // return {-1,-1};
}
int main()
{
    int n, target;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target whose sum pair is to be found: ";
    cin>>target;
    cout<<"The answer if pair of elements equal to target exists is: "<<twosum(arr,n,target);
    return 0;
} */

// Optimal approach (for O/P as string).
#include<bits/stdc++.h>
using namespace std;
string twosum(vector <int> &arr, int n, int target)
{ 
    int left = 0, right = n-1;
    sort(arr.begin(), arr.end());
    while(left < right)
    {
        int sum = arr[left] + arr[right];
        if(sum = target)
        return "YES";
        else if(sum > target)
        right--;
        else if(sum < target)
        left++;
    }
    return "NO";
}
int main()
{
    int n, target;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target whose sum pair is to be found: ";
    cin>>target;
    cout<<"The answer if pair of elements equal to target exists is: "<<twosum(arr,n,target);
    return 0;
}
