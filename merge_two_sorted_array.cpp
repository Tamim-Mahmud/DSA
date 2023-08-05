#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int b[],int l1,int l2){
    int i=0,j=0,k=0;
    
    int c[l1+l2];

    while(i<=l1 && j<=l2){
        if(a[i]>b[j]){
            c[k]=b[j];
            k++;j++;
        }
        else if(a[i]<b[j]){
            c[k]=a[i];
            k++;i++;
        }
    }
    while(i<=l1){
        c[k]=a[i];k++;i++;
    }
    while(j<=l2){
        c[k]=b[j];k++;j++;
    }
    for(int i=0;i<l1+l2;i++){
        cout<<c[i]<<" ";
    }

}
int main(){
    int a[]={1,2,8,10,30};
    int b[]={3,5,6,14,34};

    sort(a,b,5,5);
}