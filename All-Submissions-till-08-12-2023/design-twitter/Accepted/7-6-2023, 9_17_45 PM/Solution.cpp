// https://leetcode.com/problems/design-twitter

class Twitter {
public:
    unordered_map<int,unordered_map<int,bool>> isFollowing;
    map<int,pair<int,int>,greater<int>> tweets;
    int t=0;
    void postTweet(int userId, int tweetId) {
        tweets[t++]={userId,tweetId};
    }
    vector<int> getNewsFeed(int userId) {
        vector<int> newsFeed;
        for(auto it:tweets){
            int tweeter=it.second.first;
            if(tweeter==userId || isFollowing[userId][tweeter])
            newsFeed.push_back(it.second.second);
            if(newsFeed.size()>=10) break;
        }
        return newsFeed;
    }
    void follow(int followerId, int followeeId) {
        isFollowing[followerId][followeeId]=true;
    }
    void unfollow(int followerId, int followeeId) {
        isFollowing[followerId][followeeId]=false;
    }
};
/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */