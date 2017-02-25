#include<iostream>
using namespace std;
int main(){
int arr[]={20,40,60,80,2};
int len=(sizeof(arr)/sizeof(int));
int j,temp;
for(int i=1;i<len;i++){
	temp=arr[i];
	for(j=i-1;j>-1;j--){
		if(temp<arr[j]){			
			arr[j+1]=arr[j];
		}else{
			break;
		}
	}
arr[j+1]=temp;
}
for(int i=0;i<len;i++){
	cout<<arr[i]<<" ";
}

return 0;}