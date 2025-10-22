#include <iostream>
#include <string>
using namespace std;
int digsum(int n, int i=0, int sum=0) {
    string s=to_string(n);
    if (i<s.length()) {
        sum+=s[i]-'0';
        return digsum(n,i+1,sum);
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    cout<<digsum(n)<<endl;
}