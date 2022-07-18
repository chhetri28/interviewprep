class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int i=0;
        long long int j=sqrt(c);
        while(i<=j){
            long long int sq=(i*i)+(j*j);
            if(sq==c){
                return true;
                break;
            }
            else if(sq > c) j--;
            else i++;
        }
        return false;
    }
};