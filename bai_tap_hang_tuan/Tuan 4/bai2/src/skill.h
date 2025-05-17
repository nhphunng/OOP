#include <iostream>
#include <string> 
using namespace std; 

class Skill
{
    string skillName; 
    unsigned int skillLevel; 
    public: 
        Skill();
        Skill(string skillName, unsigned int skillLevel);
        string getName();
        unsigned int getskillLevel();
};