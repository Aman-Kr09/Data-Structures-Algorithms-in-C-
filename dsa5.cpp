//intersecton of array
//we can take input also of array

#include <iostream>
using namespace std;

int its(int arr1[],int arr2[],int size){
    for (int i=0;i<size;i++){
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";//and map krne ke baad value bhi change kr do so kisi or se map na ho
            }
            
        }
        
        
    }
}

int main() {
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={4,5,6,7,8};
    int size=5;
    cout<<"this is intersection of output"<<endl;
    its(arr1,arr2,size);
    return 0;
}
