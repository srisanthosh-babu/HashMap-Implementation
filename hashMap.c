#include "header.h"

HashMap*createHashMap(){
    HashMap*obj=(HashMap*)malloc(sizeof(HashMap));
    if(obj==NULL){
        printf("\nMemory allocation failed\n");
        return NULL;
    }
    for(int i=0;i<TABLE_SIZE;i++){
        obj->table[i]=NULL;
    }
    printf("\nHashMap Created Successfully\n");
    return obj;
}

int hash(int key){
    return key % TABLE_SIZE;
}

void addHashMap(HashMap*obj,int key,int value){
    int index=hash(key);
    Node*cur=obj->table[index];
    if(hashMapContains(obj,key)){
        printf("\nKey %d already exists duplicates are not allowed\n",key);
        return;
    }
    Node*newNode=(Node*)malloc(sizeof(Node));
    newNode->key=key;
    newNode->value=value;
    newNode->next=obj->table[index];
    obj->table[index]=newNode;
    printf("\nKey %d and value %d added sucessfully\n",key,value);    
}

void removeHashMap(HashMap*obj,int key){
    if(!(hashMapContains(obj,key))){
        printf("\n No key found in the map\n");
        return;
    }
    int index=hash(key);
    Node*cur=obj->table[index],*prev=NULL;
    while(cur){
        if(cur->key==key){
            if(prev){
                prev->next=cur->next;
            }else{
                obj->table[index]=cur->next;
            }
            printf("\nElement Deleted from map successfully\n");
            free(cur);
            return;
        }
        prev=cur;
        cur=cur->next;
    }
}

bool hashMapContains(HashMap*obj,int key){
    int index=hash(key);
    Node*cur=obj->table[index];
    while(cur){
        if(cur->key==key){
            return true;
        }
        cur=cur->next;
    }
    return false;
}

void displayHashMap(HashMap*obj){
    for(int i=0;i<TABLE_SIZE;i++){
        Node*cur=obj->table[i];
        while(cur){
            printf("\nKey : %d\tValue : %d\n",cur->key,cur->value);
            cur=cur->next;
        }
    }
}

void deleteHashMap(HashMap*obj){
    for(int i=0;i<TABLE_SIZE;i++){
        Node*cur=obj->table[i];
        while(cur){
            Node*temp=cur;
            cur=cur->next;
            free(temp);
        }
    }
    free(obj);
    printf("\nHashMap memory cleared successfully\n");
}