
#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;

class Animal {
public:
    Animal (int h, int w, string name);
    Animal ();
    ~Animal();
   
    void setHeight(int cm);
    void setWeight(int w);
    void setName(string name);
    string getName();
    int getHeight();
    int getWeight;
    static int getNumberOfAnimals();
    void toString();
    
private:
    int height;
    int weight;
    string name;
    static int numberOfAnimals;
};

#endif /* ANIMAL_H */

