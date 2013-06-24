#ifndef PERSON_HPP
#define PERSON_HPP

#include <QString>
#include "DomainObjectAccessor.hpp"

struct PersonPrivate;

class Person {
public:
    Person();

    SETTER(id, Id, int);
    GETTER(id, Id, int);

    SETTER(name, Name, QString);
    GETTER(name, Name, QString);

private:
    int id;
    QString name;
};

#endif // PERSON_HPP
