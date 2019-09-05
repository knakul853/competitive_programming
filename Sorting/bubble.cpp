#include<iostream>
using namespace std;


void bubble_sort(int a[],int n)
{
	for(int pass = 1; pass<=n-1;pass++)
	{
		for(int i=1;i<=n-pass;i++)
		{
			if(a[i] > a[i+1])
			swap(a[i] , a[i+1]);
		}
	}
}

void print(int a[] , int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int n;

	cin >> n;

	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
    bubble_sort(a,n);
	print(a,n);

}
