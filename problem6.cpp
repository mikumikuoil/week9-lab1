#include <iostream>
#include <cmath>
using namespace std;
float series(int n, float sum=0.0, int i=1) {
    if (i<=n) {
        sum=sum+float(1)/pow(i, 2);
        return series(n, sum, i+1);
    }
    return float(sum);
}
int main() {
    int num;
    cin>>num;
    cout<<series(num)<<endl;
}