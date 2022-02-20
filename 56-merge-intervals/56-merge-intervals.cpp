class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
	vector<vector<int>>v1;
	int i = 0;	
	for (i; i < intervals.size(); i++)
	{
		int endTime = intervals[i][1], startTime = intervals[i][0];
		for (int j = i + 1; j < intervals.size(); j++)
		{
			if (endTime >= intervals[j][0] && endTime < intervals[j][1]){endTime = intervals[j][1]; i = j;}
			else if (endTime >= intervals[j][0] && endTime >= intervals[j][1]){i = j; continue;}
		}
		v1.push_back({startTime, endTime});
	}
	
    return v1;
    }
};