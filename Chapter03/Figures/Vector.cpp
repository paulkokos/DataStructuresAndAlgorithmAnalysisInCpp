//
// Created by paulkokos on 16/2/2019.
//

#include <form.h>
#include "Vector.h"
#include <algorithm>
#include <lzma.h>

template <typename Object>
class Vector {
public:
    explicit Vector(int initSize =0) : theSize {initSize} , theCapacity {initSize + SPACE_CAPACITY} {objects = new Object[theCapacity];}

    Vector(const Vector &rhs) :theSize{rhs.theSize}, theCapacity {rhs.theCapacity}, objects{nullptr} {
        objects = new Object[theCapacity];

        for (int i = 0; i < theSize; ++i) {
            objects[i] = rhs.objects[i];
        }
    }

    Vector & operator = (const Vector & rhs) {
        Vector copy = rhs;
        std::swap(*this,copy);
        return *this;
    }

    ~Vector() {
        delete [] objects;
    }

    Vector (Vector &&rhs) : theSize{rhs.theSize},theCapacity{rhs.theCapacity},objects{rhs.objects}
    {
        rhs.objects = nullptr;
        rhs.theSize=0;
        rhs.theCapacity = 0;
    }

    Vector &operator = (Vector && rhs) {
        std::swap(theCapacity,rhs.theCapacity);
        std::swap(theSize,rhs.theSize);
        std::swap(objects,rhs.objects);

        return *this;
    }

    void reserve(int newCapacity) {
        if (newCapacity < theSize) {
            return;
        }
        Object *newArray = new Object[newCapacity];

        for (int i = 0; i < theSize; ++i) {
            newArray[i] = std::move(objects[i]);
        }
        theCapacity = newCapacity;
        std::swap(objects,newArray);
        delete[] newArray;
    }

    void resize (int newSize) {
        if (newSize >theCapacity) {
            reserve();
        }
        theSize = newSize;
    }




    static const int SPACE_CAPACITY;

private:
    int theSize;
    int theCapacity;
    Object *objects;
};
