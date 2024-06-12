//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>


using namespace std;

int main() {


    string str1;
    string str;
    cin >> str1;
    stack<char> duz;
   
    
    for (char ch : str1) {
        if (ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}') {
            str += ch;
        }
    }
        
    if (str.size() % 2 == 1){
        cout << "NO";
        return 0;
    }

    for(int i = 0; i < str.size() ; i++){

        if(str[i] == '('){
            duz.push(str[i]);
        }else if(!duz.empty() &&duz.top() == '(' && str[i] == ')'){
            duz.pop();            
        }
        else if(str[i] == '['){
            duz.push(str[i]);
        }else if(!duz.empty() && duz.top() == '[' && str[i] == ']'){
            duz.pop();            
        }else if(str[i] == '{'){
            duz.push(str[i]);
        }else if(!duz.empty() && duz.top() == '{' && str[i] == '}'){
            duz.pop();            
        }else {cout << "NO"; 
        return 0;
        }
    }

    
    if(duz.empty() && duz.empty() && duz.empty()){ 
           cout << "YES";
    }
    
    else {cout << "NO";}

    

	return 0;
}