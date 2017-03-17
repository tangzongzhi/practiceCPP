#include<iostream>
#include<string>
using namespace std;
bool isValid(string s) {
    vector<char> stack;
    
    
    for(string::iterator it=s.begin(),end=s.end();it<end;it++){
        if(*it=='(') {
            stack.push_back(')');
        }
        else if(*it=='[') {
            stack.push_back(']');
        }
        else if(*it=='{') {
            stack.push_back('}');
        }
        else if(stack.size()!=0&&*it==stack.back()) {
            stack.pop_back();
        }
        else return false;

        // if(*it=='{'&&*(it+1)!='}') return false;

        // if(*it=='['&&*(it+1)!=']') return false;
        
        // if(*it=='('&&*(it+1)!=')') return false;

        // if(*it=='{'&&*(it+1)!='}') return false;

        // if(*it=='['&&*(it+1)!=']') return false;

        // if(*it==')'||*it=='}'||*it==']') return false;

        // it++;
    }
    if(stack.size()==0) return true;
    else return false;
}