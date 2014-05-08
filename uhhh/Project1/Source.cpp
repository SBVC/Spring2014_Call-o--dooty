#include <iostream>
using namespace std;


class whichDirection
	{
	public:
		
		int southBeach;
		int northBeach;
		int toJungle;
		int toRocks;

		whichDirection(void);
		~whichDirection(void);
		
		};

whichDirection::whichDirection(void){
	southBeach = 1;
	northBeach = 2;
	toJungle   = 3;
	toRocks    = 4;
}

class PlayerClass
	{

	public:
		void coolTest() {
		
		cout << "not sure what i am doing but hopefully it works!" << endl;
			
		};
		
	private:
		 //private things 

};

class NPCDialogue
	{
		public: //npc chat goes here if we need it
	};
	
int main()
{
cout << "Chapter 1\n";



cout << "Press enter to continue...";
cin.get();

cout << "You wake up slowly with waves crashing over your body.\n" ;
cout << "You don't know where you are or how you got there.\n" ;
cout << "You get up and look around.\n";

cout << "Press enter to continue...";
cin.get();

do{

cout << "Where would you like to go? (We recommend you explore each area) \n";
cout << "1 - Explore the nothern shoreline\n";
cout << "2 - Explore the southern shoreline\n";
cout << "3 - Go into the jungle\n";
cout << "4 - Climb up the rocky area\n";
cout << "Please enter 1, 2, 3, or 4.\n";

whichDirection northBeach;

switch (northBeach) {

case 1:

cout << "You move north.\n";
cout << "You see a figure washed up not too far away from you.\n" ;
cout << "The figure is surrounded by fragments of wood, presumably from a wreckage.\n" ;


cout << "Press enter to continue...";
cin.get();

cout << "You approach the figure. It is a young man in fine clothes that have been ruined in the wreckage.\n" ;
cout << "He is lying face-down in the sand.\n";

cout << "Search his body. Press enter\n";
cin.get();

cout << "The man appears to be dead from a wound in his back. You find a folded up piece of paper in a small box.\n";
       
cout << "You read the paper:\n";
cout << "1721\n";
        
cout << "I do not remember how many days I have spent on this wretched ship.\n";
cout << "I remember before this nightmare began...My captain was sleeping in his quarters\n";
cout << "when a ship appeared on the horizon. As it drew closer, it raised a black flag.\n";

cout << "Press enter to continue...";
cin.get();

cout << "'Pirates!' I thundered to the crew.";
cout << "The crew started shouting and preparing to outmaneouver the ship on the horizon.\n";
cout << "I ran to the captain's quarters and burst through the old wooden door.\n";
cout << "I saw the captain sprawled out on his bed, a bottle of rum rolled out of his hand and pattered to the floor.\n";

cout << "Press enter to continue...";
cin.get();

cout << "The sound of the crew's panic faded from my mind as the captain wheezed out his final words.\n";
cout << "'I have been poisoned. Trust no one.'\n";
cout << "My legs grew weak, but I knew what I had to do. I ran on the the deck and began to shout orders.\n";
cout << "'Where is the captain?' I heard one of the crewmembers shout.\n";
cout << "'The captain is dead. Someone has poisoned him. As your quartermaster I am now in command.'\n";
cout << "I could see the questions forming in their eyes. Regardless, they kept working to escape from the pirate ship.\n";
cout << "Our ship was much slower than theirs and by nightfall they were almost at our side.\n";
cout << "I heard a voice from beside me. It was the navigator-";

cout << "You drop the entry onto the sand and fall to your knees. The sounds of the waves become disorted and\n";
cout << "you can no longer see clearly. Your head hits the ground. You catch a glimpse of a dark figure standing above you\n";
cout << "before your eyes close and you lose consciousness.\n";

break;

case 2:

cout << "southern shoreline\n";

break;

case 3:

cout << "jungle\n";
break;

case 4:

cout << "rocky shore\n";
break;

default:
	cout <<"Error - Invalid input\n";
					  
					   system ("pause");

					 
}
        

}while (whichDirection != 1 & whichDirection !=3) ;
}
