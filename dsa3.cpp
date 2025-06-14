// #include <iostream>

// int main() {
//     int a= 1;//char take only first character
//     std::cout << a/2;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
    
//     return 0;
// }

#include <iostream>
using namespace std;

bool func(int a){
    if (a&1){
        return 0;
    }
    else{
        return 1;
    }
}
    
int main() {
    //check number is even or odd
    //compiler decimal ko binary mein convert krke hi operation krti hai tho operation do as binary ke uper kr rhe ho
    int b;
    int a;
    cin>>a;
    b=func(a);
    cout<<"about number : "<<b<<endl;
    return 0;
}