#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Shiritori
{
    private:
        vector <string> words;
        bool gameOver;
    public:
        Shiritori(vector <string> words, bool gameOver)
        {
            this->words=words;
            this->gameOver=gameOver;
        }
        void Play(string newWord)
        {
            if(words.size()==0)
            {
                words.push_back(newWord);
                this->PrintWords();
            }
            else
            {
                string lastWord=words[words.size()-1];
                if(find(words.begin(),words.end(),newWord)==words.end() && newWord[0]==lastWord[lastWord.size()-1])
                {
                    words.push_back(newWord);
                    this->PrintWords();
                }
                else
                {
                    cout<<"Game Over. ";
                    gameOver=1;
                    if(newWord[0]!=lastWord[lastWord.size()-1]) cout<<newWord<<" does not start with "<<lastWord[lastWord.size()-1]<<endl;
                    else cout<<newWord<<" has already been used."<<endl;
                }
            }
        }
        void Restart()
        {
            words.clear();
            gameOver=0;
            cout<<"Game Restarted"<<endl;
        }
        void PrintWords()
        {
            cout<<"Correct. Words already used: ";
            for(int i=0; i<words.size(); i++) cout<<words[i]<<" ";
            cout<<endl;
        }
        bool GameStatus()
        {
            return this->gameOver;
        }
};

class GameControl
{
    public:
        void GameLoop()
        {
            cout<<"Play a game of Shiritori. Enter a word to start"<<endl;
            vector <string> words;
            Shiritori NewGame(words,0);
            bool gameOver=0;
            bool wantToPlayAgain=1;
            string userInput;
            while(wantToPlayAgain)
            {
                gameOver=NewGame.GameStatus();
                while(!gameOver)
                {
                    cin>>userInput;
                    NewGame.Play(userInput);
                    gameOver=NewGame.GameStatus();
                }
                cout<<"Do you want to play again? [Y/N]"<<endl;
                cin>>userInput;
                if(userInput=="Y") NewGame.Restart();
                else wantToPlayAgain=0;
            }
        }
};

int main()
{
    GameControl Control;
    Control.GameLoop();
}