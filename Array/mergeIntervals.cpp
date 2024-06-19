#include <bits/stdc++.h>

using namespace std;

/*
intervals[i][0]: Refers to the start of the current i-th interval.
intervals[i][1]: Refers to the end of the current i-th interval.
ans.back()[1]: Refers to the end of the last interval in the merged intervals list. */

vector<vector<int>> merge( vector<vector<int>>& intervals){

    int n = intervals.size();

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans; //2D vector

    for(int i = 0; i < n; i++){

        // if the current interval does not
        // lie in the last interval:

        if(ans.empty() || intervals[i][0] > ans.back()[1]){
            ans.push_back(intervals[i]);

        }

         // if the current interval
        // lies in the last interval:
        
        else{
            ans.back()[1] = max( intervals[i][1], ans.back()[1]);
        }
    }
    return ans;
}

int main(){

    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> result = merge(intervals);
    cout << "Merged intervals: ";
    for (const auto& interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
}