/*! Chris Miller (cmiller@fsdev.net), CS116
 *! Copyright (C) 2009 FSDEV.  Aw richts pitten by.
 *! Academic endorsement.  This code is not licensed for commercial use.
 *! 20090914, Pg. 165 # 25
 */
 
 #include <iostream>
 
 using namespace std;
 
 int main ( int argc, char * const argv[] ) {
 	#define cin cout
 	cin << "Success!\n";
 	#undef cin
 	/*
 	cmiller-laptop% llvm-g++ -o a.out PG165_25.cpp
	PG165_25.cpp: In function �int main(int, char* const*)�:
	PG165_25.cpp:12: error: no match for �operator<<� in �std::cin << "Success!\012"�
	*/
 	return 0;
 }