#include <iostream>
using namespace std;
void reverse(int arr[], int n){
    int s = 0;
    int e = n -1 ;
    while(s <= e){
        swap(arr[s],arr[e]);
        s++;
        e--;
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
    reverse(arr,n);
    printArray(arr, n);
}