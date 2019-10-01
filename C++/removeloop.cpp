void removeTheLoop(Node *head)
{
     //Your code here
     Node *fast;
     Node *slow;
     fast=head;
     slow=head;
     bool isLoop = false;
     while(fast)
     {
         slow=slow->next;
         fast=fast->next->next;
         if(fast==slow)
         {
             isLoop = true;
             break;
         }
     }
     if(isLoop)
     {
         slow = slow->next;
         int cnt = 1;
         while(slow!=fast)
         {
            slow = slow->next;
            cnt++;
         }
         Node *begin = head;
         slow = head;
         while(cnt--)
         {
             slow = slow->next;
         }
         
         while(slow->next != begin->next)
         {
             slow=slow->next;
             begin=begin->next;
         }
         slow->next=NULL;
         
     }
}
     
