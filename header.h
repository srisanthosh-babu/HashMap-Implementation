#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TABLE_SIZE 1009

typedef struct node{
    int key;
    int value;
    struct node*next;
}Node;

typedef struct{
    Node*table[TABLE_SIZE];
}HashMap;

HashMap* createHashMap();
int hash(int);
void addHashMap(HashMap*,int,int);
void removeHashMap(HashMap*,int);
bool hashMapContains(HashMap*,int);
void displayHashMap(HashMap*);
void deleteHashMap(HashMap*);


#endif