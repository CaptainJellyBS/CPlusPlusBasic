#include <iostream>
#include <fstream>
#include <string>

#define inReverseFile "E:/Documents/HKU/2021(Year2)/CPlusPlusBasic/LezenEnSchrijven/ReadAndWrite/ReadAndWrite/test.txt"
#define outReverseFile "E:/Documents/HKU/2021(Year2)/CPlusPlusBasic/LezenEnSchrijven/ReadAndWrite/ReadAndWrite/test2.txt"

#define inCombineFile1 "E:/Documents/HKU/2021(Year2)/CPlusPlusBasic/LezenEnSchrijven/ReadAndWrite/ReadAndWrite/inCombineFile1.txt"
#define inCombineFile2 "E:/Documents/HKU/2021(Year2)/CPlusPlusBasic/LezenEnSchrijven/ReadAndWrite/ReadAndWrite/inCombineFile2.txt"
#define outCombineFile "E:/Documents/HKU/2021(Year2)/CPlusPlusBasic/LezenEnSchrijven/ReadAndWrite/ReadAndWrite/outCombineFile.txt"

void reverseFile(std::ifstream& in, std::ofstream& out);
void combineFile(std::ifstream& in1, std::ifstream& in2, std::ofstream& out);


int main()
{
	std::ifstream inStream1;
	std::ifstream inStream2;
	std::ofstream outStream;

	inStream1.open(inReverseFile);
	outStream.open(outReverseFile);

	if (!inStream1 || !outStream)
	{
		std::cout << "One or more of the reverse files do not exist" << std::endl;
		exit(1);
	}	

	reverseFile(inStream1, outStream);

	inStream1.close(); 
	outStream.close();

	inStream1.open(inCombineFile1);
	inStream2.open(inCombineFile2);
	outStream.open(outCombineFile);

	if (!inStream1 || !inStream2 || !outStream)
	{
		std::cout << "One or more of the combine files do not exist" << std::endl;
	}

	combineFile(inStream1, inStream2, outStream);

	inStream1.close();
	inStream2.close();
	outStream.close();
}

void reverseFile(std::ifstream& in, std::ofstream& out)
{
	char t;
	while (in.get(t))
	{
		out.put(t);
	}
}

/// <summary>
/// Combines two input files and writes them to an output file. 
/// </summary>
/// <param name="in1"></param>
/// <param name="in2"></param>
/// <param name="out"></param>
void combineFile(std::ifstream& in1, std::ifstream& in2, std::ofstream& out)
{
	char tempStr[256];

	//Weird construction with the ifs inside the while. 
	//However, this ensures that when two files are combined that have a different amount of lines, 
	//Both files are fully parsed into the new file.
	while (!in1.eof() || !in2.eof())
	{
		if(!in1.eof()) 
		{
			in1.getline(tempStr, 256);
			out.write(tempStr, strlen(tempStr));
			out << std::endl;
		}

		if (!in2.eof())
		{
			in2.getline(tempStr, 256);
			out.write(tempStr, strlen(tempStr));
			out << std::endl;
		}
	}
}

