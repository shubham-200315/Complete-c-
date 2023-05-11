class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;

        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }

        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    // constructor
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            // present
            child = root->children[index];
        }
        else
        {
            // absecnt
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recurtion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

void printSuggetion(TrieNode* curr, vector<string> &temp, string prefix){

    if(curr->isTerminal){
        temp.push_back(prefix);
    }

    for(char ch='a'; ch<='z'; ch++){
        TrieNode* next = curr->children[ch - 'a'];
        if(next != NULL){
            prefix.push_back(ch);
            printSuggetion(next, temp, prefix);
            prefix.pop_back();
        }
    }

}
vector<vector<string>> getSuggetion(string &str){

        TrieNode* prev = root;
        string prefix = "";
        vector<vector<string>> output;

        for(int i=0; i<str.size(); i++){
            char lastch = str[i];
            prefix.push_back(lastch);

            TrieNode* curr = prev->children[lastch - 'a'];

            if(curr == NULL){
                break;
            }
            else{
                vector<string> temp;
                printSuggetion(curr, temp, prefix);
                output.push_back(temp);
                temp.clear();
                prev = curr;
            }
        }
        return output;
    }
};
vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    Trie *t = new Trie();

    for(int i=0; i<contactList.size(); i++)
    {
        t->insertWord(contactList[i]);
    }

    return t->getSuggetion(queryStr);
}










https://www.codingninjas.com/codestudio/problems/implement-a-phone-directory_1062666?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
