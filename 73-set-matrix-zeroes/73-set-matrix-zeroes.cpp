class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>>v1;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                pair<int, int>temp;
                if (matrix[i][j] == 0){temp = {i, j}; cout << i << " " << j << endl; v1.push_back(temp); }
            }
        }
        
        int length = matrix.size(), width = matrix[0].size();
        
        for (int i = 0; i < v1.size(); i++)
        {
            int tempW = 0, tempL = 0;
            while (tempW < width)
            {
                matrix[v1[i].first][tempW] = 0;
                tempW+=1;
            }
            while (tempL < length)
            {
                matrix[tempL][v1[i].second] = 0;
                tempL+=1;
            }
        }
        
    }
};