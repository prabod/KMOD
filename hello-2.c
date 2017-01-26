#include <linux/module.h>
#include <linux/kernel.h>

static int __init hello_2_init(void){
	printk(KERN_INFO "HELLO WORLD 2 !!\n");
	return 0;
}

static void __exit hello_2_exit(void){
	printk(KERN_INFO "GOODBYE WORLD 2!!\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);

