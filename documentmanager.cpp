#include "documentmanager.h"

Document::Document(const std::string& name, int id, int license_limit)
    : name(name), id(id), license_limit(license_limit), current_borrowed(0) {}

void DocumentManager::addDocument(const std::string& name, int id, int license_limit) {
    Document doc(name, id, license_limit);
    documentsById[id] = doc;
    documentsByName[name] = id; //self explantory.
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID); //Adds a patron of ID: (patronID).
}

int DocumentManager::search(const std::string& name) {
    auto it = documentsByName.find(name);
    if (it != documentsByName.end()) { 
        return it->second; // returns the second value of the map (in this case the document ID).
    }
    return 0; // Document isn't found.
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.find(patronID) == patrons.end()) {
        return false; // Invalid patronID
    }

    auto it = documentsById.find(docid);
    if (it == documentsById.end()) {
        return false; // Invalid document ID
    }

    Document& doc = it->second;
    if (doc.current_borrowed < doc.license_limit) {
        doc.current_borrowed++;
        borrowedDocuments[docid].insert(patronID);
        return true;
    }
    return false; // License limit reached
}

void DocumentManager::returnDocument(int docid, int patronID) {
    auto it = borrowedDocuments.find(docid); //finds all the patrons that have borrowed the document.
    if (it != borrowedDocuments.end() && it->second.find(patronID) != it->second.end()) { //checks if any patron has it borrowed currently.
        documentsById[docid].current_borrowed--; //removes one copy of the document from the total borrowed.
        it->second.erase(patronID); //erases the patron ID from the borrowed map.
        if (it->second.empty()) {
            borrowedDocuments.erase(it); //removes the borrowed document from the map (if no other patron has borrowed it)
        }
    }
}
