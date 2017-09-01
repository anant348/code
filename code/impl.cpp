#include "myspace.h"
bool myspace::iseven(int n){
	if(n==0)
		return true;
	if(isodd(n-1))
		return true;
	else
		return false;
}
bool myspace::isodd(int n){
	if(n==0)
		return false;
	if(iseven(n-1))
		return true;
	else
		return false;
}