#include<bits/stdc++.h>
using namespace std;
int main(){

    
    list<string>mylist;
    

     while (true)
     {
         string str;
        cin>>str;
        if(str == "end") break;
        mylist.push_back(str);
    }
     
    auto it=mylist.begin();
     int q;
     cin>>q;
     while (q--)
     {
        
         string visit;
         cin>>visit;

         if(visit == "visit"){
          string value;
          cin>>value;

          auto find_visited=find(mylist.begin(),mylist.end(),value);

          if(find_visited !=  mylist.end()){

            it=find_visited;
            cout<<*it<<endl;

          }
          else{
            cout<<"Not Available"<<endl;
          }  
          
        }



        else if(visit == "next"){
                it++;
            if( it != mylist.end()){
                
                cout<<*it<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
                it--;
            }
        }



        else if(visit == "prev"){
            if(it != mylist.begin()){
                 it--;
                cout<<*it<<endl;
               
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }
     } 
    return 0;
}