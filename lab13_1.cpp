#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int x=1,p; 
	for(int t=1; t<N; t++){
		p=x;
		for(int j=0; j<N; j++){
		  
		    if(x==j) cout<<"["<<d[j]<<"]"<<" ";
			else cout<< d[j] <<" ";
	}
	cout<<"=> ";
	 for(int o=x; o>0; o--){
		if(d[o]>d[o-1]){swap(d,o,o-1);p--;}
		  }
	for(int i = 0; i < 10; i++){
			if(p==i) cout<<"["<<d[i]<<"]"<<" ";
			else cout<< d[i] <<" ";
    }
	cout <<"\n";
     	
	for(int k=x; k>0; k--){
		if(d[k]>d[k-1])swap(d,k ,k-1);
			
	}
	x++;
}
}


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
	return 0;
}
