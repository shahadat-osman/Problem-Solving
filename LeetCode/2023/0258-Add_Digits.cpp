class Solution
{
public:
    int addDigits(int num)
    {
        long long int sum = 0, mod, ans;

        if (num < 10)
        {
            return num;
        }
        else
        {
            while (num > 0)
            {
                mod = num % 10;
                sum += mod;
                num /= 10;
                if (num == 0)
                {
                    if (sum < 10)
                    {
                        ans = sum;
                        break;
                    }
                    else
                    {
                        num = sum;
                        sum = 0;
                    }
                }
            }
        }
        return ans;
    }
};