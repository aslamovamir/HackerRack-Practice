// Harold is a kidnapper who wrote a ransom note, but now he is worried it will be traced back to him through his handwriting.
// He found a magazine and wants to know if he can cut out whole words from it and use them to create an untraceable replica 
// of his ransom note. The words in his note are case-sensitive and he must use only whole words available in the magazine. 
// He cannot use substrings or concatenation to create the words he needs.
// Given the words in the magazine and the words in the ransom note, print Yes if he can replicate his ransom note exactly 
// using whole words from the magazine; otherwise, print No.
  
// magazine= "attack at dawn" ; note = "Attack at dawn"
// The magazine has all the right words, but there is a case mismatch. The answer is No.

void checkMagazine(vector<string> magazine, vector<string> note) {
    if (note.size() > magazine.size()) {
        cout<<"No"<<endl;
        return;
    }
    map<string, int> Hash;
    for (auto itr: magazine) {
        Hash[itr]++;
    }
    for (auto itr: note) {
        if (Hash[itr] <= 0) {
            cout<<"No"<<endl;
            return;
        }
        Hash[itr]--;
    }
    Hash.clear();
    cout<<"Yes"<<endl;
}
