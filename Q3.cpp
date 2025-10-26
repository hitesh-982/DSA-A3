#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;


int main() {
    string s = "(())";
    stack<char> st;
    for(int i=0;i<s.length();i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }
        else {
            st.pop();
        }
    }
    cout<<(st.empty() ? "YES" : "NO")<<endl;
}
