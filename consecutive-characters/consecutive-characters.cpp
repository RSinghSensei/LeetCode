class Solution {
public:
    int maxPower(string s) {
        
        if (s.size() == 1){return 1;}
        
        int m_size = 1;
        
        for (int i = 0; i < s.size(); i++){
            char temp = s[i];
            int size = 1;
            for (int j = i + 1; j < s.size(); j++){
                if (s[j] == temp){size+=1; cout << size << endl;}
                else{break;}                
            }
            m_size = max(size, m_size);
        }
        
        return m_size;
    }
};