// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

    int steps=0;
    while(num!=0)
    {
        steps+=1;
        if(num%2==0)
        {
            num/=2;
            continue;
        }
        else
        num-=1;
    }//end of while loop
    return(steps);