/* Generated by           cobc 2.0.0 */
/* Generated from         logger.cbl */
/* Generated at           Apr 20 2017 16:40:32 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -o bin\logger.dll -std=default -Wall -debug -g -LC:\Users\laury\Documents\Computer School\Recurse Center\Cisp\subroutines\bin -L\subroutines\bin -L..\subroutines\bin logger.cbl */


/* Module path */
static const char		*cob_module_path = NULL;

/* Number of call parameters */
static int		cob_call_params = 0;

/* Attributes */

static const cob_field_attr a_1 =	{0x21,   0,   0, 0x0000, NULL};
static const cob_field_attr a_2 =	{0x01,   0,   0, 0x0000, NULL};
static const cob_field_attr a_3 =	{0x10,  10,   0, 0x0000, NULL};


/* Constants */
static const cob_field c_1	= {6, (cob_u8_ptr)"LOGGER", &a_1};
static const cob_field c_2	= {4, (cob_u8_ptr)"OPEN", &a_1};
static const cob_field c_3	= {5, (cob_u8_ptr)"CLOSE", &a_1};
static const cob_field c_4	= {3, (cob_u8_ptr)"ADD", &a_1};
static const cob_field c_5	= {18, (cob_u8_ptr)"LOG-INIT-PROCEDURE", &a_1};
static const cob_field c_6	= {17, (cob_u8_ptr)"Starting Program!", &a_1};
static const cob_field c_7	= {15, (cob_u8_ptr)"READ FLAG ERROR", &a_1};


/* Strings */
static const char st_1[]	= "logger.cbl";
static const char st_2[]	= "Entry:     LOGGER";
static const char st_3[]	= "Section:   (None)";
static const char st_4[]	= "Paragraph: MAIN-PROCEDURE";
static const char st_5[]	= "MAIN-PROCEDURE";
static const char st_6[]	= "DISPLAY";
static const char st_7[]	= "EVALUATE";
static const char st_8[]	= "PERFORM";
static const char st_9[]	= "GOBACK";
static const char st_10[]	= "Paragraph: LOG-INIT-PROCEDURE";
static const char st_11[]	= "LOG-INIT-PROCEDURE";
static const char st_12[]	= "MOVE";
static const char st_13[]	= "OPEN";
static const char st_14[]	= "WRITE";
static const char st_15[]	= "Paragraph: LOG-WRITE-TO-PROCEDURE";
static const char st_16[]	= "LOG-WRITE-TO-PROCEDURE";
static const char st_17[]	= "ADD";
static const char st_18[]	= "Paragraph: LOG-FLAG-ERROR-PROCEDURE";
static const char st_19[]	= "LOG-FLAG-ERROR-PROCEDURE";
static const char st_20[]	= "Paragraph: LOG-CLOSE-PROCEDURE";
static const char st_21[]	= "LOG-CLOSE-PROCEDURE";
static const char st_22[]	= "CLOSE";
static const char st_23[]	= "Exit:      LOGGER";

