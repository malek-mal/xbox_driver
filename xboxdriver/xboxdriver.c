//
//  xboxdriver.c
//  xboxdriver
//
//  Created by Md.Shahid Ahamed on 3/3/25.
//

#include <mach/mach_types.h>

kern_return_t xboxdriver_start(kmod_info_t * ki, void *d);
kern_return_t xboxdriver_stop(kmod_info_t *ki, void *d);

kern_return_t xboxdriver_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t xboxdriver_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
