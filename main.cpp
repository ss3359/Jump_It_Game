//
//  main.cpp
//  DogProject
//
//  Created by Owner on 3/14/24.
//

#include <iostream>
#include <thread>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <time.h>
#include "Maltese.hpp"
#include "Bloodhound.hpp"
#include "CockerSpaniel.hpp"
#include "Berneese.hpp"
#include "Sheepdog.hpp"
#include "Collie.hpp"
#include "Pyrenees.hpp"
using namespace std;


template<class T>
void Add(T number1, T number2){
    
    return number1+number2;
}

int minimum(int a, int b){
    if (a<b)
        return a;
    else
        return b;
}
int JumpIt(int numbers[],int step, int length, int sum){
    int sum1,sum2;
    if(step>length){
        return 0;
    }
    else if(step==length){
        return numbers[step-1];
    }
        sum1=numbers[step]+JumpIt(numbers, step+1, length,sum);
        sum2=numbers[step]+JumpIt(numbers, step+2, length,sum);
        
    
        sum += minimum(sum1, sum2);
        return sum;
    
}
//        ,sum);
//    
//    return sum;
//}


int main(){
    srand(time(NULL));
    int length=6, sum=0,step=0;
    int numbers[6];
    
    cout<<"Array: ";
    for(int i=0; i<length; i++){
        if(i==0)
            numbers[i]=0;
        else
            numbers[i]=1+rand()%100;
        
        cout<<numbers[i]<<"\t";
    }
    
    
    cout<<"Sum Is: "<<JumpIt(numbers,step,length,sum)<<endl;
    
    
    return 0;
}
    
    
    
    
    




/*
 Excess Code:
 
 
 
 
 class Tree{
     
 public:
     int value;
     Tree* NextNode;
     
 };

 void PrintElements(Tree* t1){
     while(t1 !=NULL){
         cout<<t1->value<<"\t";
         t1=t1->NextNode;
     }
 }




 int main(){
     int length=5;
     int MyList[5]={5,10,4,1,20};
     
     
     //Before The Sorting Begins:
     
     for(int i=0; i<length; i++){
         cout<<MyList[i]<<"\t";
     }
     
     
     for(int i=0; i<length; i++){
         for(int j=i+1; j<length; j++){
             if(MyList[i]>MyList[j]){
                 int temp = MyList[i];
                 MyList[i]=MyList[j];
                 MyList[j]=temp;
             }
         }
     }
     
     //After The Sorting:
     cout<<"\n\n";
     
     for(int i=0; i<length; i++){
         cout<<MyList[i]<<"\t";
     }
     return 0;
    Tree* first=new Tree();
    Tree* second=new Tree();
    Tree* third=new Tree();
    
    first->value=3;
    second->value=4;
    third->value=5;

    
    second->NextNode=first;
    third->NextNode=second;
    first->NextNode=NULL;
    
    PrintElements(first);

 
 
 Blackjack b;
 double Money=100.0;
 double bet;
 
 while(Money>0){
     cout<<"Place Your Bets! "<<endl;
     cin>>bet;
     
     Money-=bet;
     cout<<"Available Balance: "<<Money<<endl;
     b.PlayTheGame(bet, b.PlayerTotal, b.DealerTotal);
 }
 
 
 
 int days = 100;
 
 Person p1("Stephen", "Sivetts", days);
 srand(time(NULL));

 p1.update(days, p1);
 
 
 
 
 TicTacToe t;
 char board[3][3];
 bool IsMatchVertical=false, IsMatchHorizontal=false, IsMatchDiagonal=false;

 t.SetUpBoard(board);
 t.PlayGame(board,IsMatchVertical,IsMatchHorizontal, IsMatchDiagonal);
 
 
 
 
 
 void SetUpHasVisitedBoard(bool HasVisited[4][4]){
     
     for(int i=0; i<4; i++){
         for(int j=0; j<4; j++){
             HasVisited[i][j]=false;
         }
     }
     for(int i=0; i<4; i++){
         for(int j=0; j<4; j++){
             cout<<HasVisited[i][j]<<"\t";
         }
         cout<<endl;
     }
     
     
 }
 
  Boggle b;
  char board[4][4];
  bool HasVisited[4][4];

  string words[10]={"GOLF", "WOLF", "PALM", "TREE", "BALL", "FROG", "MOLE", "DULL", "LOVE", "FUZZ"};

  b.SetUpBoard(board);
  
  cout<<endl;

  
   
  for(string word:words){
      SetUpHasVisitedBoard(HasVisited);
      string VisitedWord=b.CheckWordInBoard(b.board, HasVisited, word);
      cout<<VisitedWord<<"\n";
  }

 
 
 void  PrintWord(string list[4], int length){
     string word=list[length];
     
     if(length==3){
         cout<<word<<endl;
     }
     else{
         
         PrintWord(list, length+1);
         cout<<word<<endl;
     }
 }
 
 
 //This is the Lewis Caroll Letter Ladder Puzzle Program.

 int main(){
     WordLadder w;
     ifstream myFile("/Users/owner/Downloads/words.txt",ios::in);
     
 //    vector<string> words=w.GetWordsFromFile(myFile);
     vector<string> words={"hot","dot","dog","lot","log","cog"};
     
     string word1, word2;

     cout<<"Enter First Word: "<<endl;
     cin>>word1;
     cout<<"Enter Second Word: "<<endl;
     cin>>word2;
     
     w.LetPlayWordLadder(word1, word2, words);
     
     
     return 0;
        
     }
     



 //    for(string word:words)
 //        cout<<word<<endl;
 
 struct CityInfo{
     
     string city;
     double population;
     double latitude, longitude;
 };

 void PrintCity(map<string, double> List){
     
     for(auto city:List){
         cout<<"City: "<<city.first<<" Population: "<<city.second<<"\n\n";
         this_thread::sleep_for(2s);
     }
         
 }

 int main(){
        
    
     

     map<string,double> CityList={
         {"Arvada", 123436},
         {"Denver", 711463},
         {"Loveland", 110321}

     };
     
     map<string,double> MainCityList={
         {"Orlando", 123437},
         {"Key West", 711465},
         {"Tampa", 110322}

     };
     
     thread t(PrintCity,CityList);
     t.join();
     
     for(auto city:MainCityList){
         cout<<"City: "<<city.first<<" Population: "<<city.second<<"\n\n";
         this_thread::sleep_for(2s);
     }
     
 
 //for loop for array.
 int numbers[4]={0,1,2,3};
//    for(auto number:numbers)
//        cout<<"Number: "<<number<<endl;
//
 //Function Template
 //template<class T>
 //T AddNumbers (T x, T y){
 //
 //
 //    return x+y;
 //}

 */
//
