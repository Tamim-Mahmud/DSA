#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int l){
    if(l<0)return 0;
    else return sum(a,l-1)+a[l];
}
int main(){
    int a[]={1,2,3,4,5};

    cout<<sum(a,4);
}