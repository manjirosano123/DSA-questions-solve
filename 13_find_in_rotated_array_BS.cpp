#include<iostream>
using namespace std;
int find2(int arr[] , int n , int target){
    int s = 0;
    int e = n - 1;
    while(s <= e){
        int mid = s + (e - s)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid]>=arr[s]){
            if(target <= arr[mid] && target >= arr[s]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if(target >= arr[mid] && target <= arr[e]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    } return - 1;
}
void input( int arr[] , int n){
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    input(arr , n);
    cout<<find2(arr , n , target);
}
