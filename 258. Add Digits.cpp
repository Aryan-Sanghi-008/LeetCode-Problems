class Solution {
public:
    int get_num(int num)
    {
        int val = 0;
        while(num)
        {
            val += (num % 10);
            num /= 10;
        }
        return val;
    }
    int addDigits(int num) 
    {
        if(num <= 9)
        {
            return num;
        }

        int val = get_num(num);
        while(val >= 10)
        {
            val = get_num(val);
        }

        return val;
    }
};