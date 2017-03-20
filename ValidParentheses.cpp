#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    string prefix="";
    if(strs.size()==0||strs[0].size()==0){
        return prefix; 
    }
    int vecsize=strs.size();
    int strsize=strs[0].size();
    for(int i=0;i<strsize;i++){
        for(int j=0;j<vecsize;j++){
            if(strs[j].size()<i+1||strs[j][i]!=strs[0][i])
                return prefix;
        }
        prefix+=strs[0][i];
    }
    return prefix;
}

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
void ValidParentheses(){
    string test="[{}]";
    cout<<isValid(test)<<endl;
}