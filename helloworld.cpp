
//This is a HelloWorld test!
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
// typedef struct Node{
//     int number;
//     Node *next;
// }Node;

string longestCommonPrefix(vector<string>& strs) {
    int vecsize=strs.size();
    int strsize=strs[0].size();
    string prefix="";
    if(vecsize==0||strsize==0){
        return prefix; 
    }
    for(int i=0;i<strsize-1;i++){
        for(int j=1;j<vecsize;j++){
            if(strs[j].size()<i||strs[j][i]!=strs[0][i])
                return prefix;
        }
        prefix+=strs[0][i];
    }
    return prefix;
}
int main(){
    printf("Hello World!\n");
    // usleep(100000);
    // vector<string> test;
    // test.push_back("");
    // string value=longestCommonPrefix(test);
    // cout<<value<<endl;
    // Node *pHead;
    // Node *pHead2;
    // *pHead=*pHead2;
    // for(int i=0;i<20;i++){
    //     pHead->number=i;
    //     pHead=pHead->next;
    // }
    // while(pHead2->next!=NULL){
    //     printf("%d",pHead2->number);
    //     pHead2=pHead2->next;
    // }
    return 0;
}