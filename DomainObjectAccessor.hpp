#ifndef ACCESSOR_HPP
#define ACCESSOR_HPP

#define SETTER(name, Name, Type)  void set##Name(const Type &name)
#define GETTER(name, Name, Type)  Type get##Name() const

#define SETTER_IMPL(Class, name, Name, Type) void Class::set##Name(const Type &name) { this->name = name; }
#define GETTER_IMPL(Class, name, Name, Type) Type Class::get##Name() const { return this->name; }

#endif // ACCESSOR_HPP
