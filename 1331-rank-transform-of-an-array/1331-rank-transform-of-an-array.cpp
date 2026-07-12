class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> m;
        vector<int> v = arr;
        int index = 1;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            int ele = v[i];
            if(m.find(ele)==m.end()){
                m[ele] = index;
                index++;
            }
        }
        vector<int> v2;
        for(int i=0;i<arr.size();i++){
            if(m.find(arr[i])!=m.end()){
                int ele = arr[i];
                v2.push_back(m[ele]);
            }
        }
        return v2;
    }
};