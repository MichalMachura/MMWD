#include "TimeRange.hpp"

int TimeRange::isEqual(const TimeRange& second) const
    {
    if(end <=second.begin)//thjis is earlier
        return -1;
    else if(second.end <= begin)
        return 1;
    else
        return 0;

    /*
    int difference_this = end - begin;
    int difference_second = second.end- second.begin;// ranges lengths
    int difference_begin_second_end_this = end - second.begin;     //between ranges
    int difference_ranges;  //between this begin and second end

    if(difference_begin_second_end_this < 0)        //if this is earlier than second
        return difference_begin_second_end_this;

    difference_ranges = begin - second.end;

    if(difference_ranges > 0)   //if this is later than second
        return difference_ranges;
    else        //they're containing in part or whole
        return 0;
    */
    }

TimeRange& TimeRange::operator=(const TimeRange& second)
    {
    begin = second.begin;
    end = second.end;

    return *this;
    }

std::ostream& operator<<(std::ostream& out, const TimeRange& range)
    {
    out<<"START:  "<<minToString(range.getBegin())<<"\tSTOP: "<<minToString(range.getEnd());

    return out;
    }
void TimeRange::operator()(int begin_, int end_)
    {
    if(begin_ > end_)
        {
        begin = end_;
        end = begin_;
        }
    else
        {
        begin = begin_;
        end = end_;
        }
    }

bool TimeRange::contain(const TimeRange& range) const
    {
    if(range.begin >= begin)
        {
        if(range.end <= end)
            {//i is contained
            return true;
            }
        }
    return false;
    }


