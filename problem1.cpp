#include <iostream>
using namespace std;
void rec_num(int x) {
    if (x>=0) {
        cout << x <<endl;
        rec_num(x-1);
    }
}
int main() {
    rec_num(10);
}