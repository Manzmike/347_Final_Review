using namespace std;
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#define max_input 100
int main(int argc,char * argv[])
{
    
    int x;
    int y;
    int z[max_input];
    int i = 0;
    fstream infile;
    fstream outfile;
    
    string outfile_string = "output_test.txt";
    string infile_string = argv[argc-1];

    infile.open(argv[1], fstream::in);
    if(!infile.is_open()) 
    {
        cout << "\nERROR Could not open input file " << argv[argc - 1] << "!\n";
        cout << "Usage: prog1 <test.txt>\n";
        return(-1);
    }

    while(!infile.eof())
    {
        infile>>hex>>x;
        if(!infile.eof())
            cout<<"Read in:"<<x<<endl;
            z[i++] = x;
    }
    infile.close();
    

    outfile.open(outfile_string, fstream::out);
    if(!outfile.is_open()) 
    {
        cout << "\nERROR Could not open input file " << argv[argc - 1] << "!\n";
        cout << "Usage: prog1 <test.txt>\n";
        return(-1);
    }

    while(i != 0)
    {
        outfile>>z[i-1];
        cout<<"Writing to file:"<<z[--i]<<endl;
    }
    outfile.close();
}