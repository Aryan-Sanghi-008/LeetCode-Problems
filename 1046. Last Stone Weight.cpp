class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        int sum = 0;
        for(int i = 0; i < stones.size(); i++)
        {   
            sum += stones[i];
        }

        sum %= 2;
        return sum;
    }
};