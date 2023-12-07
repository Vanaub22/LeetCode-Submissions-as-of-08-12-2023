// https://leetcode.com/problems/count-operations-to-obtain-zero

int countOperations(int num1,int num2)
{
    int steps=0;
    while(num1>0&&num2>0)
    {
        steps+=1;
        if(num1>num2)
        num1-=num2;
        else
        num2-=num1;
    }
    return(steps);
}//end of fn.