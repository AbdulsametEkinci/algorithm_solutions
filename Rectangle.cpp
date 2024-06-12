//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>

using namespace std;

int main() {
int n;
cin >> n;
int ctr = 0;
for (int i = 1; i <= sqrt(n); i++){
for (int j = i; j <= n/i; j++){
    if(i*j <= n){ctr++;}
}
}cout << ctr;
	return 0;
}
