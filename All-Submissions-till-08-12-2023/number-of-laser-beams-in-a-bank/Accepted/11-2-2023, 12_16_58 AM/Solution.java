// https://leetcode.com/problems/number-of-laser-beams-in-a-bank

class Solution {
    public int numberOfBeams(String[] bank) {
        int beams=0,sender_devices=0;
        for(String floor:bank) {
            int devices=0,n=floor.length();
            for(int i=0;i<n;i++) if(floor.charAt(i)=='1') devices++;
            if(devices>0) {
                beams+=sender_devices*devices;
                sender_devices=devices;
            }
        }
        return beams;

    }
}