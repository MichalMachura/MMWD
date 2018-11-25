#include "TimeRange.hpp"

int TimeRange::isEqual(const TimeRange& second) const
    {
    int difference_this = end - begin;
    int difference_second = second.end- second.begin;// ranges lengths

    int difference_begin_second_end_this = end - second.begin;     //between ranges
    if(difference_begin_second_end_this < 0)        //if this is earlier than second
        return difference_begin_second_end_this;

    int difference_ranges = begin - second.end;

    if(difference_ranges > 0)   //if this is later than second
        return difference_ranges;
    else        //they're containing in part or whole
        return 0;
    }

TimeRange& TimeRange::operator=(const TimeRange& second)
    {
    begin = second.begin;
    end = second.end;

    return *this;
    }

std::ostream& operator<<(std::ostream& out, const TimeRange& range)
    {
    out<<"TimeRange:\nbegin: "<<minToString(range.begin)<<"\nend: "<<minToString(range.end)<<"\n";

    return out;
    }
