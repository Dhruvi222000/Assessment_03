              //.........................  Assessment ............................
              //......................... MODULE_4 ................................

#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

class rock
{
	int round, computer_score, persan_score, u;
	string name;
	
	public :
			
			rock()
			{
				computer_score = 0;
				persan_score = 0;
			}
			
			void get_data();
			
			void Rounds();
						
			void winner();
};


void rock :: get_data()
			{
				cout<<"\n\n\t *--*--*--*--*--*--*--*--*--*";
				cout<<"\n\n\t\t NAME";
				cout<<"\n\n\t *--*--*--*--*--*--*--*--*--*";
				cout<<"\n\n\t Please Enter Your Name : ";
				cin>>name;	
				
				cout<<"\n\n\t *--*--*--*--*--*--*--*--*--*";
				cout<<"\n\n\t\t Rounds";
				cout<<"\n\n\t *--*--*--*--*--*--*--*--*--*";
				cout<<"\n\n\t"<<name<<"How Many Rounds You Want To Play : ";
				cin>>round;
			}
			
void rock :: Rounds()
			{
				for (int i=0;i<round;i++)
				{
					cout<<"\n\n\t Round No : "<<i+1<<"/"<<round;
					
					cout<<"\n\n\t -> "<<name<<"'s Score = "<<persan_score;
					cout<<"\n\t -> Computer Score = "<<computer_score;
					
					cout<<"\n\n\t 1) Rock";
					cout<<"\n\t 2) Paper";
					cout<<"\n\t 3) Scissor";
					
					cout<<"\n\n\t -> Select Your Choise : ";
					cin>>u;
					
					srand(time(0));
					int c = rand() %3 +1;
					
					switch(c)
					{
						case 1 :
								cout<<"\n\n\t Computer Choise Is Rock";
								break;
						case 2 :
								cout<<"\n\n\t Computer Choise Is Paper";
								break;
						case 3 :
								cout<<"\n\n\t Computer Choise Is Scissor";
								break;
					}
					
					if(u==c)
					{
						cout<<"\n\n\t Draw";
					}
					else if(u==1 && c==2)
					{
						cout<<"\n\n\t Computer Win";
						computer_score++;
					}
					else if(u==2 && c==1)
					{
						cout<<"\n\n\t You Win";
						persan_score++;
					}
					else if(u==1 && c==3)
					{
						cout<<"\n\n\t You Win";
						persan_score++;
					}
					else if(u==3 && c==1)
					{
						cout<<"\n\n\t Computer Win";
						computer_score++;
					}
					else if(u==2 && c==3)
					{
						cout<<"\n\n\t Computer Win";
						computer_score++;
					}
					else if(u==3 && c==2)
					{
						cout<<"\n\n\t You Win";
						persan_score++;
					}
					
					cout<<"\n\n\t Press Any Key To Continue.....";
					cin.ignore();
					cin.get();
				}
			}

void rock :: winner()
			{
				cout<<"\n\n\t -------------Game Over---------------";
				
				cout<<"\n\n\t "<<name<<"'s Score Is : "<<persan_score;
				cout<<"\n\n\t Computer Score Is : "<<computer_score;
				
				if(computer_score < persan_score)
					cout<<"\n\n\t Winner Is "<<name;
				else if(computer_score == persan_score)
					cout<<"\n\n\t Wow Its Draw Both have Same Score";
				else
					cout<<"\n\n\t Winner Is Computer";
			}	
main()
{
	rock r;
	r.get_data();
	r.Rounds();
	r.winner();
}
