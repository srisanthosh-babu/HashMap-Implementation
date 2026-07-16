#include"header.h"
int main(){
    HashMap*map=createHashMap();
    addHashMap(map,9,1);
    addHashMap(map,23,7);
    addHashMap(map,24,7);
    displayHashMap(map);
    removeHashMap(map,24);
    removeHashMap(map,23);
    displayHashMap(map);
    deleteHashMap(map);
    return 0;
}