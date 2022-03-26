#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

std::string readToString(const std::ifstream& input)
{
    std::ostringstream sstream;

    sstream << input.rdbuf();

    return sstream.str();
}

void replace(std::string& string, const std::string& str1, const std::string& str2)
{
    std::size_t str1_position = string.find(str1);

    while (str1_position != std::string::npos)
    {
        string.erase(str1_position, str1.length());
        string.insert(str1_position, str2);

        str1_position = string.find(str1);
    };
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << argv[0] << ": wrong number of arguments" << std::endl;

        return 1;
    }

    std::string inputPath = argv[1];
    std::string outputPath = inputPath + ".repalce";

    std::ifstream input(inputPath.c_str());

    if (!input.is_open())
    {
        std::cerr << argv[0] << ": " << argv[1] << ": unable to open file" << std::endl;

        return 1;
    }

    std::ofstream output(outputPath.c_str());

    if (!output.is_open())
    {
        std::cerr << argv[0] << ": " << argv[1] << ": unable to open file" << std::endl;

        return 1;
    }

    std::string content = readToString(input);
    input.close();

    replace(content, argv[2], argv[3]);

    output << content;

    output.close();
}
