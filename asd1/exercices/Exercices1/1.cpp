//
//  ProductOfSquareMatrices.cpp
//
//  Created by Olivier Cuisenaire on 04.03.15.
//  Copyright (c) 2015 Olivier Cuisenaire. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class SquareMatrix {
private:
	vector<vector<double> > data;
public:

	SquareMatrix(unsigned long N) {
		data.resize(N);
		for (auto& vec : data) {
			vec.resize(N);
		}
	}
	unsigned long size() const {
		return data.size();
	}
	double& at(int i, int j) {
		return data[i][j];
	}
	const double& at(int i, int j) const {
		return data[i][j];
	}
	void PrintMe() const {
		for (auto& vec : data) {
			for (double d : vec) {
				cout << d << " ";
			}
			cout << endl;
		}
	}
};

SquareMatrix ProductOfSquareMatrices(const SquareMatrix& A, const SquareMatrix& B) {

	SquareMatrix C(A.size());

	unsigned long size = A.size();
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			C.at(i,j) = 0;
			for (int k = 0; k < size; k++) {
				C.at(i,j) += A.at(i,k) * B.at(k, j);
			}
		}
	}
	// A COMPLETER

	return C;
}

int main(int argc, const char * argv[]) {

	int N;
	cout << "Entrez un entier: " << endl;
	cin >> N;

	SquareMatrix A(N), B(N);

	for (int i = 0; i<N; ++i)
		for (int j = 0; j<N; ++j) {
			A.at(i, j) = 2 * i + j;
			B.at(i, j) = (i + 1)*j;
		}

	cout << "A: " << endl;
	A.PrintMe();
	cout << "B: " << endl;
	B.PrintMe();
	cout << "C = A*B " << endl;
	SquareMatrix C = ProductOfSquareMatrices(A, B);
	C.PrintMe();

	return 0;
}
