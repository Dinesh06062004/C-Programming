#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a;
    cin>>a;
    int b=1;
    for(int i=1;i<=a;i++){
        int bfact=factorial(b);
        cout<<bfact<<endl;
        b++;
    }
}