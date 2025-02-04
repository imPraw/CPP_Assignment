#pragma once
#include <string.h>

class Cricketer
{ 
    public:
        char name[20];
        int age;
        int noofmatchplayed;
    class Bowler : public Cricketer
    {
        public:
            int numberOfWickets;
    };
    class Batsman : public Cricketer
    {
        public:
            int numberOfRuns;
            int numberOfCenturies;
    };
};