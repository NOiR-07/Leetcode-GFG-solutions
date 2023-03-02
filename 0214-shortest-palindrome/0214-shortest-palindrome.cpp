class Solution {
public:
       bool check(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){cout<<s[i]<<" "<<s[j]<<"";return false;}
            i++;
            j--;
        }
        return true;
    }
    
    string shortestPalindrome(string s) {
        if(check(s))return s;
       string r(s.rbegin(),s.rend());
       
       string st="";
       int i=0;
       // cout<<"hi";
       while(i<s.size()){
           st+=r[i];
           i++;
           string a=r.substr(i,r.size()-i);
           if(s.rfind(a,0)==0){break;}
       }
       for(int i=0;i<s.size();i++){
           st.push_back(s[i]);
       }
       return st;
    }
};