#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include <cstring> 

// std::vector<std::string> split(const std::string& line, char del)
// {
//     std::vector<std::string> tokens;
//     std::istringstream stream(line);
//     std::string token;

//     while (std::getline(stream, token, del))
//         tokens.push_back(token);
//     return tokens;
// }

int findNum(const std::vector<std::string>& tokens)
{
    int maxRed = -1;
    int maxGreen = -1;
    int maxBlue = -1;
    for (const auto& token : tokens)
    {
        std::istringstream streamTok(token);
        std::string word;
		std::string prev;
        int redNumber = 0;
        int greenNumber = 0;
        int blueNumber = 0;
        while (streamTok >> word)
        {
            if (strncmp(word.c_str(), "red", 3) == 0) 
                redNumber = std::stoi(prev);
            else if (strncmp(word.c_str(), "green", 5) == 0) 
                greenNumber = std::stoi(prev);
            else if (strncmp(word.c_str(), "blue", 4) == 0) 
                blueNumber = std::stoi(prev);
			prev = word;
		}
		maxRed = std::max(maxRed, redNumber);
		maxBlue = std::max(maxBlue, blueNumber);
		maxGreen = std::max(maxGreen, greenNumber);
    }
	return (maxRed * maxGreen * maxBlue);
}

int main()
{
	std::ifstream inFile("input_for_day_2.txt");
	std::string line;
	char delimeter = ';';
	int res = 0;
	while(std::getline(inFile, line))
	{
		std::vector<std::string> tokens;
		std::istringstream stream(line);
		std::string token;
		while (std::getline(stream, token, delimeter))
			tokens.push_back(token);
		res += findNum(tokens);
	}
	std::cout<< "Result: " << res << std::endl;
	return 0;
}