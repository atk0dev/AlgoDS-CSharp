#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void main()
{
    std::vector<std::string> peopleInMathClass, peopleInGymClass, peopleInMathAndGym(3);

    peopleInGymClass.push_back("Biff");
    peopleInGymClass.push_back("Marty");
    
    peopleInMathClass.push_back("Emmett");
    peopleInMathClass.push_back("Marty");

    set_intersection(peopleInGymClass.begin(),  peopleInGymClass.end(),
              peopleInMathClass.begin(), peopleInMathClass.end(),    
              peopleInMathAndGym.begin());

    for (std::vector<std::string>::iterator it=peopleInMathAndGym.begin(); it < peopleInMathAndGym.end(); it++ ) {
        std::cout << *it << std::endl;
    }
}


