<sys/types.h>

The <sys/types.h> header shall include definitions for at least the following types:

blkcnt_t
Used for file block counts.
blksize_t
Used for block sizes.
clock_t
[XSI] [Option Start] Used for system times in clock ticks or CLOCKS_PER_SEC; see <time.h>. [Option End]
clockid_t
[TMR] [Option Start] Used for clock ID type in the clock and timer functions. [Option End]
dev_t
Used for device IDs.
fsblkcnt_t
[XSI] [Option Start] Used for file system block counts. [Option End]
fsfilcnt_t
[XSI] [Option Start] Used for file system file counts. [Option End]
gid_t
Used for group IDs.
id_t
[XSI] [Option Start] Used as a general identifier; can be used to contain at least a pid_t, uid_t, or gid_t. [Option End]
ino_t
Used for file serial numbers.
key_t
[XSI] [Option Start] Used for XSI interprocess communication. [Option End]
mode_t
Used for some file attributes.
nlink_t
Used for link counts.
off_t
Used for file sizes.
pid_t
Used for process IDs and process group IDs.
pthread_attr_t
[THR] [Option Start] Used to identify a thread attribute object. [Option End]
pthread_barrier_t
[BAR] [Option Start] Used to identify a barrier. [Option End]
pthread_barrierattr_t
[BAR] [Option Start] Used to define a barrier attributes object. [Option End]
pthread_cond_t
[THR] [Option Start] Used for condition variables. [Option End]
pthread_condattr_t
[THR] [Option Start] Used to identify a condition attribute object. [Option End]
pthread_key_t
[THR] [Option Start] Used for thread-specific data keys. [Option End]
pthread_mutex_t
[THR] [Option Start] Used for mutexes. [Option End]
pthread_mutexattr_t
[THR] [Option Start] Used to identify a mutex attribute object. [Option End]
pthread_once_t
[THR] [Option Start] Used for dynamic package initialization. [Option End]
pthread_rwlock_t
[THR] [Option Start] Used for read-write locks. [Option End]
pthread_rwlockattr_t
[THR] [Option Start] Used for read-write lock attributes. [Option End]
pthread_spinlock_t
[SPI] [Option Start] Used to identify a spin lock. [Option End]
pthread_t
[THR] [Option Start] Used to identify a thread. [Option End]
size_t
Used for sizes of objects.
ssize_t
Used for a count of bytes or an error indication.
suseconds_t
[XSI] [Option Start] Used for time in microseconds. [Option End]
time_t
Used for time in seconds.
timer_t
[TMR] [Option Start] Used for timer ID returned by timer_create(). [Option End]
trace_attr_t
[TRC] [Option Start] Used to identify a trace stream attributes object. [Option End]
trace_event_id_t
[TRC] [Option Start] Used to identify a trace event type. [Option End]
trace_event_set_t
[TRC TEF] [Option Start] Used to identify a trace event type set. [Option End]
trace_id_t
[TRC] [Option Start] Used to identify a trace stream. [Option End]
uid_t
Used for user IDs.
useconds_t
[XSI] [Option Start] Used for time in microseconds. [Option End]
