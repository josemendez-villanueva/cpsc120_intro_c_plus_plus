// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-04-26
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 09-01
//
// Made changes to the header file in order to return private data members as well as the point of the ray
//


#include "ray.h"

Point3 Ray::origin() const { 
  //Complete this method
  return origin_;
}

Vec3 Ray::direction() const {
  //Complete this method
  return direction_;
}

Point3 Ray::at(double t) const {
  //Complete this method
  return origin_ + (t * direction_);
}

std::ostream& operator<<(std::ostream& out, const Ray& r) {
  out << "Ray(origin=" << r.origin() << ", direction=" << r.direction() << ")";
  return out;
}
