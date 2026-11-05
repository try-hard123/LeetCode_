class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        int cnt = 0;

        sort(arr2.begin(), arr2.end());

        for(int i = 0; i < arr1.size(); i++){
            int case1 = arr1[i] - d;
            int case2 = arr1[i] + d;
                        
            auto it = lower_bound(arr2.begin(), arr2.end(), case1);

            if(it == arr2.end() || *it > case2) cnt++;
        }
        return cnt;
    }
};