// This is the code for Find the Union (Sorted Arrays).

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
vector <int> unionsortedarray(vector <int> &a, vector <int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    set <int> set;
    for(int i=0; i<n1; i++)
    {
        set.insert(a[i]);
    }
    for(int i=0; i<n2; i++)
    {
        set.insert(b[i]);
    }
    vector <int> unionArr;
    for(auto it : set)
    {
        unionArr.push_back(it);
    }
    return unionArr;
}
int main()
{
    int n1, n2;
    cout<<"Enter the size of first and second Array: ";
    cin>>n1>>n2;
    vector <int> a(n1);
    vector <int> b(n2);
    cout<<"Enter the elements of first sorted Array: ";
    for(int i=0; i<n1; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of second sorted Array: ";
    for(int i=0; i<n2; i++)
    {
        cin>>b[i];
    }
    vector<int> result = unionsortedarray(a,b);
    cout<<"The union of 2 sorted Arrays is: ";
    for (int elem : result) {
        cout << elem << " ";
    }
    return 0;
} */

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
vector <int> unionsortedarray(vector <int> &a, vector <int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector <int> unionArr;
    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            if(unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if(unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1)
    {
        if(unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }
    while(j<n2)
    {
        if(unionArr.size() == 0 || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }
    return unionArr;
}
int main()
{
    int n1, n2;
    cout<<"Enter the size of first and second Array: ";
    cin>>n1>>n2;
    vector <int> a(n1);
    vector <int> b(n2);
    cout<<"Enter the elements of first sorted Array: ";
    for(int i=0; i<n1; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of second sorted Array: ";
    for(int i=0; i<n2; i++)
    {
        cin>>b[i];
    }
    vector<int> result = unionsortedarray(a,b);
    cout<<"The union of 2 sorted Arrays is: ";
    for (int elem : result) {
        cout << elem << " ";
    }
    return 0;
}
