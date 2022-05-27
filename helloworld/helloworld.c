// Hellow world driver example
// https://medium.com/@knownsec404team/how-to-develop-linux-driver-from-scratch-cc143e0c08a1

#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Hcamal");

int hello_init(void)
{
    // printk is the kernel print function
    printk(KERN_INFO "MyFirstDriver: Hello World\n");
    // 0 is success, negative values as error
    return 0;
}

void hello_exit(void)
{
    printk(KERN_INFO "MyFirstDriver: Goodbye World\n");
}

module_init(hello_init);
module_exit(hello_exit);

