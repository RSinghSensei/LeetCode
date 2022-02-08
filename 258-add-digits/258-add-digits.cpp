class Solution {
public:
    int addDigits(int num) {
        
        bool found = false;
        
        while(!found){
            int temp = num, sum = 0;
            while(temp){
                sum+=(temp%10);
                temp/=10;
            }
            if (sum <= 9){num = sum;break;}
            num = sum;
            
        }
        return num;
        
    }
};