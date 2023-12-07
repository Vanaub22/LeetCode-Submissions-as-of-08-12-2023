// https://leetcode.com/problems/word-frequency

# Read from the file words.txt and output the word frequency list to stdout.
cat words.txt | tr -s ' ' '\n' | sort | uniq -c | awk `{printf("%d %s\n",$2,$1)}` 