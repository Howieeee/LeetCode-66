class Solution {
public:
    void carry(vector<int>& digits, int cur, int next){

        digits[cur] = 0;
        if(next<0){//新push 一個
            auto it = digits.begin();
            digits.emplace(it,1);
        }else{
            digits[next]+=1;
        }

    }
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1] ++;
        
        int ptr = digits.size()-1;

        while(true){
            
            if(digits[ptr]>9){
                //cout << digits[ptr] << endl;
                
                carry(digits,ptr,ptr-1);
                if(ptr-1<0)
                    ptr++;
            }
            else
                break;
            
            ptr--;//cout << ptr ;
        }
        
        return digits;
    }
};
