#include <iostream>
#include <cmath>

using namespace std;

long long n;
bool ar_b[1000][2];

int fn_dev(long long n){
    int sum = 0,cur,pos;
    int ar_n[10] = {0,0,0,0,0,0,0,0,0,0};
    pos = floor(log10(n));
    for(int i = pos; i >= 0; i--){
        cur = n / (long long)pow(10, i);
        ar_n[cur]++;
        n = n % (long long)pow(10,i);
    }
    for(int i = 1; i < 10; i++) sum = sum + i * i * ar_n[i];
    return sum;
}
bool fn_happy(int n){
    if (ar_b[n][1]) return 1;
    ar_b[n][1] = 1;
    if(fn_dev(n) == 1) return 0;
    else return fn_happy(fn_dev(n));
}

int main(){
    for(int i = 1; i < 1000; i++) ar_b[i][0] = fn_happy(i);
    cin >> n;
    if(!ar_b[(int)n - 1][0]) cout << "true";
    else cout << "false";
    return 0;
}