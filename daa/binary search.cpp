#include<stdio.h>
int binary(int arr[],int n,int x){
	int l=0;
	int h=n-1;
	while(l<=h){
		int m=(l+h)/2;
		if(arr[m]==x){
			return m;
		}
		else if(arr[m]<x){
			l=m+1;
		}
		else{
			h=m-1;
		}

	}
	return -1;
}
int main(){
	int arr[10] = {2, 4, 7, 18, 45};
    int n = 10;
    int target = 18;
    printf("element index:%d", binary(arr, n, target));
    return 0;
	
}