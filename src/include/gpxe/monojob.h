#ifndef _GPXE_MONOJOB_H
#define _GPXE_MONOJOB_H

/** @file
 *
 * Single foreground job
 *
 */

struct job_interface;

extern struct job_interface monojob;
extern int monojob_wait ( void );

#endif /* _GPXE_MONOJOB_H */