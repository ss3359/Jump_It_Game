//
//  Pyrenees.cpp
//  DogProject
//
//  Created by Owner on 5/13/24.
//

#include "Pyrenees.hpp"
#include "Collie.hpp"
#include <iostream>
#include <thread>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <time.h>
#include <stdio.h>
#include "Maltese.hpp"
#include "Bloodhound.hpp"
#include "CockerSpaniel.hpp"
#include "Berneese.hpp"
#include "Sheepdog.hpp"
using namespace std;















//Trees Data Set:

//
//struct Node{
//    int data;
//    Node *NodeTwo;
//    Node *NodeThree;
//};
//
//Node* CreateNewNode(int data){
//    
//    Node *NewNode= new Node();
//    NewNode->data=data;
//    
//    NewNode->NodeTwo=NewNode->NodeThree=nullptr;
//    
//    return NewNode;
//}
//
//void PrintTheNode(Node* n){
//    
//    if(n==nullptr){
//        return;
//    }
//    PrintTheNode(n->NodeTwo);
//    PrintTheNode(n->NodeThree);
//    cout<<n->data<<endl;
//    
//}
//
//int main(){
//    
//    Node *Root=CreateNewNode(1);
//    Root->NodeTwo=CreateNewNode(2);
//    Root->NodeThree=CreateNewNode(3);
//    Root->NodeTwo->NodeTwo=CreateNewNode(6);
//    Root->NodeTwo->NodeThree=CreateNewNode(7);
//
//    Root->NodeThree->NodeTwo=CreateNewNode(4);
//    Root->NodeThree->NodeThree=CreateNewNode(5);
//    Root->NodeTwo->NodeThree->NodeThree=CreateNewNode(8);
//
//     
//    PrintTheNode(Root);
//    
//    
//    return 0;
//}
// 



//Sorting Algorithm:
//
//
//
//class Tree{
//    
//public:
//    int value;
//    Tree* NextNode;
//    
//};
//
//void PrintElements(Tree* t1){
//    while(t1 !=NULL){
//        cout<<t1->value<<"\t";
//        t1=t1->NextNode;
//    }
//}
//
//
//
//
//int main(){
//    int length=5;
//    int MyList[5]={5,10,4,1,20};
//    
//    
//    //Before The Sorting Begins:
//    
//    for(int i=0; i<length; i++){
//        cout<<MyList[i]<<"\t";
//    }
//    
//    
//    for(int i=0; i<length; i++){
//        for(int j=i+1; j<length; j++){
//            if(MyList[i]>MyList[j]){
//                int temp = MyList[i];
//                MyList[i]=MyList[j];
//                MyList[j]=temp;
//            }
//        }
//    }
//    
//    //After The Sorting:
//    cout<<"\n\n";
//    
//    for(int i=0; i<length; i++){
//        cout<<MyList[i]<<"\t";
//    }
//    return 0;
