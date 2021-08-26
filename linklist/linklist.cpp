#include"Arduino.h"
#include"linklist.h"
void linklist::begin() {
Serial.begin(9600);  
}

linklist::linked_list() {
    head = NULL;
   tail = NULL;
   nc=0;
}

void linklist::add_node(int n) {
    node *tmp = new node;
            tmp->data = n;
            tmp->next = NULL;
    
            if(head == NULL)
            {
                head = tmp;
                tail = tmp;
            }
            else
            {
                tail->next = tmp;
                tail = tail->next;
            }
}

int linklist::show_node(bool a) {
  node *sn;
          sn=head;
          while(sn !=NULL) {
           if(a==true) {
            
           }else {
             return sn->data;
            
           }
           sn=sn->next;
          } 
}
int linklist::search_node(int num,bool svs) {
   node *sen;
          sen=head;
          nc=0;
          while(sen!=NULL) {
            if(num==sen->data) {
              nc++;
              
              if(svs==true) {
                   Serial.print("\nFound your value ");
              Serial.print(sen->data);
              Serial.print(" At node  ");
                Serial.print(nc);
               Serial.print("\n");
               return sen->data;
              }else if(svs==false) {
                return sen->data;
              }
                 
            }else {
             
               
            }
             sen=sen->next;
          }
}
void linklist:: delete_node(int a) {
      node *temp=head;
    if(a==1) {
     head=temp->next; 
     free(temp);
     //return false;
    }
    int i;
    for(i=0;i<a-2;i++) 
      temp=temp->next;
    
      struct node *temp2=temp->next;
      temp->next=temp2->next;
      free(temp2);
      delete temp2;
      Serial.println("Node deleted sucessfully");
}

void linklist::Insert_node(int data, int n) {
     node* temp1 = new node();
   temp1->data = data;
   temp1->next = NULL;
   if (n == 1){
    temp1->next = head;
    head = temp1;
    Serial.println("Node inserted!!");
    return;
   }
   node* temp2 = new node();
   for (int i = 0; i < n-2; i++){// i feel like it doesn't even go through this loop
    temp2 = temp2->next;
   }
   temp1->next = temp2->next;
   temp2->next = temp2;
   Serial.println("Node inserted!!");
}
