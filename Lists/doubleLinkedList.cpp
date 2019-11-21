/*
    Implementing a Double Linked List with operations.

    1) Insert element before link (add a link before an element)
    2) Add element after link (add a link after an element)
    3) Erase element (remove a link)
    4) Find element (find a link with a string value)
    5) Advacne list (move n elements)
    6) Print all links in list

*/

#include <string>
#include <utility>
#include <iostream>

using namespace std;


struct Link {

    string value;
    Link * prev;
    Link * succ;
    Link(const string &v, Link* p = nullptr, Link *s = nullptr) : value{v}, prev{p}, succ{s}{} 

};

// Insert before an element
Link * insert(Link *p, Link *n){       // p = previous, n = new

    if (p == nullptr) return n;
    if (n == nullptr) return p;

    n->succ = p;
    if(p->prev) p->prev->succ = n;
    n->prev=p->prev;
    p->prev = n;
    return n;
}

// Add after an element
Link * add(Link *p, Link *n){
   
    if (p == nullptr) return n;
    if (n == nullptr) return p;

    n->prev = p;
    if(p->succ) p->succ->prev = n;
    p->succ = n;
    n->succ = p->succ;
    return n;

}

// Erase element from list
Link * erase(Link *p){
    
    if (p == nullptr) return nullptr;

    if(p->prev) p->prev->succ = p->succ;
    if(p->succ) p->succ->prev = p->prev;
    return p->succ;

}

Link * find(Link *p, const string & s){
    
    while(p){
        if(p->value == s) return p;
        p = p->succ;
    }
   return nullptr;
}

Link * advance(Link * p, int n){

    if (p == nullptr) return nullptr;

    if(n>0){
        while(n--){
            if (p->succ == nullptr) return nullptr;
            p = p->succ;
        }
    }else if(n<0){
        while(n++){
            if(p->prev == nullptr) return nullptr;
            p = p->prev;
        }
    }
    return p;    

}

void printList(Link *p){
    cout << "\n";
    cout << "{";
    while(p){
        cout << p->value;
        if(p=p->succ) cout << ",";

    }
    cout << "}";
    cout << "\n\n";
}




int main(){

    Link * norse_gods = new Link{"Thor"};
    norse_gods = insert(norse_gods,new Link{"Odin"});
    norse_gods = insert(norse_gods,new Link{"Fria"});
    norse_gods = insert(norse_gods,new Link{"Loki"});


    // Link *p = find(norse_gods, "Thor");

    printList(norse_gods);

    return 0;
}

















