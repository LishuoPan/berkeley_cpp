#include <iostream>         // allow use of cin cout
#include <string>           // allow use of string

// function declaration
void input_name();          // declare input_name function
void print_name();    // declare input_name function
// variable declaration
std::string name;

void input_name()
{
    using std::cout; using std::cin;
    cout << "Please enter your first name:" << '\n';
    cin >> name;
}
void print_name()
{
    using std::cout; using std::cin;
    cout << name << '\n';

}

int main()
{
    input_name();
    print_name();
    return 0;
}
