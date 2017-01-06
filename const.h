

////////////////COMMON PART//////////////////////
#define NB_QUEUES 2


/////////////////FOR MASTER/////////////////////
//Number of servers connected ot the master
#define NB_MACHINES 7


//The parameters of the simulation loop
#define SEQUENCE_SIZE 300000
#define NB_SIMULS 100
#define INTERVAL_SIZE_MIN 5000
#define INTERVAL_SIZE_MAX 50000

#define STEP 45000

#define MOD 2// 0 For round count, 1 for optimized version


//The maximum number of clients in a queue
#define BUFF_MAX 100

// For mod 0 : if 1, then return the number of rounds, if 0, return the number of calulcated intervals
#define MACRO 0

////////////////////For servers///////////////////////

#define EXEC_TYPE 1// 0 = 127.0.0.1 / 1=192.168.90.178

#define SizeDistrib 3*NB_QUEUES
#define LOAD 1.0
