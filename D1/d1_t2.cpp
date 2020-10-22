#include <iostream>

using namespace std;

int n;
long long sum;

int main(){
    cin >> n;
    while(n--) sum = (sum + 1) * 2;
    cout << sum;
    return 0;
}