class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector <vector<int>> v;
         sort(intervals.begin(),intervals.end());
        stack <vector<int>> s;
        s.push(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            int start1 = s.top()[0];
            int end1 = s.top()[1];
            int start2= intervals[i][0];
            int end2 = intervals[i][1];
            if(end1 < start2 && end2>start1)
                s.push({start2,end2});
            // else if(end1 > start2 && start1> end2){
            //     vector <int> temp;
            //     temp = s.top() ;
            //     s.pop();
            //     s.push(intervals[i]);
            //     s.push(temp);
            // }
            else{
                s.pop();
                end1 = max(end1,end2);
                start1 = min(start1,start2);
                s.push({start1,end1});
            }
        }
        
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        return v;
    }
};