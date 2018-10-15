#include <iostream>
using namespace std;

struct student{
	int id;
string name;
int age;
char gender;
float score;
char grade;
};


student newStudent[2];

int main(){
	
//	variables
	int a;
	int b;
	int c;
	int numberOfMales;
	int numberOfFemales;
	int sumOfAges;
	double argScore;
	double age;
	double argAge;
	for(int x=0; x<5; x++){
		cout<<"enter your id ";
	cin>> newStudent.id;
	cout<<"enter your name ";
	cin>> newStudent.name;
	cout<<"enter your age ";
	cin>> newStudent.age;
	cout<<"enter your gender ";
	cin>> newStudent.gender;
	cout<<"enter your score ";
	cin>> newStudent.score;
		if(newStudent.score>=80 && newStudent.score<=100){ 
		newStudent.grade ='A';
		}
		else if(newStudent.score>=70 && newStudent.score<=79){
		newStudent.grade='B';
		} 
		else if(newStudent.score>=60 && newStudent.score<=69){
		newStudent.grade ='C';
		}
		else if(newStudent.score>=50 && newStudent.score<=59){ 
		newStudent.grade='D';
		}
		else if(newStudent.score>=40 && newStudent.score<=49){
		newStudent.grade='E';
		}
		else if(newStudent.score>=0 && newStudent.score<=39){
		newStudent.grade= 'F';
		}
		else {
			cout<<"You entered a wrong score"<<endl;
		}
		
		sumScore += newStudent[x].score;
		    double avgOfScores =  sumOfScores / static_cast<double>(5);
		
		    double sumOfAges += newStudent[x].age; // sumAge = sumAge +
		    double avgOfAges = sumOfAges / 5;
		
				for(int j = 0; j < 5; j++){
            if(myStudent[j].gender == 'M' || myStudent[j].gender == 'm')
                numberOfMales++;

            else if(myStudent[j].gender == 'F' || myStudent[j].gender == 'f')
                numberOfFemales++;
			
}
return 0;
}
