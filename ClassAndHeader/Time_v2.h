

#ifndef TIME_H
#define TIME_H

class Time {
private:
    int hour;
    int minute;
    int second;
    
public:
    // Constructor
    Time(const int h = 0, const int m = 0, const int s = 0);
    
    // setter 
    void setTime(const int h, const int m, const int s);
    
    // Print a description of object in " hh:mm:ss"
    void print() const;
    
    // compare two time object
    bool equals(const Time&);
};

#endif /* TIME_H */

