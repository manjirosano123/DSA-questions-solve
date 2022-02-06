#include<iostream>
using namespace std;
int minimum2(int arr[] , int n){
    int s = 0;
    int e = n - 1;
    while(s < e){
        int mid = s + (e - s)/2;
        if(arr[mid]>=arr[s]){
            if(arr[s]<arr[e]){
                e = mid;
            }
            else{
                s = mid + 1;
            }
        }
        else if(arr[mid]<=arr[e]){
            if(arr[mid] < arr[e]){
                e = mid;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            e--;
        }
    }return s;   
}
void input( int arr[] , int n){
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr , n);
    cout<<minimum2(arr , n );
}