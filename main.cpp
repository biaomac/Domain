#include <QDebug>
#include "Person.hpp"

int main(int argc, char *argv[]) {
    Q_UNUSED(argc);
    Q_UNUSED(argv);

    Person p;
    p.setId(1);
    p.setName("Biao");
    qDebug() << p.getId() << p.getName();

    return 0;
}
