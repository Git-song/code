#include "stdio.h"

#define SLEN 3
#define NUM  4

struct type 
{
	char name[SLEN];
	int  id;
	
};
int main(int argc,char *argv [])
{
	struct type person[NUM];
	for(int i=0;i<3;i++)
	{
	
		person[i].name[0]=person[i].name[1]=person[i].name[2]=0;
		person[i].name[i]='A'+i;
		person[i].id=i;

	}
	for(int i=0;i<3;i++)
	{
		printf("person[%d]`name is %3s \n",person[i].id,person[i].name);
	}
	getchar();
	return 0;
}

