#include<iostream>
using namespace std;
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int k=4;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}