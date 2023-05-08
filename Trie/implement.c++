class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    
    TrieNode(char ch)
    {
        data= ch;
        for(int i=0; i<26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
      
};

class Trie {

    TrieNode* root;

public:

    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode('\0');
    }

    /** Inserts a word into the trie. */

    void insertUtil(TrieNode* root, string word)
    {
        if(word.length()==0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0]-'a';
        TrieNode* child;

        if(root->children[index]!= NULL)
        {
            child= root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertUtil(child,word.substr(1));
    }

    void insert(string word) {
        insertUtil(root, word);
    }
    /** Returns if the word is in the trie. */

    bool searchUtil(TrieNode* root, string word)
    {
         if(word.length()==0)
        {
        
            return root->isTerminal;
        }
         int index = word[0]-'a';
        TrieNode* child;

        if(root->children[index]!= NULL)
        {
            child= root->children[index];
        }
        else{
            return false;
        }
       return searchUtil(child,word.substr(1));
    }
    bool prefixUtil(TrieNode* root, string word)
    {
         if(word.length()==0)
        {
        
            return true;
        }
         int index = word[0]-'a';
        TrieNode* child;

        if(root->children[index]!= NULL)
        {
            child= root->children[index];
        }
        else{
            return false;
        }
       return prefixUtil(child,word.substr(1));
    }
    bool search(string word) {
        return searchUtil(root, word);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
          return prefixUtil(root, prefix);
    }
};













https://www.codingninjas.com/codestudio/problems/implement-trie_631356?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar







