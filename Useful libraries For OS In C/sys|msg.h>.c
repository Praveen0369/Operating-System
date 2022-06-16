<sys/msg.h>

struct ipc_perm msg_perm   operation permission structure
msgqnum_t       msg_qnum   number of messages currently on queue
msglen_t        msg_qbytes maximum number of bytes allowed on queue
pid_t           msg_lspid  process ID of last msgsnd()
pid_t           msg_lrpid  process ID of last msgrcv()
time_t          msg_stime  time of last msgsnd()
time_t          msg_rtime  time of last msgrcv()
time_t          msg_ctime  time of last change
