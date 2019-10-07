#include < iostream >

using namespace std;

typedef struct element
{
	int num;
	float x;
	float y;
	struct element * next;
} s_point;


void creationList(s_point ** astart);	// The prototype of the function

void printList(s_point * start);		// The prototype of the function


int main(){

	s_point *start;
	
	creationList(&start);
	
	printList(start);

	system("PAUSE");
	delete start;
	return 0;
}


void creationList(s_point **astart){
	int num;
	float x, y;
	s_point *current;

	cout << endl;
	while (cout << "number, x, y : " , cin >> num >> x >> y, num >= 0) {

		current = new s_point;
		current->num = num;
		current->x = x; 
		current->y = y; 

		current->next = *astart;
		*astart = current;
		cout << endl;
	}
}


void printList(s_point * start){

	s_point *srt; srt = new s_point;
	srt = start;

	cout << endl << endl;
	cout << "**** List of the structure **** " << endl;

	while (srt){
			cout << "start->num = " << (srt)->num << endl;
			cout << "start->x = " << (srt)->x << endl;
			cout << "start->y = " << (srt)->y << endl << endl;
			srt = srt->next;
	}
}
