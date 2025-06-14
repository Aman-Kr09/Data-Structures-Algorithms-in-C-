//swap alternate in array

#include <iostream>
using namespace std;

int funswap(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if (i+1<size){   //this if we apply here because last element ko touch hi nhi krna
        swap(arr[i],arr[i+1]);
        }   
    }
}

int main() {
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    funswap(arr,size);
    cout<<"this is our final swaped alternate array output"<<" : "<<endl; 
    for(int i=0;i<size;i++){//and you can make another fuction for printing too
        cout<<arr[i]<<"";
    }
    return 0;
}