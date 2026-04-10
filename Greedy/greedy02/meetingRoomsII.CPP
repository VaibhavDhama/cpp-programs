#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
int minMeetingRooms(vector<vector<int>> intervals) {
    vector<int> start, ending;
    for (auto x : intervals)
    {
        start.push_back(x[0]);
        ending.push_back(x[1]);
    }
    sort(start.begin(), start.end());
    sort(ending.begin(), ending.end());
    int ans=0; int rooms=0;
    int i=0; int j=0;
    while (i<start.size() and j<ending.size())
    {
        if (start[i]< ending[j]) //meeting start but no vacant room
        {
            rooms++;
            ans= max(ans, rooms);
            i++;
        }
        else if (start[i] > ending[j])  //meeting ends
        {
            rooms --;
            j++;
        }
        else  //== so first vacant then assign 
        {
            i++;
            j++;
            
        }
    }
    return ans;
}
};