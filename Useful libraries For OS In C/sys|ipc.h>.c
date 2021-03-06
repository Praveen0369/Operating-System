<sys/ipc.h>

The <sys/ipc.h> header is used by three mechanisms for XSI interprocess communication (IPC): messages, semaphores, and shared memory. All use a common structure type, ipc_perm, to pass information used in determining permission to perform an IPC operation.

The ipc_perm structure shall contain the following members:

uid_t    uid    Owner's user ID. 
gid_t    gid    Owner's group ID. 
uid_t    cuid   Creator's user ID. 
gid_t    cgid   Creator's group ID. 
mode_t   mode   Read/write permission. 

The uid_t, gid_t, mode_t, and key_t types shall be defined as described in <sys/types.h>.

Definitions shall be provided for the following constants:

Mode bits:

IPC_CREAT
Create entry if key does not exist.
IPC_EXCL
Fail if key exists.
IPC_NOWAIT
Error if request must wait.
Keys:

IPC_PRIVATE
Private key.
Control commands:

IPC_RMID
Remove identifier.
IPC_SET
Set options.
IPC_STAT
Get options.
The following shall be declared as a function and may also be defined as a macro. A function prototype shall be provided.

key_t  ftok(const char *, int);
