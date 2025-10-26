#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;


int main(){
    string s;
    if(!getline(cin,s)) return 0;
    stack<char> st;
    for(char c:s) st.push(c);
    while(!st.empty()){ cout<<st.top(); st.pop(); }
    cout<<"\n";
    return 0;
}
