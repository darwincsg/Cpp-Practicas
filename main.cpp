
#include<iostream>
#include<cstdlib>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* construtorLista(int x, ListNode* head){
    ListNode *novo = new ListNode;

    novo->val = x;
    novo->next = nullptr;

    head = novo;

    return head;
}

ListNode* inserir(int x, ListNode* head){
    ListNode *novo = new ListNode;
    novo->val = x;
    novo->next = nullptr;

    ListNode *aux = head; 
    if (head == NULL)
    {
        return NULL;
    }

    while (head != nullptr)
    {
        if (head->next == nullptr)
        {
            head->next = novo;
            break;
        }
        
        head = head->next;
    }
    return aux;
}

void mostrarlista(ListNode *head){
    int i = 0;
    while (head != NULL || head != nullptr)
    {
        cout<<head->val<<endl;
        head = head->next;
    }
    
    return;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int *count = new int[100], i = 0;
        ListNode *aux;
        aux = head;
         
        while (head != NULL || head != nullptr)
        {
            count[i] = head->val;
            head = head->next;
            i++;
        }
        cout<<"gatoto: "<<i<<endl;
        for (int j = 0; j < i; j++)
        {
            if (count[i-1] != count[j])
            {
                cout<<"falso"<<endl;
                return false;
            }
            i--;
        }
        
        return true;
    }
};

int main(){
    int i = 0;
    
    ListNode *head = NULL;
    Solution objeto1;
    head = construtorLista(1,head);

    head = inserir(2,head);
    head = inserir(5,head);
    head = inserir(2,head);
    head = inserir(1,head);
    //head = inserir(5,head);

    mostrarlista(head);
    objeto1.isPalindrome(head);
    return 0;
}