//============================================================================
// Name        : demo_linkedlist.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct data{
	int i=0;
	struct data *pd=0;
};

int main() {
	//***** allocate *****
	//create first entry in list
	//pnext used to traverse and add to the list
	//also to deallocate
	data *pnext = new data;

	//pstart will hold a pointer to beginning of list
	data *pstart=pnext;

	//add 9 more data structs to the list
	for(int i=1;i<10;i++){
		//add another struct to the list
		(*pnext).pd=new data;

		//set pnext to point to next struct
		pnext=(*pnext).pd;
	}

	//***** deallocate *****

	//delete from start to end
	pnext=pstart;

	//as long as pstart is not null
	while(pstart){
		//get a pointer to next data struct in list
		pnext = (*pstart).pd;

		//delete current data struct
		delete pstart;

		//set pstart  equal to next struct to delete
		pstart=pnext;
	}
}
