#include <iostream>
#include <cmath>

using namespace std;

struct nnum{
    bool isHappy;
    bool isRep;
};

long long n;
nnum ar_b[1000];

//Calculate spr
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
// Judge is happy number
static bool fn_happy(int n){
    int temp = fn_dev(n);
    while(temp >= 1000) temp = fn_dev(temp);
    if (ar_b[temp].isRep) return 0;
    ar_b[temp].isRep = 1;
    if(fn_dev(temp) == 1) return 1;
    else return fn_happy(temp);
}

int main(){
    cin >> n;
    if(fn_happy(fn_dev(n))) cout << "true";
    else cout << "false";
    return 0;
}