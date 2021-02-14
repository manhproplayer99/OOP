#include<iostream>
using namespace std;
//template<class T>T findMax(T a,T b,T c){
//	T max=a;
//	if(b>max)  max=b;
//	if(c>max)  max=c;
//	return max;
//}

template<class T>T maxArr(T* arr,int n){
	T max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}	
int main(){
//	cout<<"Max int:"<<findMax<int>(1,6,9);
//	cout<<"\nMax double:"<<findMax<double>(1.5,6.3,3.9);
	int arr[] ={4,3,5,1,8};
	cout<<""<<maxArr<int>(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	char b[]={'h','i','a','d'};
	cout<<""<<maxArr<char>(b,sizeof(b)/sizeof(b[0]));
}
