#include <iostream>
#include <cmath>

using namespace std;

long long n;

int fn_dev(long long n){
    int sum = 0,cur,pos;
    int ar_n[10] = {0,0,0,0,0,0,0,0,0,0};
    pos = floor(log10(n));
    for(int i = 0; i <= pos; i++){
        cur = n / (long long)pow(10, i);
        ar_n[cur] += 1;
    }
    for(int i = 1; i < 10; i++) sum = sum + i * i * ar_n[i];
    return sum;
}

int main(){
    cin >> n;
    cout << fn_dev(n);
    return 0;
}