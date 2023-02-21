#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
    double n = (min(((R1.x)+R1.w),((R2.x)+R2.w)) - max(R1.x,R2.x))*(min(R1.y,R2.y) - max(((R1.y)-R1.h),((R2.y)-R2.h)));
    if(n > 0){
        return n;
    }else{
        return 0;
    }
}