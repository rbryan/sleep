#include <stdio.h>
#include <stdlib.h>



int parse_time(char *ts){
	int hour;
	int min;
	char m;
	sscanf(ts,"%i:%i%c",&hour,&min,&m);
	if(hour > 12 || min > 59){
		fprintf(stderr,"Formatting error in inputted time.\n");
		exit(1);
	}
	if(m=='A' || m=='a'){
		if(hour==12){
			return min;
		}
		return hour*60+min;
	}
	if(hour==12){
		return 12*60+min;
	}
	return 12*60+hour*60+min;
}
void print_time(int time){
	int h;
	int m;
	h = time/60;
	m = time%60;
	h = h % 24;
	printf("%d,%d\n",h,m);
	if(h >= 12){
		if(h>12){
			h=h-12;
		}
		printf("%d:%dpm\n",h,m);
	}else{
		if(h==0) h=12;
		printf("%d:%dam\n",h,m);
	}
}
void print_wakeup(int time){
	int i;
	time = time+14;//time to fall asleep;
	for(i=1; i<7; i++){
		print_time(time+90*i);
	}

}

int main(int argc, char **argv){
	
	int time;
	time = parse_time(argv[1]);
	print_wakeup(time);
	print_time(time);

}


