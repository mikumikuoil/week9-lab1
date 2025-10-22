#include <iostream>
using namespace std;
void natural(int x, int i=1) {
    if(i<=x) {
        cout<<i<<" ";
        natural(x,i+1);
    }
}
int main() {
    natural(50);
}