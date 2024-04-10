#include<iostream>
using namespace std;

int main()
{
    int i,j;
    string game;
    string questions[]={"1.What is the national animal of India?",
                         "2.What is the national bird of India",
                         "3.What is the national fruit of India?",
                         "4.What is the national flower of India?"
                         };
    string options[][4]={  
                         {"A) Cow","B) Elephant","C) Lion","D) Tiger"},
                         {"A) Parrot","B) Peacock","C) Pigeon","D) Sparrow"},
                         {"A) Apple","B) Guava","C) Mango","D) Pineapple"},
                         {"A) Jasmine","B) Lily","C) Lotus","D) Rose"} 
                         };
     char answerkeys[]={'B','B','C','C'}; 

     int size=sizeof(questions)/sizeof(questions[0]);
     char guess;
     int score; 

     for(int i=0;i<size;i++)
     {
        std::cout<<"**************************************"<<"\n";
        std::cout<<questions[i]<<"\n";
        std::cout<<"**************************************"<<"\n";

         for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++)
        {
           std::cout<<options[i][j]<<"\n";
        }
        std::cin>>guess;
        guess= toupper(guess);

        if(guess==answerkeys[i])
        {
            std::cout<<"CORRECT ANSWER !"<<"\n";
            score++;
        }
        else
        {
            std::cout<<"WRONG ANSWER !"<<"\n";
            std::cout<<"Answer: "<<answerkeys[i]<<"\n";
        }
    }
    std::cout<<"*****---------------------------*****\n";
    cout<<"*****         RESULTS           *****\n";
    cout<<"*****---------------------------*****\n";
    cout<<"Correct answers:"<<score<<"\n";
    cout<<"Total Questions:"<<size<<"\n";
    cout<<"Answer Percentage:"<<(score/size)*100<<"%\n";
    cout<<"HOW WAS THIS GAME???\n";
    cin>>game;
    cout<<"Your report is uploaded......\n";
    cout<<"THANK YOU !!!"<<"\n";
     return 0;
}