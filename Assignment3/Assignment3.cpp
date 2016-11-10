/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 13
10-10-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-10-16

_________________________________________________
**Notes**
*************************************
Submissions=
    
    git add lab1
    git commit –a –m ‘description of your choice’
    git push


*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>

using namespace std;

//Initiize the Variables

int art() {
    
    cout << "      Tying Digital Flies      " << endl;  
    cout << " ______________________________" << endl;
    cout << "   #####                       " << endl;
    cout << "    #*#                        " << endl;
    cout << "     *      $$                 " << endl;         
    cout << "   #####$$$$$$$$$$$------      " << endl;
    cout << "     *      $$   &             " << endl;  
    cout << "    #*#           ]            " << endl;
    cout << "   #####         &             " << endl;
    cout << "              -^-              " << endl;
    
    cout << "Computerized FLies!" << endl << endl;
    cout << "Copyright Jared W Didier 2016";

};
/*
Rock Paper Scissors Game – The computer chooses one of the three options and 
the user chooses one. The computer should determine who has won.  The game 
should play an option of best out of 3, 5, or 7 rounds.  The program should 
score the game for the user based on how many they win.
*/


class RockPaperScissors{
     int countWin=0;
    int countLoss=0;
    int countScratch = 0;
    int runTimes = 0;
    int roundMax =0;
    int userGuess =0;
    int computerGuess=0;
    string wordFromGuess;
    string wordFromComGuess;
    
 public:      // The class' public functions                                                              
        
                //Overload Consrctor
            RockPaperScissors(int rnd_)
            {
                userGuess= rnd_;
            };
          
                //Default Constructor
            RockPaperScissors()
            {
                
                roundMax =0;
                computerGuess=0;
                userGuess= 0;
                srand(time(0));
            };
// Computer input                
    int     SetComputerRockPaperScissors()
                {
                   computerGuess = (rand()%3 +1); 
                   //cout << "Computer Guess " << computerGuess << endl;
                }

    int     GetComputerRockPaperScissors()
                {   
                    return computerGuess;     
                }
                
 // Number of games       
    int     SetUserNumGamesRockPaperScissors()
                {
                    int valueTrue=0;
                    roundMax=0;
                    cout << "How many games do you want to play - Choices are 3, 5, or 7 rounds?" << endl;
                            cin>> roundMax;
                    while (valueTrue != 1) {
                        if (roundMax == 3){   
                            valueTrue = 1; 
                            }
                        else if (roundMax == 5){   
                            valueTrue = 1; 
                            }
                        else if (roundMax == 7){   
                            valueTrue = 1; 
                            } 
                        else { 
                            cout << "Please pick 3, 5, or 7!" << endl;
                            cout << "How many games do you want to play - Choices are 3, 5, or 7 rounds?" << endl;
                            cin>> roundMax;
                        }
                    }
                        cout << "Lets play " << roundMax << " games!" << endl;
                }        

    int     GetUserNumGamesRockPaperScissors()
                {
                    return roundMax;     
                }
        
        
 // User Input       
    int     SetUserRockPaperScissors()
                {
                   cout << "Please enter your guess of items: ";
                   cout << "(1 for Rock), (2 for Paper), (3 for Scissors)" << endl;
                    userGuess=0;
                    cin >> userGuess;
                        if (userGuess > 3){
                                while (userGuess > 3) {
                                  cout << "(1 for Rock), (2 for Paper), (3 for Scissors)" << endl;
                                  cout << "Please Pick 1, 2, or 3" << endl;
                                  cin >> userGuess;
                                }}
                        if  (userGuess < 1){
                                while (userGuess < 1) {
                                      cout << "(1 for Rock), (2 for Paper), (3 for Scissors)" << endl;
                                      cout << "Please Pick 1, 2, or 3" << endl;
                                      cin >> userGuess;
                                    }
                            }
                        
                    //cout << "You input " << userGuess << " lets see what the computer picked" << " ";
                }       
                        

    int     GetUserRockPaperScissors()
                {
                    //cout << "UserGuess From Get " << userGuess << endl;
                    return userGuess;     
                }
// Converts numbers to words
    int SetUserNumToWords(int guess)
                {
                    //guess= GetUserRockPaperScissors();
                    //cout << " Switch Case int guess " << guess << " " << endl;
                    switch(guess)
                    {
                        case 1: 
                                wordFromGuess= "Rock";
                                break;
                        case 2:
                                wordFromGuess= "Paper";
                                break;
                        case 3:
                                wordFromGuess= "Scissors";
                                break;
                        default:
                                cout << "error in User switch case" << "**************";
                    }
                }
    string GetUserNumToWords(){
                return wordFromGuess;
            }
    
    int SetComputerNumToWords(int Cguess)
        {
            switch(Cguess)
            {
                case 1: 
                        wordFromComGuess= "Rock";
                        break;
                case 2:
                        wordFromComGuess= "Paper";
                        break;
                case 3:
                        wordFromComGuess= "Scissors";
                        break;
                        default:
                        cout << "error in Computer switch case" << "**************";
            }
        }        
        
        string GetComputerNumToWords(){
                return wordFromComGuess;
                }
        
            
// Calls all parts for the game to run.

int mainGame(){
    int countWin=0;
    int countLoss=0;
    int countScratch = 0;
    int runTimes = 0;
    int roundMax =0;
    int userGuess =0;
    int computerGuess=0;
   
   
   SetUserNumGamesRockPaperScissors();
   GetUserNumGamesRockPaperScissors();
   roundMax = GetUserNumGamesRockPaperScissors();
   
   
while (runTimes < roundMax){
         runTimes++;
    
    SetUserRockPaperScissors(); // working
    GetUserRockPaperScissors(); // working
    
    SetComputerRockPaperScissors(); // working
    GetComputerRockPaperScissors();// working
     
    SetUserNumToWords(GetUserRockPaperScissors());
    SetComputerNumToWords(GetComputerRockPaperScissors());
    
    cout << "You chose " << GetUserNumToWords();
    cout << " and the Computer chose " << GetComputerNumToWords();
    cout << endl << endl;
    
            computerGuess = GetComputerRockPaperScissors();
            userGuess = GetUserRockPaperScissors();
            
                if (userGuess == computerGuess){
                 cout << "Scratch!!!" << endl << endl;
                 countScratch= countScratch + 1;
                }
                
                else    {
                        switch (userGuess){
                            case 1: // 1 = Rock
                                    if (computerGuess==2){ // 2 = Paper
                                         cout << "Loss: Paper smothers Rock" << endl;
                                         countLoss = countLoss + 1;
                                        }
                                    else if (computerGuess==3){// 3 = Scissors
                                            cout << "Win: Rock beats Scissors" << endl;
                                            countWin = countWin + 1;
                                        } 
                                    break;    
                            case 2: // 2 = Paper
                                    if (computerGuess==1){// 1 = Rock
                                         cout << "Win: Paper smothers Rock" << endl;
                                         countWin= countWin + 1;
                                        }
                                    else if (computerGuess==3){ // 3 = Scissors
                                            cout << "Loss: Scissors cut Paper" << endl;
                                            countLoss = countLoss + 1;
                                        }
                                    break;
                            case 3: // 3 = Scissors
                                    if (computerGuess==1){// 1 = Rock
                                         cout << "Loss: Rock beats Scissors" << endl;
                                         countLoss= countLoss + 1;
                                        }
                                    else if (computerGuess==2){// 2 = Paper
                                            cout << "Win: Scissors cut Paper" << endl;
                                            countWin = countWin + 1;
                                        } 
                                    break;
                            }
                        } 
}   
            cout << endl <<"You Won " << countWin << " there was " << countScratch << " Scratch and Lost ";
            cout << countLoss << endl << endl;
    
                if ((countWin > countLoss) && (countWin >= countScratch)){
                    cout << "You the BIG Winner!!!" << endl;
                }
                
                else if ((countWin > countLoss) && (countWin < countScratch)){
                    cout << "You won but barely." << endl;
                }
                
                else if ((countWin < countLoss) && (countLoss = countScratch)){
                    cout << "You lost but barely." << endl;
                }
                else  {
                    cout << "You Lost Better Luck Next Time!" << endl;
                }
    
}
};

int main(){
   RockPaperScissors game1;
   
   game1.mainGame();

return 0;

};


