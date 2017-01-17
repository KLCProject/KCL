#include "stdafx.h"
#include "ReaderCSV.h"

CReaderCSV::CReaderCSV()
{
}

CReaderCSV::~CReaderCSV()
{
}

bool CReaderCSV::Init(std::string _FileName)
{
	std::ifstream in;
	in.open(_FileName, std::ios::in);
	
	if (!in.is_open())
	{
		std::cout << "Not open file " << _FileName.c_str() << std::endl;
		return false;
	}
	
	while (in.good())
	{
		std::string value;

		std::getline(in, value, ',');
		
		std::cout << std::string(value.begin(), value.end());
	}

	in.close();

	return true;
}
