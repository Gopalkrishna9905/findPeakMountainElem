#include<iostream>
using namespace std;

int findPeakMountainElem(int arr[],int n)
{
	int start = 0;
	int end = n-1;
	int mid = start + (end-start)/2;
	
	while(start < end)
	{
		if(arr[mid] < arr[mid+1])
		{
			start = mid+1;
			
		}
		else if(arr[mid] > arr[mid+1])
		{
			end = mid;
		}
		 mid = start + (end-start)/2;
	}
	return arr[start];
}

int main()
{
	int arr[]={2,4,5,7,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x =findPeakMountainElem(arr,n);
	cout<<" The peak value of mountain : "<<x;
}
