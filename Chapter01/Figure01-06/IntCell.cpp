//
// Created by paulkokos on 2/7/2018.
//

#include "IntCell.h"

/*
 * Constructs the IntCell
 * Initial value is 0
 */

IntCell::IntCell() {
    storedValue = 0;
}

/*
 * Constructs the IntCell
 * Initial value is initialValue
 */

IntCell::IntCell(int initialValue) {
    storedValue = initialValue;

}

/*
 * Return the storedValue
 */

int IntCell::read() {

    return storedValue;
}

/*
 * Change the storedValue
 */

void IntCell::write(int x) {
    storedValue = x;
}
