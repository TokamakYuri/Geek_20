#include <iostream>
#include <cmath>

using namespace std;

int pos,n;

int fn_dev(int n, int pos){
    int ar_n[10],sum,cur;
    for(int i = 0; i <= pos; i++){
        cur = n / (int)pow(10, i);
        ar_n[cur] += 1;
    }
    for(int i = 1; i < 10; i++) sum = sum + i * i * ar_n[i];
    return sum;
}

int main(){
    cin >> n;
    pos = floor(log10(n));
    cout << fn_dev(n, pos);
    return 0;
}