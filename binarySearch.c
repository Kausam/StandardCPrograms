#include <stdio.h>
/*
The array given should be sorted.
returns the index of the element in the array.
returns -1 if element is not found.
*/
int bSearch(int array[],int length,int key)
{
	int high=length-1,low=0;
	int mid=(high+low)/2;;
	while(low<=high)
	{
		//									element found.
		if(array[mid]==key)
		{
			return mid;
		}
		else if(array[mid]>key)
		{
			high=mid-1;
			
		}
		else
		{
			low=mid+1;
		}
		mid=(high+low)/2;
 		
	}
	//										element not found in the array.
	return -1;
}
int main()// 								driver 
{
	int i,j,k,l,m,n,t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		//									value to be searched.
		int key;
		scanf("%d",&key);
		int result =bSearch(a,n,key);
		printf("%d\n",result);
	}	
	return 0;	
}


