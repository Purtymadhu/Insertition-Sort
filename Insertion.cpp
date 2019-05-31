#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
	int hole,value;
	for(int i=1;i<n;i++)
	{
		value=arr[i];
		hole=i;
		while(hole>0 && arr[hole-1]>value)
		{
			arr[hole]=arr[hole-1];
			hole=hole-1;
		}
		arr[hole]=value;
	}
}
void PrintArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter how many numbers of element you want:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements:=";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	InsertionSort(arr,n);
	cout<<"Elments are:";
	PrintArray(arr,n);
}
