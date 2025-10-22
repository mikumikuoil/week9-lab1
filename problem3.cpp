#include <iostream>
using namespace std;
int summ(int n, int x=1, int total=0) {
    if (x<=n) {
        total += x;
        return summ(n, x+1, total);
    }
    return total;
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<summ(num);

}