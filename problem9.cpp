#include <iostream>
using namespace std;
int prod(int a, int b) {
    if (b == 0)
        return 0;
    if (b < 0)
        return -prod(a, -b);
    return a + prod(a, b - 1);
}
int main() {
    int x, y;
    cin >> x >> y;
    cout <<prod(x, y);
}
