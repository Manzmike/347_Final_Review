using namespace std;
#include <iostream>
#include <iomanip>
#include <fstream>

int main(int argc,char * argv[])
{
    int x;
    int y;
    bool my_bool;

    cout<<"Preparation for final exam.\n\n";
    cout<<"Topic: C++ IO Streams\n\n";
    cout<<"Executing: \"Hello world!\\n<<endl;"<<endl;
    cout<<"Hello world!\n"<<endl;

    cout<<"Enter an integer for x (try using \"10\"):";
    cin>>x;
    cout<<"Value as entered:"<<x<<endl;
    cout<<"cout<<hex<<:"<<hex<<x<<endl;
    cout<<"Notice that once \"<<hex<<\" is executed, the variable prints as hex from then on\n";
    cout.clear();
    cout<<"Value Entered after <<hex<<:"<<x<<endl;
    cout<<"cout<<showpos<<:"<<showpos<<x<<endl;
    cout<<"cout<<uppercase<<:"<<uppercase<<x<<endl;
    cout<<"cout<<showbase<<x:"<<showbase<<x<<endl;

    cin.clear();
    cout<<"\nEnter a hex number (Try using \"AB\"):";
    cin>>hex>>y;

    cout<<"Value as entered:"<<y<<endl;
    cout<<"cout<<dec<<:"<<dec<<y<<endl;
    cout<<"Notice that once \"<<dec<<\" is executed, the variable prints as hex from then on\n";
    cout.clear();
    cout<<"Value Entered after <<dec<<:"<<dec<<y<<endl;
    cout<<"cout<<noshowbase<<noshowpos<<:"<<noshowbase<<noshowpos<<y<<endl;
    cout<<"cout<<uppercase<<:"<<uppercase<<y<<endl;
    cout<<"cout<<showbase<<:"<<showbase<<y<<endl;
    cout<<"cout.steprecision(3)<<fixed<<:"<<setprecision(3)<<fixed<<y<<endl;
    cout<<"Enter a boolean value (0 or 1):";
    cin>>my_bool;
    cout<<"\nValue entered:"<<my_bool<<endl;
    cout<<"<<boolalpha<<:"<<boolalpha<<my_bool<<endl;
    cout<<"\ncin does not have data type of range checking\ncin reads characters sequentially until whitespace os detected\n";
    cout<<"If you enter a data type that does not jive with the cin>>x variable, the program enters \"0\" for x and skips remaining cin commands\n";
}