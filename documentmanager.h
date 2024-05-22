#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <unordered_map>
#include <unordered_set>

struct Document {
    std::string name;
    int id;
    int license_limit;
    int current_borrowed;
    Document(const std::string& name, int id, int license_limit);
    Document() : id(0), license_limit(0), current_borrowed(0) {}
};

class DocumentManager {
private:
    std::unordered_map<int, Document> documentsById;
    std::unordered_map<std::string, int> documentsByName;
    std::unordered_set<int> patrons;
    std::unordered_map<int, std::unordered_set<int>> borrowedDocuments;

    //Unordered maps are the best choice, as they have a time complexity og O(1) (most efficent).
    //Unordered set is better for the container of patrons then an array, because each patron is unique,
    // but we don't care what order they are placed in the container.

public:
    void addDocument(const std::string& name, int id, int license_limit);
    void addPatron(int patronID);
    int search(const std::string& name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif // DOCUMENTMANAGER_H
