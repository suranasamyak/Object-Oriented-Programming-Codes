//Design and implement a generic Library Management System in C++ using Class  Templates.




#include<iostream>
using namespace std;

template<class T>
class Library{
  T bookid;
  string bookname;
  string author;
  public:
    void accept(){
      cout<<"\n Enter the Book Name: ";
      cin>>bookname;
      
      cout<<"\n Enter author name:";
      cin>>author;
      
    }
    void display(){
      cout<<"\n-----Book Details-----";
      cout<<"\n Book ID:"<<bookid;
      cout<<"\n Book Name:"<<bookname;
      cout<<"\n Book Author Name"<<author;
    }
};
int main(){
  Library<int>l;
  l.accept();
  l.display();
  return 0;
}
