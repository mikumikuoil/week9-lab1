#include <iostream>
using namespace std;
int factorial(int n, int i=1, int total=1){
    if (i<=n) {
        total*=i;
        return factorial(n, i+1, total);
    }
    else if (n==0) {
        return 1;
    }
    return total;
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<factorial(num);
}