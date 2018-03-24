
#include <commons/log.h>;

t_log * log_file;
char * log_data;


void log_new(char * log_name);
void log_write(int msg_type,const char * msg);
void log_print();
