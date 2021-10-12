#include<stdio.h> 
int main() 
{ 
    int n,i; 
	printf("Enter size of array: \n"); 
	scanf("%d",&n); 
	int a[n];            
 	printf("Enter elements in array: \n"); 
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]); 
    int freq[100000]={0};
    for(i=0;i<n;i++) 
        freq[a[i]]++;    
    for(i=0;i<100;i++) 
        if(freq[i]) 
        printf("Count of %d is %d\n",i,freq[i]); 
} 

