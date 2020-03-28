#include <iostream>
using namespace std;

int print_D1(int arr[]); //print array 1D
int print_D2(int (*arr)[5]); //print array 2D
int print_ptr_D1(int *arr); //print pointer array 1D 
int print_ptr_D2(int arr[][5]); //print pointer array 2D


int main(){
	int D_1[5] = {1,2,3,4,5};
	int D_2[2][5] = {{1,2,3,4,5},
					{6,7,8,9,10}};
  
	int *ptrD_1 = D_1;
	int (*ptrD_2)[5] = D_2; 
	
	cout << "\tARRAY 1 DIMENSI" << endl;
	cout << "Hasil Print D_1: " << endl;
	print_D1(D_1);
	cout << endl << "Hasil Print ptr_D_1: " << endl;
	print_ptr_D1(ptrD_1);
	
	cout << endl << endl << "\tARRAY 2 DIMENSI" << endl;
	cout << "Hasil Print D_2: " << endl;
	print_D2(D_2);
	cout << "Hasil Print ptr_D_2: " << endl;
	print_ptr_D2(ptrD_2);

	return 0;
}

int print_D1(int arr[]){
	for(int i=0; i<5; i++){
		cout << arr[i];
	}
}

int print_D2(int (*arr)[5]){
	for(int i=0; i<2; i++){
		for(int j=0; j<5; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
}

int print_ptr_D1(int *arr){
	for(int i=0; i<5; i++){
		cout << *(arr + i);
	}
}

int print_ptr_D2(int arr[][5]){
	for(int i=0; i<2; i++){
		for(int j=0; j<5; j++){
			cout << *(*(arr + i) + j);
		}
		cout << endl;
	}
}