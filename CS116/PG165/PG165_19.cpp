/*! Chris Miller (cmiller@fsdev.net), CS116
 *! Copyright (C) 2009 FSDEV.  Aw richts pitten by.
 *! Academic endorsement.  This code is not licensed for commercial use.
 *! 20090914, Pg. 165 # 19
 */
 
 #include <iostream>
 #include <vector>
 
 using namespace std;
 
 int main ( int argc, char * const argv[] ) {
 	// vector v(5); for (int i=0; i<=v.size();++i); cout << "Success!\n";
 	/*
 	cmiller-laptop% llvm-g++ -o a.out PG165_19.cpp
	PG165_19.cpp: In function �int main(int, char* const*)�:
	PG165_19.cpp:13: error: missing template arguments before �v�
	PG165_19.cpp:13: error: expected `;' before �v�
	PG165_19.cpp:13: error: �v� was not declared in this scope
	*/
	vector<int> v(5); for (int i=0; i<=v.size();++i); cout << "Success!\n";
 	return 0;
 }