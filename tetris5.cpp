#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.h"
using namespace std;
int main()
{
	Mino*mino_ptr;

	srandom(time(NULL));
	for(int i=0;i<10;++i)
	{
		mino_ptr=genMino();
		mino_ptr->paint();
		cout<<"\n"<<endl;
		delete mino_ptr;
	}
	return 0;
}
