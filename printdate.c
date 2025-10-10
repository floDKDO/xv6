#include "types.h"
#include "user.h"
#include "date.h"

int main(int argc, char* argv[])
{
	struct rtcdate r;
	getdate(&r);
	printf(1, "Date: %d/%d/%d, %d:%d:%d\n", r.day, r.month, r.year, r.hour, r.minute, r.second);

	exit();
}
