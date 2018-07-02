//
// Created by paulkokos on 2/7/2018.
//

#include "IntCell.h"

/*
 * Constructs the IntCell
 * Initial value is initialValue
 */
 IntCell::IntCell(int initialValue ) : storedValue(initialValue) {}

/*
 * Return the storedValue
 */

int IntCell::read() const {

    return storedValue;
}

/*
 * Change the storedValue
 */

void IntCell::write(int x) {
    storedValue = x;
}
