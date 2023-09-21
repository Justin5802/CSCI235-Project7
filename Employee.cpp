#include "Employee.hpp"

Employee::Employee(std::string name, int id) : name_(name), id_(id) {}

std::string Employee::getName() const {
  return name_;
}

int Employee::getId() const {
  return id_;
}

bool Employee::operator==(const Employee &rhs) const {
  return this->id_ == rhs.id_;
}

bool Employee::operator>(const Employee &rhs) {
  return this->id_ > rhs.id_;
}

bool Employee::operator<(const Employee &rhs) {
  return this->id_ < rhs.id_;
}