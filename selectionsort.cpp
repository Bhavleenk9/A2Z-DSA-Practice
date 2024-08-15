// This is the code for sorting an array using Selection Sort. 
#include<iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_idx = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array you want to sort: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout<<"Array after sorting is as follows: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
