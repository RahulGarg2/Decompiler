#include <fstream>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>




std::string removeComments(std::string prgm)
{
    int n = prgm.length();
    std::string res;
 
    // Flags to indicate that single line and multpile line comments
    // have started or not.
    bool cmt = false;
   
 
    // Traverse the given program
    for (int i=0; i<n; i++)
    {
        // If single line comment flag is on, then check for end of it
        if (cmt == true && prgm[i] == '\n')
            cmt = false;
 
        // If this character is in a comment, ignore it
        else if (cmt)
            continue;
 
        // Check for beginning of comments and set the approproate flags
        else if (prgm[i] == '@')
            cmt = true, i++;
        
        // If current character is a non-comment character, append it to res
        else  res += prgm[i];
    }
    return res;
}



int main()
{

	std::ifstream fin("filename.txt");      
	std::string str((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());  //converting the text file to multiline string
	str=removeComments(str);
	str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());      // remove any blank lines 
	std::cout<<str;






	return 0;
}