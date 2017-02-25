#include<iostream>
using namespace std;
int main(){
int arr[]={10,30,15,98,5,47,98,65};
int len=(sizeof(arr)/sizeof(int));
int loc=0,min=arr[0],temp;
for(int i=0;i<len-1;i++){
	for(int j=i;j<len;j++){
		if(arr[j]<min){
			min=arr[j];
			loc=j;
		}
	}
	temp=arr[i];
	arr[i]=min;
	arr[loc]=temp;
	min=arr[i+1];
	loc=i+1;
}
for(int i=0;i<len;i++){
	cout<<arr[i]<<" ";
}

return 0;}