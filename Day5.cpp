Problem 1: Given a positive integer k, you need to find the length of the smallest positive integer n such that n is divisible by k, and n only contains the digit 1.
Return the length of n. If there is no such n, return -1.
Note: n may not fit in a 64-bit signed integer.

class Solution {
public:
int smallestRepunitDivByK(int x)
{
	int len = 1;
	int rem = 0;
	for(int i=1; i<=x; i++)
	{
		rem = (rem*10+1) % x;
		if(rem==0)
		{
			return len;
		}
		else
		{
			
			len++;
		}
	}
	return -1;
}

int main()
{
	int k, length;
	cin >> k;
	length = smallestRepunitDivByK (k);
	cout <<"The required output is:" << length;
    return 0;
}
};

Problem 2: Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.

class Solution {
public:
	bool  isPalindrome(long x)
{
	long temp= 0,r,m;
	m=x;
	while(x>0)
	{
		r = x % 10;
		temp = temp * 10 + r;
		x = x/10; 
	}
	if(temp==m)
	{
		return true;
	}	
	else 
	{
		return false;
	}
}

};
