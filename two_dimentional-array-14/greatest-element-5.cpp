#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int r=3;
    int c=3;
    int max=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
}