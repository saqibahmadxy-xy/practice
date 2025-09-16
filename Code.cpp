#include <bits/stdc++.h>
using namespace std;
int findMissing(vector<int> &arr)
{
    int missing = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        
        missing ^= (i + 1);
        missing ^= arr[i];
    }
    return missing;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n-1);
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    cout<<(findMissing(arr)^n);
}