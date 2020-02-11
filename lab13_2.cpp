#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);
void findLocalMax(const double [][N], bool [][N]);
void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
    cout<<A;
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double X[][N]){
	 

      for(int i =0; i<5 ; i++){
		  cout<<"row "<< i+1<<": ";
		  for(int j=0; j<5 ; j++)
	  cin>>X[i][j];

	  }
}   
void findLocalMax(const double S[][N], bool W[][N]){

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
        if(i==0 || i==4 || j==0|| j==4 ){
			W[i][j]=0;continue;
		}
	    if(S[i][j] >= S[i-1][j] && S[i][j]>= S[i+1][j] &&S[i][j] >= S[i][j-1] && S[i][j]>= S[i][j+1])
          W[i][j]=1;
		  else W[i][j]=0;
		
		  
		}
		
	}
}
void showMatrix(const bool R[][N]){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
	  if(R[i][j]==1)cout<<"1 ";
	  else cout<<"0 ";}
	  cout<<"\n";
	}
	  

}