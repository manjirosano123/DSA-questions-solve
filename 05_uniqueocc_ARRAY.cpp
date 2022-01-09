#include <iostream>
using namespace std;
void uniqueocc(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }if (count == 1){
            cout<<arr[i]<<" ";
        }
        
        count = 0;
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
    uniqueocc(arr,n);
}