class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>A;
        vector<int>B;
        for(auto p:nums)
        {
            A[p]++;
        }
        for(auto z:A)
        {
            if(z.second==2)
            {
                B.push_back(z.first);
            }
        }
        return B;
    }
};
