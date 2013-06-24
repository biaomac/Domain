#include "Person.hpp"
#include <QString>

Person::Person() {
}

SETTER_IMPL(Person, id, Id, int)
GETTER_IMPL(Person, id, Id, int)

SETTER_IMPL(Person, name, Name, QString)
GETTER_IMPL(Person, name, Name, QString)

