#include <iostream>
#include <cctype>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <stdio.h>
#include <string.h>
#include <map>

static int getDigit(const std::string& line, int idx)
{
	std::vector<std::string> strVector;

    strVector.push_back("zero");
    strVector.push_back("one");
    strVector.push_back("two");
    strVector.push_back("three");
    strVector.push_back("four");
    strVector.push_back("five");
    strVector.push_back("six");
    strVector.push_back("seven");
    strVector.push_back("eight");
    strVector.push_back("nine");

	if (isdigit(line[idx])) {
		return line[idx] - '0';
	}

	for (size_t i = 0; i < strVector.size(); i++) 
	{
		const auto& spelled = strVector[i];
		if (line.substr(idx, spelled.size()) == spelled) {
			return i;
		}
	}

	return -1;
}


int main() 
{
    std::ifstream inputFile("input_for_day_1.txt");
    std::string line;
	std::string newline;
	int result = 0;
	int flag = 0;
    while (std::getline(inputFile, line)) 
	{
		int firstnum = -1, secondnum = -1;
		for (size_t i = 0; i < line.size(); i++) 
		{
			int num = getDigit(line, i);
			if (num == -1) 
			{continue;};
			if (firstnum == -1) 
			{
				firstnum = num;
			}
			secondnum = num;
		}
        if (firstnum != -1) {
            int sum = firstnum * 10 + secondnum;
			result += sum;
        }

    }
    std::cout << "Result: " << result << std::endl;
	inputFile.close();
    return 0;
}
