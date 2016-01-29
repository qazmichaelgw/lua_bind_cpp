%module fowl
%include "std_string.i"
%include "std_vector.i"

%{
#include "duck.h"
#include "chicken.h"
#include "roastduck.h"
%}

%include "duck.h"
%include "chicken.h"
%include "roastduck.h"
