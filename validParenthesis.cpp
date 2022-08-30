#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stak;
        
        for(char c: s){
            if(c == '(' || c == '{' || c == '['){
                stak.push(c);
            }
            else{
                if(stak.empty()){
                    return false;
                }
                if(c==')' and stak.top()=='('){
                    stak.pop();
                }
                else if(c=='}' and stak.top()=='{'){
                    stak.pop();
                }
                else if(c==']' and stak.top()=='['){
                    stak.pop();
                }
                else{
                    return false;
                }
            }
        }
        return(stak.empty());
    }
};