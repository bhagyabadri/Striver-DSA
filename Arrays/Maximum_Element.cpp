#include<bits/stdc++.h>
using namespace std;
int sortArr(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];    
}
int main()
{
    vector<int> arr1 = {30,40,50,100};
    vector<int> arr2 = {20,44,12,15};
    cout << "Maximum Element in array1:" << sortArr(arr1) << endl;
    cout << "Maximum Element in array2:" << sortArr(arr2);
}