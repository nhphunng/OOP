#include <iostream>
#include <vector>
#include <string> 
#include "skill.h"
using namespace std; 
class Hero
{
    private:
        string heroName;
        unsigned int heroHealth;
        unsigned int heroMana;
        unsigned int heroLevel;
        vector<Skill*> skillList;
    public: 
        Hero();
        Hero(string heroName, unsigned int heroHealth, unsigned int heroMana, unsigned int heroLevel, vector<Skill*> skillList);
        Hero(string heroName, unsigned int heroHealth, unsigned int heroMana, unsigned int heroLevel);
        Hero(string heroName, unsigned int heroHealth, unsigned int heroMana);
        Hero(string heroName, unsigned int heroHealth);
        Hero(string heroName);
        Hero(const Hero& other);
        ~Hero();
        string gettHeroName();
        unsigned int getHeroHealth();
        unsigned int getHeroMana();
        unsigned int getHeroLevel();
        vector<Skill*> getHeroSkills();
        void input();
        void output();
        void displayAvailableSkills();
        void delNSkills(unsigned int n);
};