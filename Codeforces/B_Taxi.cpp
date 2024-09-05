#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int n ,s1=0,s2=0,s3=0,s4=0,min;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 1) s1 ++;
		if (arr[i] == 2) s2 ++;
		if (arr[i] == 3) s3 ++;
		if (arr[i] == 4) s4 ++;
	}
	min = s4;
	if (s1 == s3)
	{
		min += s3;
		s1 = 0;
		s3 = 0;
	}
	while (s1 != 0 && s3 != 0)
	{
		min++;
		s1 -= 1;
		s3 -= 1;
	}
	if (s1 == 0 && s3 != 0)
	{
		min+=s3;
		s3 = 0;
	}
	min += s2 / 2;
	if (s2 % 2 != 0)
	{
		if (s1 <= 2)
		{
			min++;
			s1 = 0;
			s2 = 0;
		}
		else
		{
			s1 -= 2;
			min++;
			s2 = 0;
		}
	}
	if (s1 != 0)
	{
		min += s1 / 4;
		if (s1 % 4 != 0)
		{
			min++;
		}
	}
	cout << min;
}
	 	  	 				 		    				  	 	 		