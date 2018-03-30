#include "hello_interface.h"
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
