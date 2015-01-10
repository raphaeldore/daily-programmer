#include <iostream>
#include <string>
#include <fstream>

/*

Easy - Challenge - 1
https://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/

create a program that will ask the users name, age, and reddit username. have it tell them the information back, in the format:
    
	your name is (blank), you are (blank) years old, and your username is (blank)

for extra credit, have the program log this information in a file to be accessed later.

*/

int main()
{
	std::string name;
	std::string age;
	std::string redditUsername;

	std::cout << "Hello, what is your name? What is your age? What is your reddit username?" << std::endl;
	std::cin >> name >> age >> redditUsername;
	
	std::cout << "Name: " + name + " | Age: " + age + " | Reddit Username: " + redditUsername << std::endl;

	std::ofstream outfile("userInfo.txt");

	outfile << "Name: " + name << std::endl;
	outfile << "Age: " + age << std::endl;
	outfile << "Reddit Username: " + redditUsername << std::endl;

	outfile.close();

	return 0;
}