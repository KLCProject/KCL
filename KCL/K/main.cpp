#include "stdafx.h"

int main()
{
	CReaderCSV Reader;
	//Reader.Init("D:\\chrcra\\Documents\\KCL\\KCL\\GameData\\ActiveSkill1.csv");
	if (!Reader.Init("..\\GameData\\ActiveSkill1.csv"))
		Reader.Init("..\\..\\GameData\\ActiveSkill1.csv");

	std::cout << "- End Program -" << std::endl;
	getchar();
    return 0;
}