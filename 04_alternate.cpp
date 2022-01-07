#include <iostream>
using namespace std;
void alternate(int arr[], int n){
    int s = 0;
    int e = s + 1;
    while(s < n){
        swap(arr[s],arr[e]);
        s = s + 2;
        e = s + 1;
    }
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
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
    alternate(arr,n);
    printArray(arr, n);
}