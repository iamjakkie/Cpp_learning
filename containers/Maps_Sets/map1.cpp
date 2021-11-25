#include <map>
#include <iostream>
#include <string>
#include <cmath>

struct Point {
    int x;
    int y;
  };

double radius(Point p){
  return std::sqrt(p.x*p.x + p.y*p.y);
}

int main(){
  auto p1 = Point{17, 51};
  auto p2 = Point{37, 55};
  auto p3 = Point{-74, 40};
  auto p4 = Point{151, 33};

  std::map<std::string, Point> cities = {
    {"Wrocław", p1},
    {"Moskwa", p2},
    {"Nowy Jork", p3},
    {"Sydney", p4}
  };

  for (auto& [k,v]: cities){
    if(radius(v) < 70){
      std::cout << k << '\n';
    }
  }

  auto sydney = cities.find("Sydney");

  if (sydney != cities.end()){
    std::cout << sydney->second.x << ',' << sydney->second.y;
  }

  return 0;
}