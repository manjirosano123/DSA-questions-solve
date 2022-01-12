#include<iostream>
using namespace std;
void printing(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
}
void sorting(int arr[], int n){
    int s = 0;
    int e = n -1 ;
    while(s < e){
        while((arr[s] == 1 && arr[e] == 0) && s < e ){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        while(arr[s] == 0 ){
            s++;
        }
        while(arr[e] == 1){
            e--;
        }
    }
}
void input(int arr[],int n){
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
}
int main(){
    int n;
    cin >>n;
    int arr[n];
    input(arr,n);
    sorting(arr,n);
    printing(arr,n);
}