class Solution {
public:
    int minLength(string s) {
        string result;
        for(char ch:s){
            if(!result.empty() &&
             ((result.back()=='A' && ch=='B') || (result.back()=='C' && ch=='D')))
            {
                result.pop_back();
            }
            else{
                result+=ch;
            }
        }
        return result.size();
    }
};
