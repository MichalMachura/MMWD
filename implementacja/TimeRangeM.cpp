#include "TimeRange.hpp"

int TimeRange::isEqual(TimeRange& second)
    {
    int difference_this = end - begin;
    int difference_second = second.end- second.begin;// range length

    if(difference_this < 0 || difference_second < 0)    // if end is change with begin
        return 0;

    int difference_begin_second_end_this = end - second.begin;     //between ranges
    if(difference_begin_second_end_this < 0)        //if this is earlier than second
        return difference_begin_second_end_this;

    int difference_ranges = difference_begin_second_end_this -difference_second - difference_this; //difference between range's lengths

    if(difference_ranges > 0)   //if this is later than second
        return difference_ranges;
    else        //they're containing in part or whole
        return 0;
    }

