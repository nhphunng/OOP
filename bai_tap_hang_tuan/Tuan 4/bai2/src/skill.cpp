#include "skill.h"

Skill:: Skill()
{
    this->skillName = "";
    this->skillLevel = 0; 
}

Skill:: Skill(string skillName, unsigned int skillLevel)
{
    this->skillName = skillName; 
    this->skillLevel = skillLevel; 
}

string Skill:: getName()
{
    return this->skillName; 
}

unsigned int Skill:: getskillLevel()
{
    return this->skillLevel;
}