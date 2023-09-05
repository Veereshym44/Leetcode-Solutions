class Solution {
public:
    Node* copyRandomList(Node* head) {
      if(head==NULL)return NULL;
      unordered_map<Node*,Node*>mp;
      Node* temp=head;
      while(temp)
      {
          mp[temp]=new Node(temp->val);
          temp=temp->next;
      }
      temp=head;
      while(temp)
      {
          mp[temp]->next=mp[temp->next];
          mp[temp]->random=mp[temp->random];
          temp=temp->next;
      }
      temp=mp[head];
      return temp;
    }
};