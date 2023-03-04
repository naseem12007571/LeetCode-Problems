class Solution
{
public:
	vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
	{
		// Add the new interval to the input intervals
		intervals.push_back(newInterval);
		// Sort the intervals based on the start time of the interval
		sort(intervals.begin(), intervals.end());
		// Initialize the resulting merged intervals
		vector<vector<int>> ans;
		// Get the size of the intervals
		int n = intervals.size();
		// Initialize the start and end time of the current merged interval
		int l = intervals[0][0], r = intervals[0][1];
		// Iterate through the intervals
		for (int i = 1; i < n; i++)
		{
			// If the current interval overlaps with the previous merged interval
			if (r >= intervals[i][0])
				// Update the end time of the merged interval to be the maximum of the two end times
				r = max(r, intervals[i][1]);
			else
			{
				// If no overlap, add the previous merged interval to the ans
				ans.push_back({l, r});
				// Update the start and end time of the current merged interval
				l = intervals[i][0];
				r = intervals[i][1];
			}
		}
		// Add the final merged interval to the ans
		ans.push_back({l, r});
		// Return the ans
		return ans;
	}
};
