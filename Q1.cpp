#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

using namespace std;
const int MAXN = 100;
int st[MAXN], top = -1;
bool isFull(){ return top==MAXN-1; }
bool isEmpty(){ return top==-1; }
void pushx(int x){ if(!isFull()) st[++top]=x; else cout<<"Overflow\n"; }
void popx(){ if(isEmpty()) cout<<"Underflow\n"; else { cout<<st[top--]<<" popped\n"; } }
void display(){ if(isEmpty()) { cout<<"Empty\n"; return; } for(int i=top;i>=0;--i) cout<<st[i]<<" "; cout<<"\n"; }
void peekx(){ if(isEmpty()) cout<<"Empty\n"; else cout<<st[top]<<"\n"; }
int main(){
    int ch,x;
    while(true){
        cout<<"1 push 2 pop 3 isEmpty 4 isFull 5 display 6 peek 0 exit\n";
        if(!(cin>>ch)) break;
        if(ch==0) break;
        if(ch==1){ cin>>x; pushx(x); }
        else if(ch==2) popx();
        else if(ch==3) cout<<(isEmpty()?"Empty\n":"Not Empty\n");
        else if(ch==4) cout<<(isFull()?"Full\n":"Not Full\n");
        else if(ch==5) display();
        else if(ch==6) peekx();
    }
    return 0;
}
