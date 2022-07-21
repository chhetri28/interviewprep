class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        if(num==0) return c;
        
        c=helper(num,c);
        return c;
    }
    int helper(int num,int c){
        if(num==0) return c;
        
        c++;
        
        if(num%2==0) num/=2;
        else num=num-1;
        
        return helper(num,c);
    }
};