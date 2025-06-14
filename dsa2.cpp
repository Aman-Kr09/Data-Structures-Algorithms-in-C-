#include <iostream>
using namespace std;
int main() {
    int n=3;
    char al = 'A';
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char a=al+i-1;
            cout<<a<<" ";
            j++;

        }
        cout<<endl;
        i++;
        // char a = int(a)+1; this is wrong becoz than character take only first character
    }
    
    return 0;
}