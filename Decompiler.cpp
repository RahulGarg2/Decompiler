#include<bits/stdc++.h>


using namespace std;


// Function prototypes
string removeComments(string);
string removeblanklines(string);
void preProcessFile();
void tokenizeProgram();
vector<string> cleanUpTokens(vector<string>);
void writeTokensToFile();

// Global Variables
vector<vector<string> > Program;

string removeComments(string prgm)
{
    int n = prgm.length();
    string res;
 
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
            res+=prgm[i];
        	
 		}
        // If this character is in a comment, ignore it
        else if (cmt)
            continue;
 
        // Check for beginning of comments and set the approproate flags
        else if (prgm[i] == '@')
            cmt = true;
        
        // If current character is a non-comment character, append it to res
        else  
        {       	
        	res += prgm[i];
        	if(prgm[i] == ':')          // remove multiple instructions from same line
        	{
        		res += '\n';
        	}
    	}
    }
    return res;
}

string removeblanklines(string prgm)
{
	int n = prgm.length();
    string res;
  
    // Traverse the given program
    for (int i=0; i<n; i++)
    {
    	if(prgm[i]=='\n' && prgm[i]==prgm[i-1])
    	{
    		continue;
    	}
    	else
    	{
    		res+=prgm[i];
    	}
    }
    return res;
}


void preProcessFile(){
	ifstream fin;
	fin.open("filename.txt"); 
	string line;
	string str;
	while(getline(fin,line))
	{
		if(!line.empty())
		{
			str+=line;
			str+='\n';
		}
	}
	
	str=removeComments(str);
	
	// remove multiple spaces
	size_t pos;
	while( ( pos = str.find( "  " ) )!=std::string::npos )
    	str = str.replace( pos, 2, " " );

    // remove extra blank lines
    str=removeblanklines(str);

	//str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());

    ofstream fout;
    fout.open("filename.c");
    fout<<str<<endl;
    fin.close();
    fout.close();
}

vector<string> cleanUpTokens(vector<string> instruction){
	for(int i=0;i<instruction.size();i++){			// Iterating over the tokens
		instruction[i].erase(remove(instruction[i].begin(), instruction[i].end(), ' '), instruction[i].end());	// Remove white spaces
		instruction[i].erase(remove(instruction[i].begin(), instruction[i].end(), ','), instruction[i].end());	// Remove commas
		instruction[i].erase(remove(instruction[i].begin(), instruction[i].end(), '\t'), instruction[i].end());	// Remove tabs
		instruction[i].erase(remove(instruction[i].begin(), instruction[i].end(), '\n'), instruction[i].end());	// Remove new lines
	}
	for(int i=instruction.size()-1;i>=0;i--){																	// Remove empty tokens
		if(instruction[i].empty()){																				
			instruction.erase(instruction.begin()+i);
		}
	}
	if(instruction.size()==1){																					// Marking labels
		if(instruction[0][instruction[0].length()-1]==':'){
			string labelHeader = "$LABEL$";
			instruction.insert(instruction.begin(),labelHeader);
			instruction[1].erase(remove(instruction[1].begin(), instruction[1].end(), ':'), instruction[1].end());
		}
	}	
	return instruction;
}

void writeTokensToFile(){
	ofstream fout;
	fout.open("filename.c");
	for(int i=0;i<Program.size();i++){
		for(int j=0;j<Program[i].size();j++){
			fout<<Program[i][j]<<";";
		}
		fout<<endl;
	}
	fout.close();
}

void tokenizeProgram(){
	string line;
	ifstream fin;
	fin.open("filename.c");

	// Reading file with space as delimiter
	while(getline(fin, line))		
	{
		stringstream ss(line);
		istream_iterator<string> begin(ss);
		istream_iterator<string> end;
		vector<string> splitLine(begin, end);		// Splitting instruction by space
		splitLine = cleanUpTokens(splitLine);		// cleaning up extra spaces, tabs, newlines and commas
		Program.push_back(splitLine);
	}
	writeTokensToFile();
}

int main()
{
	preProcessFile();			// Phase 1 - Implemented by Rahul Garg	
	tokenizeProgram();			// Phase 2 - Implemented by Nihesh Anderson
	return 0;
}