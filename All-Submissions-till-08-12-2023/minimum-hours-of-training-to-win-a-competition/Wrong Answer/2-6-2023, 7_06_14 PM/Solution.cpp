// https://leetcode.com/problems/minimum-hours-of-training-to-win-a-competition

class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
       int training_hours=0;
       if(accumulate(energy.begin(),energy.end(),0)>initialEnergy)
       training_hours+=(accumulate(energy.begin(),energy.end(),0)-initialEnergy+1);
       for(int i:experience){
           if(initialExperience<=i){   
           training_hours+=(i+1-initialExperience);
           initialExperience+=(i+1-initialExperience); 
           initialExperience+=i;
           }
           else
           initialExperience+=i;
       }
       return(training_hours);
    }
};