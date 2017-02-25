#include <iostream>
#include <climits>
using namespace std;
void CountingSort(int *initial,int len){
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<len;i++){
		if(initial[i]<min){
			min=initial[i];
		}
		if(initial[i]>max){
			max=initial[i];
		}
	}
 int frequency[(max-min+1)]={0};
 	for(int i=0;i<len;i++){
 		frequency[initial[i]]++;//Number of Occurences of each element
 	}
 	for(int i=1;i<len;i++){
 		frequency[i]=frequency[i-1]+frequency[i];//Number of occurences of element less than equal to that number
 	}
 	int result[len];
 	int temp;
 	for(int i=0;i<len;i++){
 		temp=frequency[initial[i]];
 		result[temp-1]=initial[i];
 		frequency[initial[i]]--;
 	
	}
	for(int i=0;i<len;i++){
		cout<<result[i]<<" ";
	}
}
int main(){
	int initial[]={0,3,2,3,3,0,5,2,3};
	int len=sizeof(initial)/sizeof(int);
	CountingSort(initial,len);
return 0;}