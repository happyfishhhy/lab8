#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 5 
#define MINO_I 0
#define MINO_L 1
#define MINO_O 2
#define MINO_S 3
#define MINO_Z 4

Mino * genMino()
{
	int mino_type;
	Mino * ptr;
				
	mino_type = random() % NUM_MINO;
	switch(mino_type)
	{
		case MINO_I:
			ptr = new MinoI[100000000];
			break;

		case MINO_L:
			ptr = new MinoL[100000000];
			break;

		case MINO_O:
			ptr = new MinoO[100000000];
			break;

		case MINO_S:
			ptr = new MinoS[100000000];
			break;

		case MINO_Z:
	   	    ptr = new MinoZ[100000000];
			break;
	}
		
	return ptr;
}
