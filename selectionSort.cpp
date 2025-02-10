#include<iostream>
using namespace std;

void selectionSort(int* arr,int size){
    int swap;
    for(int left=0;left<size;left++){
        int temp=left;
        for(int i=left;i<size;i++){
            if(arr[i]<arr[temp]){
                temp=i;
            }
        }
        swap=arr[temp];
        arr[temp]=arr[left];
        arr[left]=swap;
    }
}

void preety_print(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int n=10;
    int arr[n]={-1,5,6,2,-7,3,1,0,-18,225};
    cout<<"\nBefore Sorting";
    preety_print(arr,n);
    selectionSort(arr,n);
    cout<<"\nAfter Sorting";
    preety_print(arr,n);
    return 0;
}