#include<iostream>
using namespace std;
int firstocc(int arr[], int n , int key){
    int s = 0;
    int e = n - 1;
    int ans = 0;
    while(s <= e){
        int mid = s + ( e - s)/ 2;
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1 ;
        }
        else if( arr[mid] > key){
            e = mid - 1;
        }
    } return ans;
}
int lastocc(int arr[], int n , int key){
    int s = 0;
    int e = n - 1;
    int ans = 0;
    while(s <= e){
        int mid = s + ( e - s)/ 2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid + 1 ;
        }
        else if( arr[mid] > key){
            e = mid - 1;
        }
    } return ans;   
}
    
void INPUT(int arr[],int n){
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
}
int main(){
    int n;
    cin>>n;
    int key ;
    cin >> key ;
    int arr[n];
    INPUT(arr,n);
    cout<<firstocc(arr,n,key)<<endl;
    cout<<lastocc(arr,n,key)<<endl;
}