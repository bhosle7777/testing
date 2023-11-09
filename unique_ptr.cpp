#include <memory>
using namespace std;

void my_func()
{
    unique_ptr<int> ptr(new int(13));
    int x = 45;
    // ...
    // create a new unique_ptr ptr2 and move the ownership of ptr to ptr2
    unique_ptr<int> ptr2 = move(ptr);
    // ptr is now empty
    if (x == 45)
        return; // no memory leak anymore!
    // ...
    // you don't have to delete the pointer variable ptr.
    // the memory will automatically be freed after the return statement.
}

int main()
{
    my_func();
    return 0;
}

