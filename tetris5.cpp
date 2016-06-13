#include<iostream>
#include<cstdlib>
#include<ctime>
#include "genMino.h"

using namespace std;

int main()
{
	try
	{
		srand(time(NULL));
		Mino *mino_ptr;
		for(int i=0; i<=99; ++i)
			mino_ptr = genMino();
	}	
	
	catch(bad_alloc&memoryAlloc)
	{
		cerr<<"Exception happened"<<":"<<memoryAlloc.what()<<endl;
	}
	
	return 0;
}
