#include <iostream>
using namespace std;
float series(int n, float sum=0.0, int i=1) {
    if (i<=n) {
        sum+=float(1)/(i*(i+2));
        return series(n,sum,i+1);
    }
    return sum;
}
int main() {
    int num;
    cin>>num;
    cout<<series(num)<<endl;
}