/**************************************************************************************************
*
* \file Accumulate_2.cpp
* \brief C++ Training - Algorithm Programming Example
*
* Copyright (C) 2015-2024 Klaus Iglberger - All Rights Reserved
*
* This file is part of the C++ training by Klaus Iglberger. The file may only be used in the
* context of the C++ training or with explicit agreement by Klaus Iglberger.
*
* Task: Use the 'accumulate()' algorithm to simulate other standard algorithms, in particular
*       'std::find()' and 'std::sort()'. You may use other algorithms, but not the algorithm
*       being simulated by 'std::accumulate()'.
*
**************************************************************************************************/

#include <cstdlib>
#include <numeric>
#include <iostream>
#include <vector>


int main()
{
   std::vector<int> vec{ 4, 3, 1, 5, 2 };


   // Task 1: Use the 'accumulate()' algorithm to find the value '1' in the given 'std::vector'.
   /*
   int const* const pos = ...;

   if( pos != nullptr ) {
      std::cout << "Found element " << *pos << "\n";
   }
   else {
      std::cout << "Didn't find the sought-after element\n";
   }
   */


   // Task 2: Use the 'accumulate()' algorithm to sort the given 'std::vector'.
   /*
   std::vector<int> sorted = ...;

   std::cout << "The sorted vector:";
   for( int i : sorted ) {
      std::cout << ' ' << i;
   }
   std::cout << '\n';
   */


   return EXIT_SUCCESS;
}
