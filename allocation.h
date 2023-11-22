#ifndef __ALLOCATION_ALGOS
#define __ALLOCATION_ALGOS

#include "structs.h"

processor_struct *initialize_processor();
int allocate_tasks_to_cores(task_set_struct *task_set, processor_struct *processor);


#endif