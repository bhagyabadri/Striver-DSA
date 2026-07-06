#include<bits/stdc++.h>
using namespace std;
bool checkArr(vector<int> &arr)
{
    int i,j;
    for(i=0;i<arr.size();i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> array =  {1,2,3,4,5};
    cout << boolalpha << checkArr(array);
}