#include "CurrentThread.h"
#include <pthread.h>
#include <unistd.h>
#include <sys/syscall.h>

namespace CurrentThread{
    void cacheTid(){
    if(t_cachedTid == 0){
        // 通过linux系统调用获取当前线程的id
        t_cachedTid = static_cast<pid_t>(::syscall(SYS_gettid));
        }
    }
}