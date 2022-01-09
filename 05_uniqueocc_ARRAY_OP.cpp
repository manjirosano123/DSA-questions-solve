#include <iostream>
using namespace std;
int uniqueocc(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    } return ans;
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
    cout<<uniqueocc(arr,n)<<endl;
}