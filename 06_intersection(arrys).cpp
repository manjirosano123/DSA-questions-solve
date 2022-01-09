#include <iostream>
using namespace std;
void alternate(int arr[],int brr[],int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i]>=brr[j]){
                if(arr[i]==brr[j]){
                    cout<<arr[i]<<" ";
                    brr[j] = -10000000;
                    break;
                }
            }
            
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
    int m ;
    cin >> m;
    int arr[n];
    int brr[m];
    input(arr, n);
    input2(brr,m);
    alternate(arr,brr,n,m);
}