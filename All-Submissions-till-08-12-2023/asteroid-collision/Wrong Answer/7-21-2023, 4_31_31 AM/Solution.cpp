// https://leetcode.com/problems/asteroid-collision

class Solution {
public:
    bool isStable(vector<int>& state){
        int n=state.size();
        if(n<=1) return true;
        if(state[n-1]>=0 && state[n-2]>=0) return true;
        else if(state[n-1]<0 && state[n-2]<0) return true;
        else return false;
    }
    void change(vector<int>& state){
        int n=state.size(),val=max(abs(state[n-1]),abs(state[n-2])),sign=1;
        if(abs(state[n-1])>abs(state[n-2])){ 
            if(state[n-1]<0) sign=-1;
        }
        else if(abs(state[n-1])<abs(state[n-2])){
            if(state[n-2]<0) sign=-1;
        }
        else val=0;
        val*=sign;
        state.pop_back();
        state.pop_back();
        if(val!=0) state.push_back(val);
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> state{asteroids[0]};
        for(int i=1;i<asteroids.size();i++){
            state.push_back(asteroids[i]);
            while(!isStable(state)) change(state);
        }
        return state;
    }
};