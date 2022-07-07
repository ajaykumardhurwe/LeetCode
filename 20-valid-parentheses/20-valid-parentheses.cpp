class Solution {
public:
    bool isValid(string s) {
        
        if(s.length()==0 || s.length()==1){
            return false;
        }
        
        stack<char> ajay;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                ajay.push(s[i]);
            }
            
            else if(ajay.size()!=0 && s[i]==')' && ajay.top()=='('){
                ajay.pop();
            }
            else if(ajay.size()!=0 && s[i]==']' && ajay.top()=='['){
                ajay.pop();
            }
            else if(ajay.size()!=0 && s[i]=='}' && ajay.top()=='{'){
                ajay.pop();
            }else{
                return false;
            }
            
        }
        if(ajay.empty()){
            return true;
        }else{
            return false;
        }
    }
};