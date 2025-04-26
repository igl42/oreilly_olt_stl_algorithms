#==================================================================================================
#
#  Makefile for subchapter "Algorithms" of chapter "Concepts and the STL"
#
#  Copyright (C) 2015-2025 Klaus Iglberger - All Rights Reserved
#
#  This file is part of the C++ training by Klaus Iglberger. The file may only be used in the
#  context of the C++ training or with explicit agreement by Klaus Iglberger.
#
#==================================================================================================


# Compiler settings
CXX = g++
CXXFLAGS = -std=c++20 -Wall


# Setting the source and binary files
SRC = $(wildcard *.cpp)
BIN = $(SRC:.cpp=)


# Rules
default: Accumulate_1 Accumulate_2 BadAccumulate BadCopy BadTransform CartesianProduct \
         ExtractStrings Fibonacci IsEmailAddress IsPalindrome IsPunct LongestStreak \
         MajorityVote Median Partition RangesRefactoring_Animals RangesRefactoring_Birthday \
         RangesRefactoring_Countries RangesRefactoring_Recipes \
         STLintro STLpro Simpson SimpsonPro SortSubrange Trap

Accumulate_1: Accumulate_1.cpp
	$(CXX) $(CXXFLAGS) -o Accumulate_1 Accumulate_1.cpp

Accumulate_2: Accumulate_2.cpp
	$(CXX) $(CXXFLAGS) -o Accumulate_2 Accumulate_2.cpp

BadAccumulate: BadAccumulate.cpp
	$(CXX) $(CXXFLAGS) -o BadAccumulate BadAccumulate.cpp

BadCopy: BadCopy.cpp
	$(CXX) $(CXXFLAGS) -o BadCopy BadCopy.cpp

BadTransform: BadTransform.cpp
	$(CXX) $(CXXFLAGS) -o BadTransform BadTransform.cpp

CartesianProduct: CartesianProduct.cpp
	$(CXX) $(CXXFLAGS) -o CartesianProduct CartesianProduct.cpp

ExtractStrings: ExtractStrings.cpp
	$(CXX) $(CXXFLAGS) -o ExtractStrings ExtractStrings.cpp

Fibonacci: Fibonacci.cpp
	$(CXX) $(CXXFLAGS) -o Fibonacci Fibonacci.cpp

IsEmailAddress: IsEmailAddress.cpp
	$(CXX) $(CXXFLAGS) -o IsEmailAddress IsEmailAddress.cpp

IsPalindrome: IsPalindrome.cpp
	$(CXX) $(CXXFLAGS) -o IsPalindrome IsPalindrome.cpp

IsPunct: IsPunct.cpp
	$(CXX) $(CXXFLAGS) -o IsPunct IsPunct.cpp

LongestStreak: LongestStreak.cpp
	$(CXX) $(CXXFLAGS) -o LongestStreak LongestStreak.cpp

MajorityVote: MajorityVote.cpp
	$(CXX) $(CXXFLAGS) -o MajorityVote MajorityVote.cpp

Median: Median.cpp
	$(CXX) $(CXXFLAGS) -o Median Median.cpp

Partition: Partition.cpp
	$(CXX) $(CXXFLAGS) -o Partition Partition.cpp

RangesRefactoring_Animals: RangesRefactoring_Animals.cpp
	$(CXX) $(CXXFLAGS) -o RangesRefactoring_Animals RangesRefactoring_Animals.cpp

RangesRefactoring_Birthday: RangesRefactoring_Birthday.cpp
	$(CXX) $(CXXFLAGS) -o RangesRefactoring_Birthday RangesRefactoring_Birthday.cpp

RangesRefactoring_Countries: RangesRefactoring_Countries.cpp
	$(CXX) $(CXXFLAGS) -o RangesRefactoring_Countries RangesRefactoring_Countries.cpp

RangesRefactoring_Recipes: RangesRefactoring_Recipes.cpp
	$(CXX) $(CXXFLAGS) -o RangesRefactoring_Recipes RangesRefactoring_Recipes.cpp

STLintro: STLintro.cpp
	$(CXX) $(CXXFLAGS) -o STLintro STLintro.cpp

STLpro: STLpro.cpp
	$(CXX) $(CXXFLAGS) -o STLpro STLpro.cpp

Simpson: Simpson.cpp
	$(CXX) $(CXXFLAGS) -o Simpson Simpson.cpp

SimpsonPro: SimpsonPro.cpp
	$(CXX) $(CXXFLAGS) -o SimpsonPro SimpsonPro.cpp

SortSubrange: SortSubrange.cpp
	$(CXX) $(CXXFLAGS) -o SortSubrange SortSubrange.cpp

Trap: Trap.cpp
	$(CXX) $(CXXFLAGS) -o Trap Trap.cpp

clean:
	@$(RM) $(BIN)


# Setting the independent commands
.PHONY: default clean
