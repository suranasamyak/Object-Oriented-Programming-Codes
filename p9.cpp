#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
  map<string,int >population;
    population["Maharashtra"]=120;
    population["gujrat"]=80;
    population["karnataka"]=70;
    population["goa"]=15;
    string state;
    cout<<"Enter state  Name :";
    cin>>state;
    if(population.find(state) != population.end()){
      cout<<"population of"<<state<<"="<<population[state]<<"million";    
    }
    else{
      cout<<"State not found";  
    }
  return 0; 
  
}
