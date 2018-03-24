#include "log.h";


int main(void)
{



log_new("tp0");

log_write(0,"holi");

log_write(2,"caca");

log_print();


}


void log_new(char * log_name)
{
	log_file = log_create(log_data,log_name,1,0);

}

void log_write(int msg_type,const char * msg)
{
	switch (msg_type)
	{
	case 0:
		{
			log_trace(log_file,msg);
			break;
		}
	case 1:
		{
			log_debug(log_file,msg);
			break;
		}
	case 2:
		{
			log_info(log_file,msg);
			break;
		}
	case 3:
		{
			log_warning(log_file,msg);
			break;
		}
	case 4:
		{
			log_error(log_file,msg);
			break;
		}
	default:
		break;
	}
}

void log_print()
{
	printf("%s",log_file->file);
}

