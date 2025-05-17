#include "hero.h"

Hero:: Hero()
{
    this->heroName = "";
    this->heroHealth = 0;
    this->heroMana = 0;  
    this->heroLevel = 0; 
}

Hero:: Hero(string heroName, unsigned int heroHealth, unsigned int heroMana, unsigned int heroLevel, vector<Skill*> skillList)
{
    this->heroName = heroName; 
    this->heroHealth = heroHealth; 
    this->heroMana = heroMana; 
    this->heroLevel = heroLevel; 
    for(auto it : skillList)
    {
        this->skillList.push_back(it);
    }
}

Hero:: Hero(string heroName, unsigned int heroHealth, unsigned int heroMana, unsigned int heroLevel)
{
    this->heroName = heroName; 
    this->heroHealth = heroHealth; 
    this->heroMana = heroMana; 
    this->heroLevel = heroLevel;
}

Hero:: Hero(string heroName, unsigned int heroHealth, unsigned int heroMana)
{
    this->heroName = heroName; 
    this->heroHealth = heroHealth; 
    this->heroMana = heroMana; 
    this->heroLevel = 0;
}

Hero:: Hero(string heroName, unsigned int heroHealth)
{
    this->heroName = heroName; 
    this->heroHealth = heroHealth; 
    this->heroMana = 0; 
    this->heroLevel = 0;
}

Hero:: Hero(string heroName)
{
    this->heroName = heroName; 
    this->heroHealth = 0; 
    this->heroMana = 0; 
    this->heroLevel = 0;
}    

Hero:: Hero(const Hero& other)
{
    this->heroName = other.heroName;
    this->heroHealth = other.heroHealth; 
    this->heroMana = other.heroMana;
    this->heroLevel = other.heroLevel; 
    for(int i = 0; i < other.skillList.size(); i++)
    {
        this->skillList.push_back(other.skillList[i]);
    }
}

string Hero:: gettHeroName()
{
    return this->heroName;
}

unsigned int Hero:: getHeroHealth()
{
    return this->heroHealth; 
}

unsigned int Hero:: getHeroMana()
{
    return this->heroMana;
}

unsigned int Hero:: getHeroLevel()
{
    return this->heroLevel;
}

vector<Skill*> Hero:: getHeroSkills()
{
    return this->skillList; 
}

void Hero:: input()
{
    cout << "Nhap ten vi tuong: ";
    getline(cin, heroName);
    cout << "Nhap chi so mau: ";
    cin >> heroHealth; 
    cout << "Nhap chi so mana: ";
    cin >> heroMana;
    cout << "Nhap cap do tuong: ";
    cin >> heroLevel;
    while(true)
    {
        cout << "Nhap chieu thuc cua vi tuong, nhap 0 de thoat: ";
        string skill; 
        unsigned int skillLevel; 
        cin.ignore();
        getline(cin, skill);
        if(skill == "0")
            break;
        cout << "Nhap cap do chieu thuc: ";
        cin >> skillLevel; 
        Skill *s = new Skill(skill, skillLevel);
        skillList.push_back(s);
    }
}

void Hero:: output()
{
    cout << heroName << " " << heroHealth << " " << heroMana << " " << heroLevel << endl; 
    for(auto it : this->skillList)
    {
        cout << it->getName() << " "; 
        cout << it->getskillLevel() << endl; 
    }
}

void Hero:: displayAvailableSkills()
{
    cout << "Skill ma Hero co the su dung: \n"; 
    for(auto it : skillList)
    {
        if(it->getskillLevel() < this->heroLevel)
        {
            cout << it->getName() << " ";
            cout << it->getskillLevel() << endl; 
        }
    }
}
void Hero:: delNSkills(unsigned int n)
{
    if(n > skillList.size())
        skillList.clear();
    else 
    {
        for(int i = 0; i < n; i++)
        {
            skillList.pop_back();
        }
    }
}

Hero :: ~Hero()
{
    for(auto it : skillList)
    {
        delete it; 
    }
}
 




