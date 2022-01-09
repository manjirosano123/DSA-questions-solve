#include <iostream>
using namespace std;
void findALLduplicates(int arr[], int n){
    int i = 0;
    while(i < n){
        if(arr[i] == arr[i + 1]){
            cout<<arr[i]<<" ";
            i++;
        }
        else if( arr[i] < arr[i + 1]){
            i++;
        }
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
    int arr[n];
    input(arr, n);
    findALLduplicates(arr,n);
}