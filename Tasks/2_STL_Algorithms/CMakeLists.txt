#==================================================================================================
#
#  CMakeLists for subchapter "Algorithms" of chapter "Concepts and the STL"
#
#  Copyright (C) 2015-2025 Klaus Iglberger - All Rights Reserved
#
#  This file is part of the C++ training by Klaus Iglberger. The file may only be used in the
#  context of the C++ training or with explicit agreement by Klaus Iglberger.
#
#==================================================================================================

cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)

add_executable(Accumulate_1
   Accumulate_1.cpp
   )

add_executable(Accumulate_2
   Accumulate_2.cpp
   )

add_executable(AlgorithmPerformance1
   AlgorithmPerformance1.cpp
   )

add_executable(BadAccumulate
   BadAccumulate.cpp
   )

add_executable(BadCopy
   BadCopy.cpp
   )

add_executable(BadFind
   BadFind.cpp
   )

add_executable(BadRemove
   BadRemove.cpp
   )

add_executable(BadTransform
   BadTransform.cpp
   )

add_executable(CartesianProduct
   CartesianProduct.cpp
   )

add_executable(EqualRange
   EqualRange.cpp
   )

add_executable(ExtractStrings
   ExtractStrings.cpp
   )

add_executable(Fibonacci
   Fibonacci.cpp
   )

add_executable(IsEmailAddress
   IsEmailAddress.cpp
   )

add_executable(IsPalindrome
   IsPalindrome.cpp
   )

add_executable(IsPunct
   IsPunct.cpp
   )

add_executable(LongestStreak
   LongestStreak.cpp
   )

add_executable(MajorityVote
   MajorityVote.cpp
   )

add_executable(Median
   Median.cpp
   )

add_executable(NthElement
   NthElement.cpp
   )

add_executable(Partition
   Partition.cpp
   )

add_executable(RangesExample
   RangesExample.cpp
   )

add_executable(RangesRefactoring_Animals
   RangesRefactoring_Animals.cpp
   )

add_executable(RangesRefactoring_Birthday
   RangesRefactoring_Birthday.cpp
   )

add_executable(RangesRefactoring_Countries
   RangesRefactoring_Countries.cpp
   )

add_executable(RangesRefactoring_Recipes
   RangesRefactoring_Recipes.cpp
   )

add_executable(Simpson
   Simpson.cpp
   )

add_executable(SimpsonPro
   SimpsonPro.cpp
   )

add_executable(SortSubrange
   SortSubrange.cpp
   )

add_executable(STLintro
   STLintro.cpp
   )

add_executable(STLpro
   STLpro.cpp
   )

add_executable(Trap
   Trap.cpp
   )

set_target_properties(
   Accumulate_1
   Accumulate_2
   AlgorithmPerformance1
   BadAccumulate
   BadCopy
   BadFind
   BadRemove
   BadTransform
   CartesianProduct
   EqualRange
   ExtractStrings
   Fibonacci
   IsEmailAddress
   IsPalindrome
   IsPunct
   LongestStreak
   MajorityVote
   Median
   NthElement
   Partition
   RangesExample
   RangesRefactoring_Animals
   RangesRefactoring_Birthday
   RangesRefactoring_Countries
   RangesRefactoring_Recipes
   Simpson
   SimpsonPro
   SortSubrange
   STLintro
   STLpro
   Trap
   PROPERTIES
   FOLDER "2_STL_Algorithms"
   )
