#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

using namespace std;
int main(){
    string s;
    if(!getline(cin,s)) return 0;
    istringstream iss(s);
    stack<double> st;
    string tok;
    while(iss>>tok){
        if(tok=="+"||tok=="-"||tok=="*"||tok=="/"||tok=="^"){
            if(st.size()<2){ cout<<"Error\n"; return 0; }
            double b=st.top(); st.pop();
            double a=st.top(); st.pop();
            double r=0;
            if(tok=="+") r=a+b;
            else if(tok=="-") r=a-b;
            else if(tok=="*") r=a*b;
            else if(tok=="/") r=a/b;
            else if(tok=="^") r=pow(a,b);
            st.push(r);
        } else {
            st.push(stod(tok));
        }
    }
    if(st.size()==1) cout<<st.top()<<"\n"; else cout<<"Error\n";
    return 0;
}
