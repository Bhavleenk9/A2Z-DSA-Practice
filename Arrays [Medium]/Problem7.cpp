// This is the code for Rearrange the array in alternating positive and negative items.
// Leetcode 2149. Rearrange Array Elements by Sign.

// Variety-1.
// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
vector <int> rearrange(vector <int> arr, int n)
{
    vector <int> pos;
    vector <int> neg;
    for(int i=0; i<n; i++)
    {
        if(arr[i] >= 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    for(int i=0; i<n/2; i++)
    {
        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];
    }
    return arr;
}
int main()
{
    int n;
    cout<<"Enter the size (even) of array: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the equal number of positive and negative integers: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector <int> ans;
    ans = rearrange(arr,n);
    cout<<"The rearranged array by sign is : ";
    for(int i=0; i<n; i++)
    {
        cout<<ans[i];
        cout<<" ";
    }
    return 0;
} */

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
vector <int> rearrange(vector <int> arr, int n)
{
    int posInd = 0, negInd = 1;
    vector <int> ans(n);
    for(int i=0; i<n; i++)
    {
        if(arr[i] >= 0)
        {
            ans[posInd] = arr[i];
            posInd += 2;
        }
        else
        {
            ans[negInd] = arr[i];
            negInd += 2;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the size (even) of array: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the equal number of positive and negative integers: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector <int> ans;
    ans = rearrange(arr,n);
    cout<<"The rearranged array by sign is : ";
    for(int i=0; i<n; i++)
    {
        cout<<ans[i];
        cout<<" ";
    }
    return 0;
} 

// Variety-2.
// Optimal approach.
/* #include<bits/stdc++.h>
using namespace std;
vector <int> rearrange(vector <int> arr, int n)
{
    vector <int> pos;
    vector <int> neg;
    for(int i=0; i<n; i++)
    {
        if(arr[i] >= 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    if(pos.size() < neg.size())
    {
        for(int i=0; i<pos.size(); i++)
        {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = pos.size()*2;
        for(int i = pos.size(); i<neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }
    else
    {
        for(int i=0; i<neg.size(); i++)
        {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i = neg.size(); i<pos.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }
    return arr;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter positive and negative integers: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector <int> ans;
    ans = rearrange(arr,n);
    cout<<"The rearranged array by sign is : ";
    for(int i=0; i<n; i++)
    {
        cout<<ans[i];
        cout<<" ";
    }
    return 0;
} */
