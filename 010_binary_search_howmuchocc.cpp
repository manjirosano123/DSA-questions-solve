#include<iostream>
using namespace std;
int binarysearch1(int arr[] , int n , int target){
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while( s <= e){
        int mid = s + ( e - s)/2;
        if(arr[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if( arr[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid = 1;
        }
    }return ans;
}
int binarysearch2(int arr[] , int n , int target){
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while( s <= e){
        int mid = s + ( e - s)/2;
        if(arr[mid] == target){
            ans = mid;
            s = mid + 1;
        }
        else if( arr[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid = 1;
        }
    }return ans;
}
void input(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    input(arr,n);
    int a = binarysearch1(arr,n,target);
    int b = binarysearch2(arr,n,target);
    cout<<(b-a)+1<<" "<<endl;
}