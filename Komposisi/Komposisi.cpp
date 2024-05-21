#include <iostream>
#include <string>
using namespace std;

#include "Jantung.h"
#include "manusia.h"

int main() {
    manusia* varManusia = new manusia("Jefri");
    delete varManusia;
    return 0;
}