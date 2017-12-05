#ifndef POLY_X_H
#define POLY_X_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "overlapanalysis.h"
#include "filterresult.h"
#include "options.h"

using namespace std;

class PolyX{
public:
    PolyX();
    ~PolyX();

    static void trimPolyG(Read* r1, Read* r2, FilterResult* fr);
    static void trimPolyG(Read* r1, FilterResult* fr);
    static bool test();


};


#endif