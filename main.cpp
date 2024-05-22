#include <iostream>
#include "documentmanager.h"

int main() {
    DocumentManager dm;
    dm.addDocument("Doc1", 1, 3);
    dm.addDocument("Doc2", 2, 2);
    dm.addPatron(101);
    dm.addPatron(102);

    std::cout << "Search for 'Doc1': " << dm.search("Doc1") << std::endl; // Output: 1
    std::cout << "Borrow Doc1 by Patron 101: " << (dm.borrowDocument(1, 101) ? "Success" : "Fail") << std::endl; // Output: Success
    std::cout << "Borrow Doc1 by Patron 102: " << (dm.borrowDocument(1, 102) ? "Success" : "Fail") << std::endl; // Output: Success
    std::cout << "Borrow Doc1 by Patron 103: " << (dm.borrowDocument(1, 103) ? "Success" : "Fail") << std::endl; // Output: Fail (invalid patronID)
    dm.returnDocument(1, 101);
    std::cout << "Return Doc1 by Patron 101" << std::endl;
    std::cout << "Borrow Doc1 by Patron 101: " << (dm.borrowDocument(1, 101) ? "Success" : "Fail") << std::endl; // Output: Success

    return 0;
}
