// This is the code for Sort an array of 0's 1's and 2's.
// Leetcode 75. Sort Colors.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
void mergeArrays(int arr[], int low, int mid, int high);
int sort012(int arr[], int low, int high)
{
    if(low >= high) return 0;
    int mid = (low+high)/2;
    sort012(arr,low,mid);
    sort012(arr,mid+1,high);
    mergeArrays(arr,low,mid,high);
    return 0;
}
void mergeArrays(int arr[], int low, int mid, int high)
{
    vector <int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++)
    {
        arr[i] = temp[i-low];
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array you want to sort: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array (0s, 1s and 2s): ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort012(arr,0,n-1);
    cout<<"Array after sorting is as follows: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
} */

// Better approach.
/* #include<bits/stdc++.h>
using namespace std;
int sort012(int arr[], int n)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    for(int i=0; i<cnt0; i++)
    {
        arr[i] = 0;
    }
    for(int i=cnt0; i<cnt0+cnt1; i++)
    {
        arr[i] = 1;
    }
    for(int i=cnt0+cnt1; i<n; i++)
    {
        arr[i] = 2;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array you want to sort: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array (0s, 1s and 2s): ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort012(arr,n);
    cout<<"Array after sorting is as follows: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
} */

// Optimal approach (Dutch National Flag Algorithm).
#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{ 
    int low = 0, mid = 0, high = n-1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array you want to sort: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array (0s, 1s and 2s): ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort012(arr,n);
    cout<<"Array after sorting is as follows: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
} 
