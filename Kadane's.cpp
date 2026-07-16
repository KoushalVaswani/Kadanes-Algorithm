#include<iostream>
#include<vector>
using namespace std;
int MaximumSubarraySum(vector<int> &arr)
{
	int currSum = 0;
	int maxSum = 0;
	for(int i = 0 ; i < arr.size() ; i++)
	{
		currSum += arr[i];
		maxSum = max(maxSum , currSum);
		if(currSum < 0)
		{
			currSum = 0;
		}
	}
	return maxSum;
}
int main()
{
	
	int n;
	vector<int> arr(n);
	cout<<"Enter the number of elements : ";
	cin>>n;
	
	cout<<"Enter the array elements : ";
	for(int i = 0 ; i < n ; i++)
	{
		cin>>arr[i];
	}
	cout<<MaximumSubarraySum(arr)<<endl;
	
	return 0;
}
