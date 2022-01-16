#include <iostream>
#include <vector>
#include <string>
#include "functions.h"
#include "matrix.h"

using namespace std;

/////////////////////////////////////////////////////
// Main part of this program
// call step 1,
// call step 2,
// call step 3
//////////////////////////////////////////////////////
int main()
{
	std::string	datafolder("Input_files"); //Setting input file folder
	std::string outputfolder("Output_files"); //Setting output file folder

	met_microbe_coupling(datafolder, outputfolder); //Running step 1
	std::cout<<"coupling finished!"<<std::endl;
	node_node_ABC(datafolder, outputfolder); //Running step 2
	std::cout<<"node ABC finished!"<<std::endl;
	printWs(datafolder, outputfolder, 1.0, 1.0, 3e-3); //Running step 3
	std::cout<<"printing W's finished!"<<std::endl;
	
	std::cout<<"finished"<<std::endl;
	return 0;


}
