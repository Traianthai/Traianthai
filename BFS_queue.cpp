#include<bits/stdc++.h>

using namespace std;

int main(){
	int n ;
	cin >> n;
	int A[n][n];
	
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < n ; j ++){
			cin >> A[i][j];
		}
	}
	queue <int> qe;
	qe.push(1);
	cout << 1 << " ";
	
	int X[n] ;
	memset(X,0,sizeof(X));
	X[0] = 1; 
	while(!qe.empty()){
		int u = qe.front();
		qe.pop();
		for(int i = 0 ; i < n ; i ++){
			if(A[u-1][i] == 1 && X[i] == 0) {
				cout << i + 1 << " " ;
				X[i] = 1 ;
				qe.push(i+1);
			}	
		}	
	}	
}

//5
//0 1 0 0 1 
//1 0 1 1 1 
//0 1 0 1 0 
//0 1 1 0 1 
//1 1 0 1 0 
//5
//0 1 0 0 0 
//0 0 1 1 0 
//0 0 0 0 0 
//0 0 1 0 0 
//1 1 0 1 0 
