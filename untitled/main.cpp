#include <iostream>
#include <memory>

using namespace std;

int N = 5;

int main()
{
    int a = 5;
    auto some = make_unique<int>(5);
    cout << "Hello World!" << endl;

    int arr[5] = {1, 3, 5, 4, 5};

    for (int i = 1; i < 6; i++) {
        cout << arr[i] << endl;
    }

    return EXIT_SUCCESS;
}
