class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int l1 = s.length();
        int l2 = goal.length();
        string soft;
        
        if(l1!=l2){
            return false;
        }else{
            soft = s+s;
            
            if(soft.find(goal)!=string::npos){
                return true;
            }
        }
        
        return false;
        
    }
};