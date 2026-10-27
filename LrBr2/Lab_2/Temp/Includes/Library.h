/* Automation Studio generated header file */
/* Do not edit ! */
/* Library  */

#ifndef _LIBRARY_
#define _LIBRARY_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define SPEED_SLOW 300
 #define SPEED_FAST 890
 #define SPEED_STOP 0
 #define DRV_STATE_MASK 111U
 #define STATE_SWITCHED_ON 33U
 #define STATE_ENABLED 39U
 #define STATE_FAULT_BIT 8U
 #define CMD_SHUTDOWN 6U
 #define CMD_SWITCH_ON 7U
 #define CMD_ENABLE 15U
 #define CMD_FAULT_RESET 128U
 #define BLINK_HALF_PERIOD_MS 500U
 #define STATE_READY 35U
#else
 _GLOBAL_CONST signed short SPEED_SLOW;
 _GLOBAL_CONST signed short SPEED_FAST;
 _GLOBAL_CONST signed short SPEED_STOP;
 _GLOBAL_CONST unsigned short DRV_STATE_MASK;
 _GLOBAL_CONST unsigned short STATE_SWITCHED_ON;
 _GLOBAL_CONST unsigned short STATE_ENABLED;
 _GLOBAL_CONST unsigned short STATE_FAULT_BIT;
 _GLOBAL_CONST unsigned short CMD_SHUTDOWN;
 _GLOBAL_CONST unsigned short CMD_SWITCH_ON;
 _GLOBAL_CONST unsigned short CMD_ENABLE;
 _GLOBAL_CONST unsigned short CMD_FAULT_RESET;
 _GLOBAL_CONST unsigned long BLINK_HALF_PERIOD_MS;
 _GLOBAL_CONST unsigned short STATE_READY;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum DoorStates
{	ST_INIT,
	ST_UNKNOWN,
	ST_OPEN,
	ST_CLOSE,
	ST_ACC_POS,
	ST_ACC_NEG,
	ST_POS,
	ST_NEG,
	ST_DEC_POS,
	ST_DEC_NEG
} DoorStates;

typedef struct DriveStateMashine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	signed short speedSet;
	/* VAR_OUTPUT (analog) */
	unsigned short command;
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DriveStateMashine_typ;

typedef struct DoorStateMashine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	signed short speed;
	enum DoorStates doorState;
	/* VAR_INPUT (digital) */
	plcbit sw1;
	plcbit sw2;
	plcbit sw3;
	plcbit sw4;
	plcbit direction;
	/* VAR (digital) */
	plcbit s0Prev;
	plcbit s1Prev;
	plcbit s2Prev;
	plcbit s3Prev;
} DoorStateMashine_typ;

typedef struct LedStateMashine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	unsigned long cycleTime;
	/* VAR_OUTPUT (analog) */
	signed short timer;
	/* VAR (analog) */
	unsigned long elapsed;
	/* VAR_OUTPUT (digital) */
	plcbit led1;
	plcbit led2;
	plcbit led3;
	plcbit led4;
	/* VAR (digital) */
	plcbit blink;
} LedStateMashine_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void DriveStateMashine(struct DriveStateMashine* inst);
_BUR_PUBLIC void DoorStateMashine(struct DoorStateMashine* inst);
_BUR_PUBLIC void LedStateMashine(struct LedStateMashine* inst);


#ifdef __cplusplus
};
#endif
#endif /* _LIBRARY_ */

