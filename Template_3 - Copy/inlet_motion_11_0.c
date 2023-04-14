#include "udf.h"

DEFINE_PROFILE(unsteady_velocity,thread,position)
{
face_t f;
real t=CURRENT_TIME;

begin_f_loop(f,thread)
	{
	F_PROFILE(f,thread,position)=9.424*sin(30*t);
	}

end_f_loop(f,thread)
}