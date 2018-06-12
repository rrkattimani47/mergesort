#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n;

void mergeSort(int arr[], int left, int right)
{

	int mid;
	if(left<right)
	{

		mid=(left+right)/2;
		mergeSort(arr,left,mid);
		mergeSort(arr,mid+1,right);
		merge(arr,left,mid,right);

	}
}
int merge(int arr[], int left,int mid, int right)
{
	int i,j,k,l,b[n];
	k=left;
	i=left;
	j=mid+1;
	while(i<=mid && j<=right)
	{
		if(arr[i]<=arr[j])
			b[k++]=arr[i++];
		else
			b[k++]=arr[j++];
	}
	if(i>mid)
		for(l=j;l<=right;l++)
			b[k++]=arr[l];

		else
			for(l=i;l<=mid;l++)
				b[k++]=arr[l];

			for(k=left;k<=right;k++)
				arr[k]=b[k];
}

int main()
{
	int i;
	time_t start, end;
	double exTime=0.0;

	printf("Enter the number of elements: \n");
	scanf(" %d ", &n);

	int arr[n];

	for(i=0;i<n;i++)
		arr[i]=rand()%100;

	printf("The array before sorting is: \n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");

	start=time(&start);

	for(i=0;i<30000;i++)
		mergeSort(arr,0,n-1);

	end=time(&end);

	exTime=(double) difftime(end,start);

	printf("The array after sorting :\n");

	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");

	printf("The execution time required : %lf secs",exTime);

	return 0;

}