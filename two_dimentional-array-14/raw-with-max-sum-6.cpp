#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int r=3;
    int c=3;
    int maxsum=0;
    int maxraw=0;
    int rawsum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           rawsum=rawsum+arr[i][j];
        }
        if(rawsum>maxsum){
            maxsum=maxraw;
             maxraw=i;
    }
    }
    cout<<maxraw;
}