
#define TRACE 100
#define DEBUG 101
#define INFO 102
#define WARNING 103
#define ERROR 104



#include <commons/log.h>;





t_log * log_new(char * log_name);
void log_write(t_log * log_file,int msg_type,const char * msg);
void log_print();
