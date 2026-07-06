#include<bits/stdc++.h>
using namespace std;
bool checkArr(vector<int> &arr)
{
    int i,j;
    for(i=0;i<arr.size();i++)
    {
        for (int j = i + 1; j < arr.size(); j++) {
            // If any element is smaller than the previous one, return false
            if (arr[j] < arr[i]) 
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