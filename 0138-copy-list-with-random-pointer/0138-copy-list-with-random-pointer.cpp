class Solution {
public:
    Node* copyRandomList(Node* head) {
      if(head==NULL)return NULL;
    //   unordered_map<Node*,Node*>mp;
    //   Node* temp=head;
    //   while(temp)
    //   {
    //       mp[temp]=new Node(temp->val);
    //       temp=temp->next;
    //   }
    //   temp=head;
    //   while(temp)
    //   {
    //       mp[temp]->next=mp[temp->next];
    //       mp[temp]->random=mp[temp->random];
    //       temp=temp->next;
    //   }
    //   temp=mp[head];
    //   return temp;
    Node*temp=head;
    while(temp)
    {
        Node* node=new Node(temp->val);
        node->next=temp->next;
        temp->next=node;
        temp=node->next;
    }
    temp=head;
    Node* newHead=head->next;
    while(temp)
    {
        if(temp->random!=NULL)
        temp->next->random=temp->random->next;
        else
        temp->next->random=NULL;

        temp=temp->next->next;

    }
    temp=head;
    Node* ans;
    while(temp)
    {
      ans=temp->next;
      temp->next=ans->next;
      temp=temp->next;
      if(temp)
      ans->next=temp->next;
      else
      ans->next=NULL;
    }
    return newHead;


    }
};