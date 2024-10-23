#include <bits/stdc++.h>
using namespace std;

class Company {
protected:
    string companyName;
    string location;
};

class Team : protected Company {
protected:
    string team_name;
    string project;
};

class Developer : protected Team {
protected:
    string developerName;
    string programmingLanguage;

public:
    Developer(string compName, string loc, string teamName, string proj, string devName, string progLang)
        {
            developerName = devName ;
            programmingLanguage = progLang;
        companyName = compName;
        location = loc;
        team_name = teamName;
        project = proj;
    }

    void displayAttributes() const {
        cout << "Company Name: " << companyName << endl;
        cout << "Location: " << location << endl;
        cout << "Team Name: " << team_name << endl;
        cout << "Project: " << project << endl;
        cout << "Developer Name: " << developerName << endl;
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};




int main() {
    Developer dev("TechCorp", "Silicon Valley", "Alpha Team", "Project X", "John Doe", "C++");
    cout << "Developer Details:" << endl;
    dev.displayAttributes();
    return 0;
}