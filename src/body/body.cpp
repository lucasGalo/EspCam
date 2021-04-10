#include "body.h"


Body::Body()
{
    count = 0;
}

int Body::getCount()
{
    return count;
}

void Body::increment()
{
    count++;
}