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
        {
            cmt = false;
        	
 		}
        // If this character is in a comment, ignore it
        else if (cmt)
            continue;
 
        // Check for beginning of comments and set the approproate flags
        else if (prgm[i] == '@')
            cmt = true;
        
        // If current character is a non-comment character, append it to res
        else  res += prgm[i];
    }
    return res;
}



int main()
{

	std::ifstream fin;
	fin.open("filename.txt"); 
	std::string line;
	std::string str;
	while(getline(fin,line))
	{
		if(!line.empty())
		{
			str+=line;
			str+='\n';
		}
	}
	//std::cout<<str;
	str=removeComments(str);
	
	
	size_t pos;
	while( ( pos = str.find( "  " ) )!=std::string::npos )
    	str = str.replace( pos, 2, " " );


    std::cout<<str<<"\n";
    fin.close();
	return 0;
}