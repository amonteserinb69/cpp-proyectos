#include <iostream>
using namespace std;

int main()
{
int a = 8, b = 8, c = 12, result;

result = (a == b) && (c > b);
cout << "(a == b) && (c > b) is " << result << endl;

result = (a == b) && (c < b);
cout << "(a == b) && (c < b) is " << result << endl;

result = (a == b) || (c < b);
cout << "(a == b) || (c < b) is " << result << endl;

result = (a != b) || (c < b);
cout << "(a != b) || (c < b) is " << result << endl;

result = !(a != b);
cout << "!(a != b) is" << result << endl;

result = !(a == b);
cout << "!(a == b) is " << result << endl;

return 0;
}
