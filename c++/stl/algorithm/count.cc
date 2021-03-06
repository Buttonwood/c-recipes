// count algorithm example
#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    int mycount;

    // counting elements in array:
    int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};   // 8 elements
    mycount = static_cast<int>(std::count(myints, myints + 8, 10));
    std::cout << "10 appears " << mycount << " times.\n";

    // counting elements in container:
    std::vector<int> myvector(myints, myints + 8);
    mycount = static_cast<int>(count(myvector.begin(), myvector.end(), 20));
    std::cout << "20 appears " << mycount  << " times.\n";

  return 0;
}
