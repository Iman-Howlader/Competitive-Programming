#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>& arr, int m)
{
    int start = m - 1;
    int end = arr.size() - 1;
    while (start < end)
    {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
}
int main()
{
    //int n = 5;
    int m = 3;
    vector<int> a = {1, 2, 3, 4, 5, 6};
    reverseArray(a, m);
}