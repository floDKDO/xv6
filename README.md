# xv6 kernel

## Added functionalities
- printpgdir function (vm.c) that prints all the present PTE of the page table of the current process
- getdate system call (proc.c) that fills the current date and time in a *struct rtcdate* using the *cmostime* function (lapic.c)
- shared counter to related processes (field *shc* in *struct shctable* in proc.c) using spinlocks to synchronize the read/write access 
- parameter "status" to exit() and "wstatus" to wait()
- getrusage system call that fills the time spent in user and kernel mode, and the maximum Resident Set Size in a *struct rusage*


