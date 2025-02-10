#include<iostream>
using namespace std;
void preety_print(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
int interpolationSearch(int* arr,int size,int search){
    int low=0,high=size-1;
    int probe=(high-low)/2+low;
    while(search>=arr[low]&&search<=arr[high]&&low<=high){
        probe=low+(((high-low)*(search-arr[low]))/(arr[high]-arr[low]));
        if(arr[probe]==search){return probe;}
        else if(search<arr[probe]){
            high=probe-1;
            continue;
        }
        low=probe+1;
    }
    return -1;
}
int main(){
    int n=10,res;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    int search =6;
    res=interpolationSearch(arr,n,search);
    if(res<0){cout<<"NOT FOUND";}
    else{
        cout<<"Found at index: "<<res;
    }
}