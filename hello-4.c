#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#define DRIVER_AUTHOR "Prabod Rathnayaka"
#define DRIVER_DESC "Demo Driver for Linux Kernel"

static int __init hello_4_init(void){
        printk(KERN_INFO "HELLO WORLD 4!!!\n");
        return 0;
}

static void __exit hello_4_exit(void){
        printk(KERN_INFO "GOODBYE WORLD 4!!");
}

module_init(hello_4_init);
module_exit(hello_4_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE("testdevice");
