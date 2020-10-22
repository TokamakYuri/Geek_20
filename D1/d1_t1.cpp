#include <iostream>

using namespace std;

int n;
unsigned long long fib[100];

int main(){
	cin >> n;
	fib[1] = fib[2] = 1;
	for(int i = 3; i < 100; i++) fib[i] = fib[i - 1] + fib[i - 2];
	cout << fib[n];
	return 0;
}