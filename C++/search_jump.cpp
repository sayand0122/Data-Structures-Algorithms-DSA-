#include <iostream>
#include <cmath>
using namespace std;
int jumpSearch(int arr[], int x, int n)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;
    return -1;
}
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter sorted array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int x;
    cin>>x;
    int ans = jumpSearch(arr, x, n);
    cout << "Number " << x << " is at index " << ans;
    return 0;
}