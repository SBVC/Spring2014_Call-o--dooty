/*CS110 Final Project by Alejandra Sierra, Ngara Bird, and Edward Moreno*/

#include <iostream>
using namespace std;



class WhichDirection
{
private:

	int southBeach;
	int northBeach;
	int toJungle;
	int toRocks;

public:

	WhichDirection(void); //constructor


};

WhichDirection::WhichDirection(void){
	southBeach == 1;
	northBeach == 2;
	toJungle == 3;
	toRocks == 4;
}

int main()
{
	
	int coin; //for the loop at the coconut trees.

	cout << "Welcome. Press enter to read the rules and begin the game.\n";
	cin.get();
	cout << "This is a choose your own adventure! Press enter to continue the story\n";
	cout << "and when the time comes, choose your own adventure!\n";
	do{
	cin.get();

	cout << "You wake up slowly with waves crashing over your body.\n";
	cout << "You don't know where you are or how you got there.\n";
	cout << "You get up and look around.\n";

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
		cout << "You see a figure washed up not too far away from you.\n";
		cout << "The figure is surrounded by fragments of wood, presumably from a wreckage.\n";


		cout << "Press enter to continue...";
		cin.get();

		char dedGuy;

		cout << "You approach the figure. It is a young man in fine clothes that have been ruined in the wreckage.\n";
		cout << "He is lying face-down in the sand.\n";
		cout << "[S]earch his body.\n";
		cout << "[M]ove to the southern shore.\n";


		cin >> dedGuy;

		switch (dedGuy) {

		case 'S':
		case 's':

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
			//more to come
			break;

		case 'M':
		case 'm':

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

			case 's':
			case 'S':
				cout << "You continue to wander the shoreline listlessly.\n";
				cout << "You notice some flashy lights coming from the distance.\n";
				cin.get();
				cout << "'What year is it again?' You think to yourself.\n";
				cout << "'Has electricity even been invented yet?'\n";
				cout << "'No of course not...I'm being silly.\n";
				cin.get();
				cout << "You shake your head, angry that you made such a simple error in logic.\n";
				cout << "Flashy lights in 1721? Seriously?? This is supposed to be a pirate story.\n";
				cout << "Get out of here!!!\n";
				cin.get();

			case 'R':
			case 'r':

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
			case 'R':
			case 'r':

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
				cout << "You rush toward the cabin ostentaciously.\n";
				cin.get();
				cout << "Suddenly you feel something grab your leg and then you are hanging upside down from one of the trees.\n";
				cout << "Looks like YOU'LL be dinner tonight. Game Over.\n";
				break;
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

			case 'G':
			case 'g':

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

		default:
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
		cout << "What you can't decide is which...\n";

		int heads;
		heads == 1;

		int tails;
		tails == 2;

		cout << "You flip a coin.\n";
		cout << "Heads (enter 1): you go to the cacti, tails(enter 2): you go to the coconuts.\n";

		cin >> coin;

		if (coin == 1){

			cout << "You hungrily approach the cactus.\n";
			cout << "It looks so delicious...you pull out your knife and lick your lips.\n";
			cin.get();
			cout << "You lop off a bit of the cactus and gulp down its watery interior.\n";
			cout << "It's...so delicious...\n";
			cin.get();
			cout << "You begin to stumble around, groping desperately for something to keep you steady.\n";
			cout << "The colors are all merging together and you can't tell the sky from the sand.\n";
			cin.get();
			cout << "You feel engulfed by sharp pains as you bump clumsily into cacti.\n";
			cout << "You are surrounded by cacti, their cruel prickly skin drawing massive amounts of blood.\n";
			cin.get();
			cout << "You scream for help but no sound escapes from your lungs.\n";
			cout << "The world spins around you as you fall flat on your back.\n";
			cin.get();
			cout << "You catch a final glimpse of the sky before the life drains from your body./n";

		}

		else if (coin == 2) {

			cout << "You attempt to climb up one of the coconut trees.\n";
			cout << "You are quite a ways up when you hear a voice from below you.\n";
			cin.get();
			cout << "They shout, 'Stop! Do not eat the coconuts! They are very poisonous!\n";
			cout << "Thank goodness someone warned you. Aren't you glad to see another person on this forsaken island?\n";
			cin.get();
			cout << "You carefully shimmy down the tree to greet your savior.\n";
			cout << "As you approach him to shake his hand, he moves suddenly.\n";
			cout << "You crumple to your knees and see him walk over you as your vision fades.\n";
			cin.get();
			cout << "...You are awake...\n";
			cin.get();
			cout << "You see the man from the coconut trees with his back turned in front of you.\n";
			cout << "Your hands are tied by some thick rope.\n";
			cout << "You seem to be in some kind of cabin...\n";
			cin.get();

			char prisoner;

			cout << "The man is distracted by something and you want to take the opportunity to knock him out.\n";
			cout << "Do you attempt to get up and kick him down? [a]\n";
			cout << "Untie your hands and knock him out with whatever you can grab?[b]\n";
			cout << "Attempt to sneak out while he is distracted?[c]\n";

			cin >> prisoner;
			switch (prisoner)

	case 'a':
	case 'A':
		cout << "You get up quickly and try to kick him on the back of his head.\n";
		cout << "To your surprise he falls to the floor instantly.\n";
		cin.get();
		cout << "You hear the waves crashing outside and a hum of bugs coming from the jungle.\n";
		cout << "You free your hands from the ropes and grab any supplies from the cabin you can.\n";
		cin.get();
		cout << "It's dark outside when you burst out of the cabin.\n";
		cout << "You spot a small sail boat docked nearby and run toward it.\n";
		cin.get();
		cout << "You throw your supplies into the boat and untie it from the dock.\n";
		cout << "As you begin to sail away you hear shouts coming from the shore\n";
		cout << "You can't quite decipher what he is saying...\n";
		cin.get();
		cout << "You find a wanted poster on the floor.....your face is feautured on it with a hefty reward.\n";
		cout << "You shrug it off and throw the poster into the sea.\n";
		cin.get();
		cout << "The compass points east and the sun begins to rise.\n";
		cout << "You are glad to be off of that terrible island.\n";
		cout << "You hope you never return...\n";
		cin.get();
		break;

	case 'b':
	case 'B':
		cout << "You find a sharp edge to cut the rope and free your hands.\n";
		cout << "You quickly grab the first thing you can reach.\n";
		cin.get();
		cout << "You throw it at him as hard as you can.\n";
		cout << "Unluckily for you, you ended up throwing an orange.\n";
		cin.get();
		cout << "It hit his head and splatters and he turns around angrily.\n";
		cout << "He stomps over to you and bends down into your face.\n";
		cin.get();
		cout << "He shows you a wanted poster with your face on it.\n";
		cout << "It says 'WANTED: DEAD OR ALIVE'\n";
		cout << "His breath stinks and he spits at you as he speaks,\n";
		cout << "As you can see, they offer a greater reward if I turn you in alive...\n";
		cout << "But I don't think it's worth the extra gold coins to keep you alive.\n";
		cin.get();
		cout << "You helplessly watch the man pour some chemicals onto a rag and shove it over your mouth and nose.\n";
		cin.get();
		cout << "Game over, pal.\n";

		cin.get();

		break;
	case 'c':
	case'C':
		cout << "You try to sneak out quietly.\n";
		cout << "You are extremely unsuccessful.\n";
		cout << "Game over...\n";
		break;
		}

		else { cout << "you entered an invalid option. enter 1 or 2!"; }
		cin.get();
		break;

	case 3:

		cout << "jungle\n";

		cout << "You decide to gather some food before the night descended.\n";
		cout << "As you walk deeper and deeper into the jungle every step you take your feet sink in the spongy green ground.\n";
		cout << "Sounds emerge and from a distance you notice a dark silhoutte coming towards you.\n";
		cout << " You stand still for a few seconds until you realize it's a WOLF.\n";
		cout << "Press enter to continue.\n";
		cin.get();

		int wolves;
		cout << "Not only one wolf but a PACK OF WILD WOLVES.\n";
		cout << "Do you run or climb the nearest tree?\n";

		cout << "What would you like to do?\n";
		cout << "[1] to run or [2] to climb the nearest tree.\n";
		cin >> wolves;
		cin.get();

		switch (wolves){
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
			cout << " [3] to continue to run or [8] to enter the cave";
			cin >> cave;
			cin.get();
			
			if (cave ==3) {
			    case 3:
				cout << "You continue to run until you reach a dead end\n";
				cout << "The wolves approach you, however, all of sudden the wolves leave you and go back in the same direction they came from\n";
				cout << "You slowly turn around and see a GORILLA\n";
				cout << "He attacks you and you try to fight him off but he continues to attack you.\n";
				cout << " The gorilla eventually rips you to shreds and you die.\n";
				cout << "-----------------GAME OVER-------------------\n";
				cin.get();

				break;
                        }
                        else if (cave ==8){
                               case 8:
	
				cout << "You enter the cave and stay there for a while until the wolves are no longer chasing you. You find some wood and sharp rocks inside the cave and decide to craft yourself a weapon for protection.\n";
				cout << "You stay the night inside the cave and as the morning ascended you decide to leave the cave with your handmade weapon.\n";
				cout << "You decide to look for someone to help you get out of the island. As you continue to walk you notice various shreds of animals and you begin to fear for your life.\n";
				cout << "From a far you notice three silhouttes, you begin to get scared, so you pull out your weapon for protection.\n";
				cin.get();
				cout << "You approach them slowly. As you approach them closer and closer you realize the three silhouttes are actually three people.\n";
				cout << " They introduce themselves as Michael, Jessica and, David.\n";
				cout << "You are relief that you finally found a group of people because that means you could finally get out of the jungle from all those vicious wild animals and from the island. So you could return back home.\n";
				cout << "However, they tell you that they are also lost. So you are frustrated more than ever but not scared because you have three more companions. \n";
				cout << "All of you decide to make shelter for the night and gather some food.\n";
				cout << "David and Jessica go in search for food and you and Michael built the shelter.\n";
				cout << "You and Michael hear a scream, both of you run toward where the scream came from.\n";
				cin.get();
				cout << "When you notice that the scream came from the same direction where Jessica and David went in search for food, you start fearing the worst.\n";
				cout << "When you finally arrived with Jessica and David you notice Jessica practically bleeding to death and David trying to fight a bear.\n";
				cout << "You and Michael try to help David fight off the bear but is useless. So you, Michael, and David decide to carry Jessica and run away from the bear.\n";
				cout << "As you see Jessica you start fearing the worst for her, she is bleeding too much. As all of you continue to run, Michael notices a cave and all of you decide to hide in the cave.\n";
				cout << "David and Michael block the entrance of the cave with boulders and branches so the bear can enter, and you lay Jessica in the ground.\n";
				cout << "You all know she is dying, so you all gather around Jessica.\n";
				cin.get();
				cout << "As Jessica lay peacefully, you all decide to cover her with flowers. Afterwards, you all are determined to get out of the jungle. You all handcraft some weapons.\n";
				cin.get();
				cout << "As you all get ready for any unexpected attack, you all see a pack of lions from a distance. You all try to run away from them; however, it was too late because they eventually catch up to you guys.\n";
                                cout << "The lions eventualy rips you all to shreds and you all die.";
                                cin.get();
                                cout << "-----------------------GAME OVER------------------------------\n";

				break;
                        }
		        else { cout << "You entered an invalid option, please enter 3 or 8."; }
                               cin.get();
                               break;
                    
			case 2:
				cout << "You stand there and slowly walk towards the nearest tree.\n";
				cout << "You climb the tree quietly as possible until you reach the highest branch.\n";
				cout << "You decide to stay the night a top of the tree.\n";
				cout << "As the morning ascended you were skeptical whether or not to get down from the tree.\n";
				cout << "You decide to get down from the tree.\n";
				cout << "You walk around with cautious.\n";
				cin.get();
				cout << "After walking for half an hour you notice a cabin in the middle of the jungle.\n";
				cout << "You decide to enter the cabin, you notice there is backpacks in the entrance of the door and coats laying all over the sofas. Hints that there was people in the cabin.\n";
				cout << "You inspect the whole cabin and notice pictures hanging in the wall, but one of the pictures caught your attention.\n";
				cout << "You grab the picture and stare at it for a few seconds and notice it looks like you.\n";
				cout << "You hear some footsteps, so you run to the nearest room.\n";
				cin.get();
				cout << "You decide to hide but there is no place big enough for you to hide. So you just stand in the middle of the room waiting for whomever to find you.\n";
				cout << "You see the door knob move clockwise and counterclockwise.\n";
				cout << "Your heart starts beating fast and your palms of your hands start sweating profusely.\n";
				cout << "A man opens the door and stares at you with a perplexed expression.\n";
				cout << "Then he starts attacking you with the lamp that he got from atop of the drawer.\n";
				cout << "You try to explain why you were in the cabin but he continues to attack you.\n";
				cout << " After beating you for what felt an hour. He finally asks you what are you doing in the cabin. \n";

				int man;

				 cout << "Do you explain to him or do you run?\n";
                        	 cout << " [6] to explain or [9] to run.\n";
                                 cin >> man;
                               
                                 if (man == 6){
                                    
                                case 6:
					cout << "You decide to explain to him your situation and the man looks rather perplexed.\n";
					cout << "After you finish explaining to him your story, but you get no respond; therefore, you decide to leave.\n";
					cout << "Howevever, as your about to leave, a woman appears and stares at you with astonishment.\n";
					cout << " She tells you, 'John is that you? Where have you been all this time?\n";
					cout << " You are confused and out of nowhere she hugs you.\n";
					cout << " After a brief moment, she lets go of you, and you ask her who she is.\n";
					cout << "She tells you, and you couldn't believe what she was telling you.\n";
					cin.get();
					cout << "After three hours of questioning her, you realize she is your sister and you are finally home.\n";
			       	        cout << "You are finally happy that you found your family.\n";
                                        cout << "--------------Congratulations, you completed your mission!!---------------------------\n";
                                        break;
                                       }
                                  else if ( man ==9){
                                    
                                     case 9:
					cout << "You run out of the room and you bump into a woman.\n";
					cout << "She calls you 'John' and starts sobbing and asking you questions such as 'Where have you been?' 'We have been lookink for you?' 'Why aren't you answering me?'\n";
					cout << "You just stand there looking at her, not knowing what to do.\n";
					cout << "'Til finally she explains to you the entire story of how you they though you were lost and then dead because it had been over three months since they last saw you.\n";
					cout << "You couldn't believe what you were hearing.\n";
					cin.get();
					cout << "You all spend hours questioning one another because you couldn't believe you finally found your family.\n";
					cout << "You are finally happy you are home.\n";
                                	cout << "---------------Congratulations, you completed your mission!!----------------------------\n";
                                    
                                        break;
                                        }
				 else { cout << "You entered an invalid option, please enter 6 or 9."; }
                        		 cin.get();
                			 break;

					  {
                		 default:
                            	 cout << "You have entered an invalid character. Try again.\n";
                            
                		  }
                        
                		 break;
                
                        
				case 4:

					cout << "Rocky Shore\n";


					cout << "There are jagged rocks that from a distance look as swords stabbed in the beach.\n";

					cout << "You start walking to the rocks there seems to be a constant fog looming over it.\n";

					cout << "You are at the rocks and for some reason you get an eerie feeling.\n";

					cout << "Press enter to climb to the top...\n";

					cin.get();

					cout << "You start to climb to the top.\n";

					cout << "You feel pinches on your ankles and legs.\n";

					cout << "Press the enter key to look down...";

					cin.get();

					cout << "You look down and there are crabs snapping at you.\n";

					cout << "The pinches are feeling more like stabs.\n";

					cout << "The pain is excruciating, but your more then halfway to the top.\n";

					cout << "You get to the top of the rocks but your legs are bleeding.\n";

					cout << "You walk around till you hear chanting on the rocks edge, closer to the ocean.\n";

					cout << "As you continue you see a straw hat blowing towards you.\n";

					cout << "Press enter to put hat on...";

					cin.get();

					cout << "Then there is a dim yellow glow to what seems the end of the rocks.\n";

					cout << "As you continue towards the ocean the chanting becomes to get louder.\n";

					cout << "You hear a woman's scream.\n";

					cout << "Push enter to go forward...";

					cin.get();


					cout << "What to do?.\n";

					cout << "You reach the edge and to your dismay the land drops to what looks like a crater.\n";

					cout << "There is a small fire barely illuminating the crater.\n";

					cout << "At the bottom of the crater there is a tribe doing human sacrififces.\n";

					cout << "The scream came from a woman that was getting her heart torn out.\n";

					cout << "There is a line of people with hands bound all look like the tribe all but one.\n";

					cout << "Within the line there is a bald white man with a bushy beard.\n";

					cout << "He is fifth to be sacrificed the second to be sacrificed is having the blade tear through his skin.\n";

					cout << "Press enter to get sneak down...";

					cin.get();

					cout << "You are along the tribe.\n";

					cout << "Since there is little light you and your hat is on you are undetected.\n";

					cout << "The tribe is going to sacrifice the bearded man.\n";

					cout << "Press enter to shout to get the tribes attention...";

					cin.get();

					cout << "The tribe stops chanting and stare at you.\n";

					cout << "They start walking to you.\n";

					cout << "Press enter to charge at the group and retrieve the bearded man...";

					cin.get();

					cout << "You have the bearded man but the tribe is going to surround you.\n";

					cout << "In the corner of your eye you see there is a crack just big enough to fit though.\n";

					cout << "You start running but the tribe is quickly on your tail.\n";

					cout << "You get to the crack but to your dismay the tribe stop as if in fear.\n";

					cout << "As you look away from the tribe and in the distance you see a light.\n";

					cout << "You go towards the light but when you look back the tribe starts throwing rocks.\n";

					cout << "You start pushing the bearded man while the rocks keep hitting you.\n";

					cout << "The light is becoming bigger and brighter.\n";

					cout << "You get to the light which is a cliff.\n";

					cout << "You look back and the tribe is now falling you.\n";

					cout << "Press enter to jump from the cliff...";

					cin.get();

					cout << "You jump into the ocean but the pain of the open wound is unbearable.\n";

					cout << "Your barely conscious when you fell yourself getting grabbed.\n";

					cout << "The bearded man swims the both of you ashore.\n";

					cout << "You two go ashore and when he start talking with an anger face.\n";

					cout << "You feel the bearded mans hands grasping your neck.\n";

					cout << "Press enter to try and fight him...";

					cin.get();

					cout << "The more struggle you put the tighter his grip gets.\n";

					cout << "He YELLS This is for the captian you scum.\n";

					cout << "With your last breath and your vision dissipating you ask WHY!!!.\n";

				}

				break;

			default:
				cout << "Error - Invalid input\n";

				system("pause");


			
	}
} while (coin != 1);

}
