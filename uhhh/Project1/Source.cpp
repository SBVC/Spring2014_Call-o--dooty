#include <iostream>
using namespace std;


class whichDirection
	{
	public:
		
		int southBeach;
		int northBeach;
		int toJungle;
		int toRocks;

		whichDirection(void); //constructor
		~whichDirection(void); //destructor
		
		};

whichDirection::whichDirection(void){
	southBeach = 1;
	northBeach = 2;
	toJungle   = 3;
	toRocks    = 4;
}

int main()
{
cout << "Begin\n";



cout << "Press enter to continue...";
cin.get();

cout << "You wake up slowly with waves crashing over your body.\n" ;
cout << "You don't know where you are or how you got there.\n" ;
cout << "You get up and look around.\n";

cout << "Press enter to continue...";
cin.get();
int explore;
cout << "Where would you like to go?\n";
cout << "1 - Explore the nothern shoreline\n";
cout << "2 - Explore the southern shoreline\n";
cout << "3 - Go into the jungle\n";
cout << "4 - Climb up the rocky area\n";
cout << "Please enter 1, 2, 3, or 4.\n";


cin >> explore;

switch (explore) {

case 1:

cout << "You move north.\n";
cout << "You see a figure washed up not too far away from you.\n" ;
cout << "The figure is surrounded by fragments of wood, presumably from a wreckage.\n" ;


cout << "Press enter to continue...";
cin.get();

char dedGuy;

cout << "You approach the figure. It is a young man in fine clothes that have been ruined in the wreckage.\n" ;
cout << "He is lying face-down in the sand.\n";
cout << "[S]earch his body.\n";
cout << "[M]ove to the southern shore.\n";


cin >> dedGuy;

switch ( dedGuy ) {

  case 'S' :
  case 's' :
   
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

  case 'M' :
  case 'm' :

    // user presses M to go to southern shore
    cout << "As you walk south alone the shoreline, the sun sinks lowers into the horizon.\n";
    cout << "You get an uneasy feeling as if you are being watched.\n";
    cin.get();
    
     char hunger;
     
    cout << "Your stomach rumbles and you feel fatigued.\n";
    cout << "Climb onto the rocks further down the shore to find food? Press [R]\n";
    cout << "Continue exploring the southern shoreline? Press [S]\n";
   
    cin >> hunger;
    switch (hunger){
    	case 'R' : 
		case 'r' :

    	cout << "As you approach the rocks, you notice something very interesting.\n";
    	cout << "It is an old castle that has started falling into the ocean. The ocean always takes back what is hers.\n";
    	 cin.get();
    	cout << "The castle isn't very large, but it seems like quite a few people could have lived in it.\n";
    	cout << "You decide to see what you can salvage from it. Perhaps it will be a nice place to spend the night.\n";
    	 cin.get();
    	cout << "All of a sudden, you see leaves rustling in the jungle. You have a very bad feeling about this\n";
    	cout << "and you don't think it would be a good idea to stick around to see what's following you.\n";
    	
    		char spooky;
    		
    	cout << "Do you\n";
    	cout << "[R]un toward the pathway leading away from the jungle.\n";
    	cout << "[G]o into the castle and attempt to hide.\n";
    
    	cin >> spooky;
    	switch (spooky)
    	case 'R' :
		case 'r' :

    	cout << "You spot a small, hidden pathway leading away from the jungle.\n";
    	cout << "You feel significantly safer the further you move away, however something is drawing you back.\n";
    	cout << "You cautiously walk towards the dense jungle.\n";
    	cin.get();
    	cout << "It is much darker under the thick canopy of trees.\n";
    	cout << "You hear the collective sound of animals and bugs which amounts to a low hum.\n";
    	cin.get();
    	cout << "You see the silhouette of a small hut in the distance. It looks like there could be other people on this island after all!\n";
    	cin.get();
    	cout << "You begin jogging toward the hut excitedly. Perhaps this could be your escape from the island!\n";
    	
    	char multiverse;
    	
    	cout << "You hear some more rustling coming from the jungle behind you\n";
    	cout << "Do you [R]un to the hut without looking back?\n";
    	cout << "Or [T]urn around and face the mysterious rustling?";
    	
    	cin >> multiverse;
    	switch (multiverse)
    	
    	case 'R': //user runs to the hut
		case 'r':

    	cout << "You decide yo ignore whatever is making those rustling sounds and run straight to the hut.\n";
    	cout << "As you approach the hut, you notice smoke coming from the roof.\n";
    	cout << "Someone is nearby and they may even have food for you!\n";
    	cin.get();
    	
    	
    	case 'T': //user turns around to the rustling
		case 't':
    	cout << "You spin around as soon as you hear the rustling.\n";
    	cout << "Carefully, you creep over to the place it came from.\n";
    	cin.get();
    	cout << "You hear branches break above you and suddenly you are face down on the ground.\n";
    	cout << "You begin to shout when you feel a heavy weight on your back and a piercing pain just above your knee.\n";
    	cin.get();
    	cout << "You slowly fade out of conscioussness after a short struggle to find out what is going on.\n";
    	cin.get();
    	cout << "...\n";
    	cin.get();
    	cout << "You open your eyes.\n";
    	cout << "You can't seem to remember where you are or how you got there.\n";
    	cout << "You seem to be getting into this situation a lot recently...\n";
    	cin.get();
    	cout << "As your vision clears up, you absorb your surroundings.\n";
    	cin.get();
    	cout << "You are bobbing up and down on a small makeshift boat.\n";
    	cout << "There is a young woman across from you, she seems to be asleep.\n";
    	cin.get();
    	cout << "You make an attempt to engage with her but you can't seem to move.\n";
    	cout << "You make a strained moan. There is a throbbing pain in your leg. Was it she who did this?\n";
    	cin.get();
    	cout << "'Do not struggle,' she says to you, her eyes still closed.\n";
    	cout << "'I used poison arrows to knock you out.'\n";
    	cout << "'You will be fine, as long as you rest.'\n";
    	cin.get();
    	cout << "You try to ask her one of the many questions on your mind\n";
    	cout << "but you cannot get any words out.\n";
    	cout << "You once again lose conscioussness.\n";
    	
    	//more spooky story soon to come
    	
    	break;
    	
    	case 'G' :
		case 'g' :

    	cout << "The castle seems like as good a place as any to crash for the night and you won't have to build a shelter.\n";
	cout << "You jog towards its gate quickly and much of your fear subsides.\n";
	cin.get();
	cout << "Something about this castle feels...familiar to you but you can't quite figure out why.\n";
	cout << "You go through the gate and into a small courtyard.\n";
	cout << "There are a few doors leading to different areas of the castle, \n";
	cout << "but you are drawn to the one to the right.\n";
	cin.get();
	cout << "You twist the handle slowly, unsure of what you will find.\n";
	cout << "As you open the door and gaze into the room, your eyes grow wide and you fall to your knees.\n";
	
	cin.get();
	
	cout << "A voice fades in...\n";
	cin.get();
	cout << "'...wake up...we are planning an escape...'\n";
	cout << "'...six days before the end of each month, a supply ship comes by and restocks this place...'\n";
	cout << "'...if enough of us get out of our cells and take that ship we can head back to the mainland...'\n";
	cin.get();
	cout << "'that sounds impossible...the guards will certainly catch us,' you mutter to the voice\n";
	cin.get();
	cout << "'do not be so unsure...i have seen what you are capable of...'\n";
	
	break;
	
	default:
	cout << "You have entered an invalid option, please try again.\n";
	}
    
    break;

  default : 
    cout << "You have entered an invalid character. Try again.\n";

} //switch for searching body or going to southern shore

break;

case 2:

cout << "southern shoreline\n";

	cout << "You walk south along the shoreline. Some large dunes rise up in the soft, yellow sand.\n";
	cout << "You begin to get very thirsty but the only water in sight is capture in the sea.\n";
	cin.get();
	cout << "As you continue to walk to see some coconut trees and some cacti.\n";
	cout << "You decide that you can harvest water from either of them.\n";
	
	char waterSource;
	
	cout << "Do you try the [C]actus\n";
	cout << "Or [G]o up the tree for coconuts.\n";

break;

case 3:

cout << "jungle\n";

                cout << "You decide to gather some food before the night descended.\n";
                cout << "As you walk deeper and deeper into the jungle every step you take your feet sink in the spongy green ground.\n";
                cout << "Sounds emerge and from a distance you notice a dark silhoutte coming towards you.\n";
                cout << " You stand still for a few seconds until you realize it's a WOLF\n";
                cout << "Press enter to continue.\n";
                cin.get();
                
                int wolves;
                cout << "Not only one wolf but a PACK OF WILD WOLVES.\n";
                cout << "Do you run or climb the nearest tree?\n";
                
                cout << "What would you like to do?\n";
                cout << "[1] to run or [2] to climb the nearest tree\n";
                cin >> wolves;
                cin.get();
                
                switch(wolves){
                        case 1:
                            cout << "You stand there with a fixed expression, palms sweating and heart beating faster than ever.\n";
                            cin.get();
                            cout << "You run and the pack of wolves chase you.\n";
                            cin.get();
                            cout << " You continue to run and every branch and twig scratches you along the way.\n";
                            cout << "Press enter to continue\n";
                            cin.get();
                            cout << " You reach a cave.\n";
                        int cave;
                            cout << "Do you wish to continue to run or enter the cave?\n";
                            cin.get();
                            cout << " [3] to continue to run or [4] to enter the cave";
                            cin >> cave;
                            cin.get();
                        switch(cave) {
                                    case 3:
                                        cout << "You continue to run until you reach a dead end\n";
                                        cout << "The wolves approach you, however, all of sudden the wolves leave you and go back in the same direction they came from\n";
                                        cout << "You slowly turn around and see a GORILLA\n";
                                        cin.get();
                                        cout <<" ";
                                        cin.get();
                                        break;
                                     case 4:
                                        cout << " You enter the cave and stay there for a while until the wolves are no longer chasing you. You found some wood and sharp rocks inside the cave and decide to craft yourself a weapon for protection.\n";
                                        cin.get();
                                        cout << " ";
                                        cin.get();
                                        break;
                                        
                                }
                         case 2:
                            cout << "You stand there and slowly walk towards the nearest tree.\n";
                            cout << "You climb the tree quietly as possible until you reach the  highest branch.\n";
                            cout << "You decide to stay the night a top of the tree.\n";
                            cout << "As the morning ascended you were skeptical whether or not to get down from the tree.\n";
                            cout << "You decide to get down from the tree.\n";
		            cout << "You walk around with cautious.\n"
			    cout << "After walking for half an hour you notice a cabin in the middle of the jungle.\n";
			    cout << "You decide to enter the cabin, you notice there is backpacks in the entrance of the door and goats laying all over the sofas. Hints that there was people in the cabin.\n";
			    cout << "You inspect the whole cabin and  notice pictures hanging in the wall, but one of the pictures caught your attention.\n";
			    cout << "You grab the picture and stare at it for a few seconds and notice it looks like you.\n";
			    cout << "You hear some footsteps, so you run to the nearest room.\n";
			    cout << "You decide to hide but there is no place big enough for you to hide. So you just stand in the middle room waiting for whomever to find you.\n";
			    cout << " You see the door knob move clockwise and counterclockwise.\n";
			    cout << "Your heart starts beating fast and your palms of your hands start sweating profusely.\n";
			    cout << "A man opens the door and stares at you with a perplexed expression.\n";
			    cout << "Then he starts attacking you with the lamp that he got from atop of the drawer.\n"
			    cout << "You try to explain why you were in the cabin but he continues to attack you.\n";
			    cout << " After beating you more ...."
                                cin.get();
			break;

case 4:

cout << "rocky shore\n";
break;

default:
	cout <<"Error - Invalid input\n";
					  
					   system ("pause");

					 
				}
	}
}
        



