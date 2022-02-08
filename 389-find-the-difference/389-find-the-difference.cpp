class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int s_Sum = 0, t_Sum = 0;
        
        for (int i = 0; i < s.size(); i++){
            s_Sum+=s[i];
        }
        
        for (int j = 0; j < t.size(); j++){
            t_Sum+=t[j];
        }
        
        char differingChar = t_Sum - s_Sum;
        
        cout << differingChar << endl;
        
        return differingChar;
        
        
    }
};