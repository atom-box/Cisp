/* Generated by           cobc 2.0.0 */
/* Generated from         recursion.cbl */
/* Generated at           Apr 22 2017 23:36:48 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -o bin\recursion.dll -std=default -Wall -g -LC:\Users\laury\Documents\Computer School\Recurse Center\Cisp\subroutines\bin -L\subroutines\bin -L..\subroutines\bin recursion.cbl */

/* Program local variables for 'RECURSION' */

/* Module initialization indicator */
static unsigned int	initialized = 0;

/* Module structure pointer */
static cob_module	*module = NULL;

/* Global variable pointer */
cob_global		*cob_glob_ptr;


/* File CALL-STACK */
static cob_file_key	*k_CALL_STACK = NULL;
static cob_file		*h_CALL_STACK = NULL;
static unsigned char	h_CALL_STACK_status[4];

/* Call pointers */
static cob_call_union	call_LOGGER;

/* Call parameters */
cob_field		*cob_procedure_params[2];

/* Perform frame stack */
struct cob_frame	*frame_overflow;
struct cob_frame	*frame_ptr;
struct cob_frame	frame_stack[255];


/* Data storage */
static int	b_1;	/* RETURN-CODE */
static cob_u8_t	b_14[51] __attribute__((aligned));	/* CALL-STACK Record */
static cob_u8_t	b_15[71] __attribute__((aligned));	/* WS-CALL-STACK */
static cob_u8_t	b_24[1] __attribute__((aligned));	/* WS-CALL-STACK-EOF */
static cob_u8_t	b_25[5] __attribute__((aligned));	/* WS-CALL-STACK-NEXT-ID */
static cob_u8_t	b_26[1] __attribute__((aligned));	/* WS-IS-LAST-EXPRESSION */
static cob_u8_t	b_28[40] __attribute__((aligned));	/* WS-RETURN */
static cob_u8_t	b_31[11] __attribute__((aligned));	/* WS-STACK-STATUS */
static cob_u8_t	b_36[5] __attribute__((aligned));	/* WS-LOG-OPERATION-FLAG */
static cob_u8_t	b_37[140] __attribute__((aligned));	/* WS-LOG-RECORD */

/* End of data storage */


/* Fields */
static cob_field f_6	= {51, b_14, &a_2};	/* CALL-STACK-FILE */
static cob_field f_7	= {5, b_14, &a_3};	/* COMMAND-ID */
static cob_field f_8	= {20, b_14 + 5, &a_1};	/* COMMAND-NAME */
static cob_field f_11	= {5, b_14 + 45, &a_3};	/* COMMAND-RETURN-ID */
static cob_field f_14	= {51, b_14, &a_1};	/* CALL-STACK Record */
static cob_field f_15	= {71, b_15, &a_2};	/* WS-CALL-STACK */
static cob_field f_16	= {5, b_15, &a_3};	/* WS-COMMAND-ID */
static cob_field f_17	= {20, b_15 + 5, &a_1};	/* WS-COMMAND-NAME */
static cob_field f_18	= {20, b_15 + 25, &a_1};	/* WS-COMMAND-RESULT */
static cob_field f_19	= {20, b_15 + 25, &a_4};	/* WS-COMMAND-RESULT-NUMERIC */
static cob_field f_20	= {5, b_15 + 45, &a_3};	/* WS-COMMAND-RETURN-ID */
static cob_field f_21	= {20, b_15 + 50, &a_1};	/* WS-COMMAND-RETURN-VALUE */
static cob_field f_22	= {1, b_15 + 70, &a_1};	/* WS-COMMAND-RETURNS-RESULT */
static cob_field f_25	= {5, b_25, &a_3};	/* WS-CALL-STACK-NEXT-ID */
static cob_field f_34	= {1, b_31 + 10, &a_1};	/* WS-STACK-IS-EMPTY */
static cob_field f_36	= {5, b_36, &a_1};	/* WS-LOG-OPERATION-FLAG */
static cob_field f_37	= {140, b_37, &a_2};	/* WS-LOG-RECORD */
static cob_field f_38	= {40, b_37, &a_1};	/* WS-LOG-RECORD-FUNCTION-NAME */
static cob_field f_39	= {100, b_37 + 40, &a_1};	/* WS-LOG-RECORD-MESSAGE */
static cob_field f_40	= {30, NULL, &a_1};	/* LS-RECURSION-FLAG */

/* End of fields */

