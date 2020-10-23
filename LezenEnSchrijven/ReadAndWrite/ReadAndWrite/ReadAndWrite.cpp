#include <iostream>
#include <fstream>
#include <string>

#define inReverseFile "[yourFilePath]/test.txt"
#define outReverseFile "[yourFilePath]/test2.txt"

#define inCombineFile1 "[yourFilePath]/inCombineFile1.txt"
#define inCombineFile2 "[yourFilePath]/inCombineFile2.txt"
#define outCombineFile "[yourFilePath]/outCombineFile.txt"

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

/// <summary>
/// Read a file, and write it to an output file in reverse. I don't know why, but if there's newlines in the original file, it puts two newlines in the output.
/// </summary>
/// <param name="in"></param>
/// <param name="out"></param>
void reverseFile(std::ifstream& in, std::ofstream& out)
{
	char t;
	unsigned int i = 1;

	unsigned int length = 0;

	in.seekg(0, std::ios_base::end);
	length = in.tellg();

	std::cout << length << std::endl;

	in.seekg(length - i);

	while (in.get(t))
	{
		out.put(t);
		i++;
		in.seekg(length-i);
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

