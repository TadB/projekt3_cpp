#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

class product{
protected:
    // string name;
    vector<queue<int>> Q; //wektor kolejek typu int - w zaleznosci od produktu moze byc kilka elementow potrzebnych do zlozenia
public:

    int pushResult(); //przekazuje wyprodukowany produkt do magazynu, typu int w celu zliczania ilosci wyprodukowanych sztuk
    queue<int>* addQueue(); //zwraca wskaznik na nowo dodana kolejke (dla stanowiska z elementami)
};


#endif