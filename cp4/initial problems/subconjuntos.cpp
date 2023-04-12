#include<bits/stdc++.h>

using namespace std;

int main(){
	int N = 3;
	
	for(int i = 0; i < 1 << N; i++){ // Cardinalidad del conjunto partes (Total de subconjuntos)
		for(int j = 0; j < N; j++)
			if(i & 1 << j) cout << j+1 << " ";
		cout << "\n";
	}
	return 0;
}
