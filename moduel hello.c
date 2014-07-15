#include<linux/module.h>
#include<linux/kernel.h>

int init_module(void)
{
        printk(KERN_INFO "hello world 1.\n");
        return 0;
}
void cleanup_module(void)
{
        printk(KERN_INFO "GOODbye world 1.\n");
}

module_init(init_hello);
module_exit(cleanup_hello);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE("testdevice");
