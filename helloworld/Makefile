# if KERNELRELEASE is not equal to the empty string then
# we have been called from command line
ifneq ($(KERNELRELEASE),)    
	# if we are here then we have been called by kbuild and therefore
	# we can add our .o file to its existing list
	obj-m := helloworld.o
else    
	KERN_DIR ?= /usr/src/kernels/$(shell uname -r)/
	PWD := $(shell pwd)

default:
	# -C: Change directory to KERN_DIR
	# -M: make our output files in the current directory
	# modules is a target in the Makefile in KERN_DIR
	$(MAKE) -C $(KERN_DIR) M=$(PWD) modules
endif

clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions