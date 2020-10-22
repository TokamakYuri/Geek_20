#include<iostream>
#include<cstdio>

using namespace std;

int ar_con[10];
char ch;

int main(){
    while((ch = getchar()) >= 32) if (ch >= '0' && ch <= '9') ar_con[ch - '0']++;
    for (int i = 0; i < 10; i++) if (ar_con[i]) cout << i;
    return 0;
}