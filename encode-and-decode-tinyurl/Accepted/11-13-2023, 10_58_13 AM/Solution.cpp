// https://leetcode.com/problems/encode-and-decode-tinyurl

class Solution {
public:
    string alphSet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unordered_map<string,string> urlForCode;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string code;
        while(urlForCode.find(code)==urlForCode.end()) {
            random_shuffle(alphSet.begin(),alphSet.end());
            code=alphSet.substr(0,6);
            if(urlForCode.find(code)==urlForCode.end()) urlForCode[code]=longUrl;
        }
        return "http://tinyurl.com/"+code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return urlForCode[shortUrl.substr(shortUrl.find_last_of('/')+1)];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));