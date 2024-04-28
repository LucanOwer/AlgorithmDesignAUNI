#include "Node.h"


Node::Node(int _data, Node* _link) {
    data = _data;
    link = _link;
}

void Node::set_data(int new_data) {
    data = new_data;
}

int Node::get_data() {
    return data;
}

void Node::set_link(Node* new_link) {
    link = new_link;
}

Node* Node::get_link() {
    return link;
}
