//
//  GAfitnessSample.h
//  GAero
//
//  Created by Alfonso Carre on 02/04/14.
//  Copyright (c) 2014 Alfonso Carre. All rights reserved.
//
#pragma once
#ifndef GAero_GAfitnessSample_h
#define GAero_GAfitnessSample_h

#include "GAfitnessClass.h"
#include "populationStorage.h"
#include <cmath>

//! Inherited class from GAfitnessClass.
/** Implements a sample example fitness
    function.*/
class GAfitnessSample: public GAfitnessClass {
public:
    //! New non-virtual function for fitness calculation. Specific for 2D genomes.
    double getFitness (std::vector<double> genome);
};

#endif
