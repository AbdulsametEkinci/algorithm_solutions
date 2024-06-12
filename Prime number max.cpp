//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;
    int a = pow(N, 1.0/5.0);
    long long prime_ctr = 0;
    
    if(N<32){
      cout << "0";
    }else if(32 <= N && N < 64){
      cout << "1";
    }else if ( 64 <= N && N< 243 ){
      cout << "2";
    }else if(243<=N && N<486){
      cout << "3";
    }else if(486 <= N && N < 729){
      cout << "4";
    }else if(729 <= N && N< 3125){
      cout << "5";
      
    }
    else{
        
    for(int k = 5; k <= a; k++ ){
    bool is_prime = true;
    for(int i = 2; i <= sqrt(k); i++){
      if(k % i == 0){
        is_prime = false;
        break;
      } 
    
    }
    if (is_prime){
     for(int i = 1; i <= k; i++){
          if(i*pow(k,5) <= N){
            prime_ctr++;
          }
        }
    }
    }
    cout << prime_ctr + 5;
    
    }
}
