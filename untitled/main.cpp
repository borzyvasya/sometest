#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int a = 5;
    auto some = make_unique<int>(5);
    cout << "Hello World!" << endl;

    return EXIT_SUCCESS;
}
