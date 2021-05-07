#ifndef linklist_h
#define linklist_h
#include"Arduino.h"
    class node
    {
      public:
        int data;
        node *next;
    };
    
    class linklist:public node {
    private:
        node *head,*tail;
    
        int nc;
    public:
    void begin();
        linked_list();
         
    
        void add_node(int n);
        
    
        int show_node(bool a);
         
    
        int search_node(int num,bool svs);
         
    
    void delete_node(int a);


    void Insert_node(int data, int n);


      
    };

#endif
