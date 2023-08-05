#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int key,int l,int h){
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(key>a[mid]){
            l=mid+1;
            
        }
        else if(key<a[mid]){
            h=mid-1;
            
        }

    }
    return -1;

}   

int main(){
    int a[]={1,2,3,4,23,25,29};

    int key=9;
   
    int index =binarySearch(a,key,0,7);
    if(index!=-1)cout<<index;else cout<<"not Found";
}