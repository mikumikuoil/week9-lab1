#include <iostream>
using namespace std;
int powa(int n, int p, int i=1, int total=1) {
    if (i<=p) {
        total=total*n;
        return powa(n, p, i+1,total);
    }
    else if (p==0) {
        return 1;
    }
    return total;
}
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int p;
    cout<<"Enter power: ";
    cin>>p;
    cout<<powa(n,p);
}