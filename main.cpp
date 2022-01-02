#include <QCoreApplication>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "first point" << endl;

    cout << "first point in new brunch" << endl;

    return a.exec();
}
