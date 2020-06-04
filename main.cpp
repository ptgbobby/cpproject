#include <iostream>



using namespace std;

enum nameType{SAM, MIKE, JOSH, ASHLEY, CHRIS, EMILY, MATT, JESSICA, HANNAH, BETH, STRANGER};

//function prototypes
void game();
bool validAnswer(char answer);
void convert(nameType);
void gameResult();


//global variables
string saying1 = "Dobur li e po matematika?  ";
string saying2 = "moje li da programira? ";
string saying3 = "nosi li ocila? ";
string saying4 = "bil li e otgovornik na klasa? ";
string saying5 = "obicha li barbosa? ";
string saying6 = "obicha li pepi? ";
string saying7 = "obicha li  c++? ";
string saying8 = "ima li gaje? ";
string saying9 = "obicha li uchilishte? ";
string saying10 = "s rusa kosa li e? ";
string saying11 = "zabaven li e? ";
string saying12 = "smotan li e? ";
string saying13 = "psihopat li e? ";
string saying14 = "tvoq nabor li e? ";
string saying15 = "Dhodi li na fitnes ";
string saying16 = "obicha li sporta? ";
string saying17 = "Ot lafkata li qde ";
string saying18 = "pushi li ";
string saying19 = "ima li lubimi predmeti ";
string saying20 = "gamer li e ";
string saying21 = "dobro dete li e ";

string output1 = "MARAQ LI E?  ";
string output2 = "MARAQ LI E?";
string output3 = "MARAQ LI E?";
string output4 = "MARAQ LI E?";
string output5 = "MARAQ LI E?";
string output6 = "MARAQ LI E?";
string output7 = "MARAQ LI E?";
string output8 = "MARAQ LI E?";
string output9 = "MARAQ LI E?";
string output10 = "MARAQ LI E?";
string output11 = "MARAQ LI E? ";
string output12 = "MARAQ LI E?";
string output13 = "MARAQ LI E?";
string output14 = "MARAQ LI E?";
string output15 = "MARAQ LI E?";
string output16 = "MARAQ LI E?";
string output17 = "MARAQ LI E?";
string output18 = "MARAQ LI E?";
string output19 = "MARAQ LI E?";
string output20 = "MARAQ LI E?";
string output21 = "MARAQ LI E?";
string output22 = "MARAQ LI E?";
string output23 = "MARAQ LI E?";


int gameCount;
string str1 = " ";
char choiceGender;
int male;
int female;
int yes;
int no;
string answer;
string response;
int name;
int main()
{
	//variables
	int x = 0;
	game();
	bool validAnswer();
	void game();


	cin >> x;
	return 0;
}//end main
void game()
{
	cout << "UWU DOBRE DOSHLI V POZNAI SUCHENIKA SI AKINATOR. UWU" << endl;

	cout << "USLOVIQ: " << endl;
	cout << "VUVEDI M ILI m AKO E MUJ" << endl;
	cout << "Vuvedi F ILI f AKO E JENA " << endl;
	cout << "VUVEDI Y ILI y AKO E DA" << endl;
	cout << "Vuvedi N ILI n AKO E NE" << endl;

	cout << "igrata zapochva " << endl;
	cout << "CHOVEKA OT KLASA JENA LI E" << endl;

	cin >> answer;

      if(answer == "M"){
            response = "male";
      }
      if(answer == "F"){
            response = "female";
      }
      if(answer == "Y"){
            response = "yes";
      }
      if(answer == "N"){
            response = "no";
      }
	if (response == "male")
	{
	cout << saying1 << endl; //Josh
	cin >> answer;
	}
	if (answer == "yes")
	{
	cout << saying5 << endl;
	cin >> answer;
	}
	if (answer == "yes")
	{
	cout << saying7 << endl;
	cin >> answer;
	}
	if (answer == "yes")
	{
	cout << "VLADKO!" << endl;
	}

	cout << saying2 << endl;//Matt
	cin >> answer;

	cout << saying3 << endl;//Chris
	cin >> answer;

	cout << saying4 << endl;//Mike
	cin >> answer;

	cout << saying5 << endl;//Josh
	cin >> answer;

	cout << saying6 << endl;//Matt
	cin >> answer;

	cout << saying7 << endl;//Josh
	cin >> answer;

	cout << saying8 << endl;//Chris
	cin >> answer;

	cout << saying9 << endl;//Chris
	cin >> answer;

	cout << saying10 << endl;//Mike\Josh
	cin >> answer;

	cout << saying11 << endl;//Josh
	cin >> answer;

	cout << saying12 << endl;//Josh
	cin >> answer;

	cout << saying13 << endl;//Josh\Chris
	cin >> answer;

	cout << saying14 << endl;//Josh
	cin >> answer;

	cout << saying15 << endl;//Chris\Mike\Matt
	cin >> answer;

	cout << saying16 << endl; //Mike
	cin >> answer;

	cout << saying17 << endl;//Mike\Matt
	cin >> answer;

	cout << saying18 << endl;//Chris
	cin >> answer;

//IGGY IS THE BEST!!
	cout << saying19 << endl;//Josh\Stranger
	cin >> answer;

	cout << saying20 << endl; //stranger
	cin >> answer;

	cout << saying21 << endl; //Stranger
	cin >> answer;






	if (response == "female")
	{
	cout << output1 << endl;//Sam
	cin >> answer;

	cout << output2 << endl;//Sam\Emily
	cin >> answer;

	cout << output3 << endl;//Hannah\Beth|Jessica
	cin >> answer;

	cout << output4 << endl;//Jessica
	cin >> answer;

	cout << output5 << endl;//Emily
	cin >> answer;

	cout << output6 << endl;//Ashley
	cin >> answer;

	cout << output7 << endl;//Sam
	cin >> answer;

	cout << output8 << endl;//Hannah\Beth\Sam
	cin >> answer;

	cout << output9 << endl;//Jessica
	cin >> answer;

	cout << output10 << endl;//Jessica
	cin >> answer;

	cout << output11 << endl;//Emily
	cin >> answer;

	cout << output12 << endl;//Emily
	cin >> answer;

	cout << output13 << endl;//Sam\Jessica
	cin >> answer;

	cout << output14 << endl;//Ashley
	cin >> answer;

	cout << output15 << endl;//Hannah\Beth
	cin >> answer;

	cout << output16 << endl;//Hannah\Beth
	cin >> answer;

	cout << output17 << endl;//Hannah\Beth
	cin >> answer;

	cout << output18 << endl;//Hannah
	cin >> answer;

	cout << output19 << endl;//Beth
	cin >> answer;

	cout << output20 << endl;//Hannah
	cin >> answer;

	cout << output21 << endl;//Hannah
	cin >> answer;

	cout << output22 << endl;//Hannah
	cin >> answer;


	cout << output23 << endl;//Ashley
	cin >> answer;




	}//end else if
}//end void game
bool validAnswer(char answer)
{
	switch (answer)
	{
	case 'M':
	case 'm':
	case 'F':
	case 'f':
	case 'Y':
	case 'y':
	return true;
	default:
	return false;

	}//end switch answer
	if (answer == 'M' || answer == 'm')
	response = male;
	else if (answer == 'F' || answer == 'f')
	response = female;
	else if (answer == 'Y' || answer == 'y')
	response = yes;
	else if (answer == 'N' || answer == 'n')
	response = no;
}//end validAnswer
void convert()
{
	switch (name)
	{
	case JOSH:
	cout << "VLADKO";
	break;
	case CHRIS:
	cout << "BOBI";
	break;


	}//end switch
}//end void convert 
