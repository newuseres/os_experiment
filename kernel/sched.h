#ifndef _SCHED_H_
#define _SCHED_H_

#include "process.h"

//length of a time slice, in number of ticks
#define TIME_SLICE_LEN  2

void insert_to_ready_queue( process* proc );
void insert_to_block_queue( process* proc ,int64 wating_pid);
void when_free_notify_parent( process* proc );
void schedule();

#endif
