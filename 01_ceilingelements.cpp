#include <iostream>
using namespace std;
int reverse(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return e;
}
void inputArrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n];
    inputArrays(arr, n);
    int binary = reverse(arr, n, key);
    cout << binary << endl;
}