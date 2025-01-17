#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int arr[10];
    for( int i =0;i<10;i++){ // add contents for the array
        arr[i]=i;
    }
    for( int i =0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
    // head to point at begining , mid to middle and tail to end
    int head,tail, mid;
    head=0;
    tail=(sizeof(arr)/sizeof(int))-1; // get the length of the array and set tail as last index
    mid=tail/2 ;
    int search=8; // number to be searched
    int flag=0; // flag for error (0==not found)
    while(head<=tail){
        cout<<"\nhead: "<< head<<"mid: "<<mid << "tail: "<<tail;
        if(arr[mid]==search){ // if mid index element is the element print and break out of loop
            cout<<"\n"<<search<<" is on Index "<<mid;
            flag=1;
            break;
        }
        else if(arr[mid]<search){ // if element at mid is less than search set head to index one step forward of mid
            head=mid+1;
        }
        else if(arr[mid]>search){ // if element at mid is larger than search set tail to index one step lower of mid
            tail=mid-1;
        }
        else{
            // IDK for something that happened for some reasons i dont know?
            break;
        }
        mid=(tail-head)/2 + head; // set mid to Middle DUH
    }
    if(flag==0){
        cout<<"\n"<<search<<" Not FOUND"; // if not found / flag=0
    }
    return 0;
}