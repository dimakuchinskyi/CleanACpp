
#ifndef h_flavors_type
#define h_flavors_type

#include "prod_main.h"
#include "stage_main.h"
#include "dev_main.h"

enum FlavorsType {
	developer,
	stage,
	release
};
class Flavors 
{ 
public:
	static void runApp(FlavorsType flavors_type) {
		switch (flavors_type)
		{
		case developer:
			dev_main();
			break;
		case stage:
			stage_main();
			break;
		case release:
			prod_main();
			break;
		}
	}
}; 
#endif // flavors_type