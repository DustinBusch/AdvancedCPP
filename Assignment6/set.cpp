/* Math Set -- Intersection, Union, Difference and build Sets with EmptySet 
* Author: Dustin Busch */

#include <iostream>
#include <unordered_set>
#include <algorithm>
// Idee: Unordered Set as Container. Implement Union, Difference and Intersection for sets.

// Implement Union of Sets
template <class Data> 
std::unordered_set<Data> Union(std::unordered_set<Data> &Set1, std::unordered_set<Data> &Set2) {
  std::unordered_set<Data> U = Set1;
  // handles duplicates by default
  U.insert(Set2.begin(), Set2.end());
  return U;
}

// Implement Intersection of Sets
template <class Data> 
std::unordered_set<Data> Intersection(std::unordered_set<Data> &Set1, std::unordered_set<Data> &Set2) {
  std::unordered_set<Data> I;
  for (auto &element : Set1) {
    if (Set2.count(element) > 0) {
      I.insert(element);
    }
  }
  return I;
}

// Implement Difference of Sets
template <class Data> 
std::unordered_set<Data> Difference(std::unordered_set<Data> &Set1, std::unordered_set<Data> &Set2) {
  std::unordered_set<Data> Diff = Set1;
  for (auto element : Set2) {
      Diff.erase(element);
  }
  return Diff;
}

// Transform Elements of Set
template <class Data, typename Functor>
std::unordered_set<Data> Transform(const std::unordered_set<Data>& Set, Functor f) {
    std::unordered_set<Data> transformedSet;
    std::for_each(Set.begin(), Set.end(), [&transformedSet, &f](const Data& element) {
        transformedSet.insert(f(element));
    });
    return transformedSet;
}


int main( int argc, char *argv[]) {
  std::unordered_set<int> Set1 = {4, 3, 7, 9, 85, 64, 32, 53};
  std::unordered_set<int> Set2 = {35, 64, 4, 9, 53, 32, 3, 10};
  
  std::unordered_set<int> IntSet = Intersection(Set1, Set2);
  std::unordered_set<int> UniSet = Union(Set1, Set2);
  std::unordered_set<int> DiffSet = Difference(Set1, Set2);
  std::unordered_set<int> nSet = Transform(Set1, [] (int element) {return 2*element;}); 

  // Intersection of Sets
  for (const auto elem : IntSet) {
       std::cout << elem << " ";
  }
  
  std::cout << std::endl;

  // Union of Sets 
  for (const auto elem : UniSet) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;

  // Difference of Sets
  for (const auto elem : DiffSet) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;

  for (const auto elem : nSet) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;

  return 0;
}

