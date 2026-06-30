#include<iostream>
#include<vector>
using namespace std;
long long maxTripletProduct(long long arr[], int n) {
	long long largest=LLONG_MIN;
	long long Slargest=LLONG_MIN;
	long long Tlargest=LLONG_MIN;
	long long smallest=LLONG_MAX;
	long long Ssmallest=LLONG_MAX;
	for(int i=0;i<n;i++)
	{
		if(largest<=arr[i])
		{
			Tlargest=Slargest;
			Slargest=largest;
			largest=arr[i];
		}
		else if(largest>=arr[i] && Slargest<=arr[i])
		{
			Tlargest=Slargest;
			Slargest=arr[i];
		}
		else if(Slargest>=arr[i] && Tlargest<=arr[i])
		{
			Tlargest=arr[i];
		}
		if(smallest>=arr[i])
		{
			Ssmallest=smallest;
			smallest=arr[i];
		}
		else if(smallest<=arr[i] && Ssmallest>=arr[i])
		{
			Ssmallest=arr[i];
		}
	}
	return max(largest*Slargest*Tlargest,largest*smallest*Ssmallest);
}
int main()
{
	long long arr[]={-3, -5, 1, 0, 8, 3, -2};
	long long result=maxTripletProduct(arr,7);
	cout<<result;
	return 0;
}