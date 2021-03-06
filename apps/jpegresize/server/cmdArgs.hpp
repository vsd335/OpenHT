#pragma once
#include <string>
#include <getopt.h>

#define DEFAULT_PORT 18811
#define DEFAULT_INTERFACE "0.0.0.0"
#define DEFAULT_QUALITY 85
#define DEFAULT_THREADS 1

using namespace std;
bool parseArgs(int argc, char *argv[]);
void printArgs(void);
  
//This enum defines our command line arguments.  Note that "argUnknown" is not 
//actually included for command line parsing, but is included in the enum 
//for completeness.  
enum cmdLineArg {
  argHelp='h',
  argInterface='i',
  argNoMagick='m',  
  argPort='p',
  argDefaultQuality='q',  
  argNoServerRead='r',
  argSyslog='s',
  argThreads='t',
  argVersion='v',  
  argNoServerWrite='w',    
  argStats,
  argUnknown='?',
};

//Struct that will hold all our command line arguments.  We will go ahead and 
//make it global since we should only ever need one of these.
struct arguments {
  string iface;
  int port;
  bool noRead;
  bool noWrite;
  int threads;
  bool noMagick;
  bool syslog;
  int quality;
  bool addRestarts;
  int stats;
  arguments() {
    iface=DEFAULT_INTERFACE;
    port=DEFAULT_PORT;
    noRead=false;
    noWrite=false;
    threads=DEFAULT_THREADS;
    noMagick=false;
    syslog=false;
    quality=DEFAULT_QUALITY;
    addRestarts=false;
    stats=0;
  };
};

extern struct arguments appArguments;
    

//Define the options to be parsed by getopt_long.
const struct option longOpts[] = {
    {"version",   		no_argument,        0, argVersion},
    {"help",      		no_argument,        0, argHelp},
    {"interface",     		required_argument,  0, argInterface},
    {"port",     		required_argument,  0, argPort},
    {"no_server_read",  	no_argument,	    0, argNoServerRead},
    {"no_server_write", 	no_argument,  	    0, argNoServerWrite},
    {"threads",     		required_argument,  0, argThreads},
    {"no_magick_fallback",	no_argument, 	    0, argNoMagick},
    {"default_quality",		required_argument,  0, argDefaultQuality},
    {"syslog",			no_argument,	    0, argSyslog},
    {"stats",			required_argument,  0, argStats}, 
    {0,0,0,0},
};

//Initialize the short option string with all the arguments that have a short
//option.  Using the enumerated values allows us to change the short option
//character without having to go edit a whole bunch of code in different places.
const char shortOpts[]={
  argVersion,
  argHelp,
  argInterface,':',
  argPort,':',
  argNoServerRead,
  argNoServerWrite,
  argSyslog,
  argThreads,':',
  argNoMagick,
  argDefaultQuality,':',
  argStats,
};


 
