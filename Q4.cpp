#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int prec(char c){ if(c=='+'||c=='-') return 1; if(c=='*'||c=='/') return 2; if(c=='^') return 3; return 0; }
int main(){
    string in;
    if(!getline(cin,in)) return 0;
    string out;
    stack<char> st;
    for(size_t i=0;i<in.size();++i){
        char c=in[i];
        if(isalnum(c)) out.push_back(c);
        else if(c=='(') st.push(c);
        else if(c==')'){
            while(!st.empty() && st.top()!='('){ out.push_back(st.top()); st.pop(); }
            if(!st.empty()) st.pop();
        } else if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'){
            while(!st.empty() && st.top()!='(' && ((prec(st.top())>prec(c)) || (prec(st.top())==prec(c) && c!='^'))){
                out.push_back(st.top()); st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){ out.push_back(st.top()); st.pop(); }
    cout<<out<<"\n";
    return 0;
}
