#include <iostream>
using namespace std;
void alternate(int arr[], int brr[], int n, int m)
{
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr[i] == brr[j])
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
        else if (arr[i] > brr[j])
        {
            j++;
        }
        else 
        {
            i++;
        }
    }
}
void input2(int brr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
}
void input(int arr[], int n)
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
    int m;
    cin >> m;
    int arr[n];
    int brr[m];
    input(arr, n);
    input2(brr, m);
    alternate(arr, brr, n, m);
}