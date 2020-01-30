#include <iostream>
#include <vector>

using namespace std;


class Person{
protected:
    string firstName;
    string lastName;
    int id;
public:
    Person(string firstName, string lastName, int identification){
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson(){
        cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
    }
    
};

class Student :  public Person{
private:
    vector<int> testScores;
public:
    
    Student(string firstName, string lastName, int identification,vector<int> testScores):Person(firstName,lastName,identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
        this->testScores = testScores;
    }
    
    char calculate()
    {
        char grade = '\0';
        int sum = 0;
        for (int i = 0;i<testScores.size();i++)
        {
            sum += testScores[i];
        }
        sum = sum/testScores.size();
        if (sum<=100 && sum>=90)
        {
            grade = 'O';
        }
        else if (sum<90 && sum>=80)
        {
            grade = 'E';
        }
        else if (sum<80 && sum>=70)
        {
            grade = 'A';
        }
        else if (sum<70 && sum>=55)
        {
            grade = 'P';
        }
        else if (sum<55 && sum>=40)
        {
            grade = 'D';
        }
        else if (sum<40)
        {
            grade = 'T';
        }
        return grade;
    }
    
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for(int i = 0; i < numScores; i++){
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}