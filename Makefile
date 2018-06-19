obj-m += irqHandle.o
obj-m += irqTrigger.o
obj-m += SampleNICWorking.o
obj-m += PassArg.o
obj-m += Chardev.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
