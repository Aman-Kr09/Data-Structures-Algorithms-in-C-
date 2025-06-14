#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str="aman";
    stack<char> stk;
    for (int i=0;i<str.length();i++){
        char ch=str[i];
        stk.push(ch);
    }
    string ans ="";
    while(!stk.empty()){
        char stktop = stk.top();
        ans.push_back(stktop);
        stk.pop();
    }
    cout<<"reverse stack is : "<<ans;
    return 0;
}








