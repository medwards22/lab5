/*
 * Jeff Stubler
 * CS 3841
 * Lab 5 -- UNIX chat program
 * 14 October 2011
 *
 * Network startup thread
 */

#ifndef NETWORK
#define NETWORK

#include "thread.h"
#include "send.h"
#include "receive.h"

void *network_thread(void *);

#endif