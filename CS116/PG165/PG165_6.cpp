/*! Chris Miller (cmiller@fsdev.net), CS116
 *! Copyright (C) 2009 FSDEV.  Aw richts pitten by.
 *! Academic endorsement.  This code is not licensed for commercial use.
 *! 20090914, Pg. 165 # 6
 */
 
 #include <vector>
 #include <iostream>
 
 using namespace std;
 
 int main ( int argc, char * const argv[] ) {
 	//vector<int> v(10); v(5) = 7; if(v(5)!=7) cout << "Success!\n";
 	/*
 	cmiller-laptop% llvm-g++ -o pg165_6 PG165_6.cpp
	PG165_6.cpp: In function �int main(int, char* const*)�:
	PG165_6.cpp:13: error: no match for call to �(std::vector<int, std::allocator<int> >) (int)�
	PG165_6.cpp:13: error: no match for call to �(std::vector<int, std::allocator<int> >) (int)�
	*/
	vector<int> v(10); v[5] = 7; if(v[5]!=7) cout << "Success!\n";
 	return 0;
 }