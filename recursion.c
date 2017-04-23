/* Generated by           cobc 2.0.0 */
/* Generated from         recursion.cbl */
/* Generated at           Apr 22 2017 23:36:48 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -o bin\recursion.dll -std=default -Wall -g -LC:\Users\laury\Documents\Computer School\Recurse Center\Cisp\subroutines\bin -L\subroutines\bin -L..\subroutines\bin recursion.cbl */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#define  COB_KEYWORD_INLINE __inline
#include <libcob.h>

#define  COB_SOURCE_FILE		"recursion.cbl"
#define  COB_PACKAGE_VERSION		"2.0"
#define  COB_PATCH_LEVEL		0
#define  COB_MODULE_FORMATTED_DATE	"Apr 22 2017 23:36:48"
#define  COB_MODULE_DATE		20170422
#define  COB_MODULE_TIME		233648

/* Global variables */
#include "recursion.c.h"

/* Function prototypes */

__declspec(dllexport) int		RECURSION (cob_u8_t *, cob_u8_t *);
static int		RECURSION_ (const int, cob_u8_t *, cob_u8_t *);

/* Functions */

/* PROGRAM-ID 'RECURSION' */

/* ENTRY 'RECURSION' */

int
RECURSION (cob_u8_t *b_40, cob_u8_t *b_41)
{
  /* Get current number of call parameters,
     if the parameter count is unknown, set it to all */
  if (cob_get_global_ptr ()->cob_current_module) {
	cob_call_params = cob_get_global_ptr ()->cob_call_params;
  } else {
	cob_call_params = 2;
  };

  return RECURSION_ (0, b_40, b_41);
}

static int
RECURSION_ (const int entry, cob_u8_t *b_40, cob_u8_t *b_41)
{
  /* Program local variables */
  #include "recursion.c.l.h"

  /* Start of function code */

  /* CANCEL callback */
  if (unlikely(entry < 0)) {
  	goto P_cancel;
  }

  /* Check initialized, check module allocated, */
  /* set global pointer, */
  /* push module stack, save call parameter count */
  cob_module_enter (&module, &cob_glob_ptr, 0);

  /* Set address of module parameter list */
  module->cob_procedure_params = cob_procedure_params;

  /* Set frame stack pointer */
  frame_ptr = frame_stack;
  frame_ptr->perform_through = 0;
  frame_overflow = frame_ptr + 255 - 1;

  /* Initialize rest of program */
  if (unlikely(initialized == 0)) {
  	goto P_initialize;
  }
  P_ret_initialize:

  /* Increment module active */
  module->module_active++;

  /* Set not passed parameter pointers to NULL */
  switch (cob_call_params) {
  case 0:
  	b_40 = NULL;
  case 1:
  	b_41 = NULL;
  default:
	break;
  }

  /* Entry dispatch */
  goto l_2;

  /* PROCEDURE DIVISION */

  /* Line: 68        : Entry     RECURSION               : recursion.cbl */
  l_2:;

  /* Line: 68        : Paragraph MAIN-PROCEDURE          : recursion.cbl */

  /* Line: 69        : EVALUATE           : recursion.cbl */
  cob_set_location (st_1, 69, NULL, st_2, st_3);

  /* WHEN */

  if (((int)cob_cmp (COB_SET_DATA (f_40, b_40), (cob_field *)&c_1) == 0))
  {

    /* Line: 71        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 71, NULL, st_2, st_4);
    /* PERFORM INIT-CALL-STACK-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 13;
    frame_ptr->return_address_ptr = &&l_20;
    goto l_13;
    l_20:
    frame_ptr--;

    /* Line: 72        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 72, NULL, st_2, st_4);
    /* PERFORM LOG-INIT-CALL-STACK */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 6;
    frame_ptr->return_address_ptr = &&l_21;
    goto l_6;
    l_21:
    frame_ptr--;
    goto l_5;
  }

  /* WHEN */

  if (((int)cob_cmp (COB_SET_DATA (f_40, b_40), (cob_field *)&c_2) == 0))
  {

    /* Line: 74        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 74, NULL, st_2, st_4);
    /* PERFORM CALL-STACK-ADD-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 15;
    frame_ptr->return_address_ptr = &&l_22;
    goto l_15;
    l_22:
    frame_ptr--;

    /* Line: 75        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 75, NULL, st_2, st_4);
    /* PERFORM LOG-ADD-TO-CALL-STACK */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 7;
    frame_ptr->return_address_ptr = &&l_23;
    goto l_7;
    l_23:
    frame_ptr--;
    goto l_5;
  }

  /* WHEN */

  if (((int)cob_cmp (COB_SET_DATA (f_40, b_40), (cob_field *)&c_3) == 0))
  {

    /* Line: 77        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 77, NULL, st_2, st_4);
    /* PERFORM CALL-STACK-GET-TOP-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 17;
    frame_ptr->return_address_ptr = &&l_24;
    goto l_17;
    l_24:
    frame_ptr--;

    /* Line: 78        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 78, NULL, st_2, st_4);
    /* PERFORM LOG-PEEK-CALL-STACK */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 8;
    frame_ptr->return_address_ptr = &&l_25;
    goto l_8;
    l_25:
    frame_ptr--;
    goto l_5;
  }

  /* WHEN */

  if (((int)cob_cmp (COB_SET_DATA (f_40, b_40), (cob_field *)&c_4) == 0))
  {

    /* Line: 80        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 80, NULL, st_2, st_4);
    /* PERFORM LOG-POP-FROM-CALL-STACK */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 9;
    frame_ptr->return_address_ptr = &&l_26;
    goto l_9;
    l_26:
    frame_ptr--;

    /* Line: 81        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 81, NULL, st_2, st_4);
    /* PERFORM POP-CALL-STACK-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 18;
    frame_ptr->return_address_ptr = &&l_27;
    goto l_18;
    l_27:
    frame_ptr--;
    goto l_5;
  }

  /* WHEN */

  if (((int)cob_cmp (COB_SET_DATA (f_40, b_40), (cob_field *)&c_5) == 0))
  {

    /* Line: 83        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 83, NULL, st_2, st_4);
    /* PERFORM IS-STACK-EMPTY-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 19;
    frame_ptr->return_address_ptr = &&l_28;
    goto l_19;
    l_28:
    frame_ptr--;

    /* Line: 84        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 84, NULL, st_2, st_4);
    /* PERFORM LOG-IS-EMPTY-CALL-STACK */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 10;
    frame_ptr->return_address_ptr = &&l_29;
    goto l_10;
    l_29:
    frame_ptr--;
    goto l_5;
  }

  /* WHEN */

  if (((int)cob_cmp (COB_SET_DATA (f_40, b_40), (cob_field *)&c_6) == 0))
  {

    /* Line: 86        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 86, NULL, st_2, st_4);
    /* PERFORM PRINT-CALL-STACK-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 16;
    frame_ptr->return_address_ptr = &&l_30;
    goto l_16;
    l_30:
    frame_ptr--;
    goto l_5;
  }

  /* WHEN */

  if (((int)cob_cmp (COB_SET_DATA (f_40, b_40), (cob_field *)&c_7) == 0))
  {

    /* Line: 88        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 88, NULL, st_2, st_4);
    /* PERFORM CLOSE-CALL-STACK-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 14;
    frame_ptr->return_address_ptr = &&l_31;
    goto l_14;
    l_31:
    frame_ptr--;

    /* Line: 89        : PERFORM            : recursion.cbl */
    cob_set_location (st_1, 89, NULL, st_2, st_4);
    /* PERFORM LOG-CLOSE-CALL-STACK */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 11;
    frame_ptr->return_address_ptr = &&l_32;
    goto l_11;
    l_32:
    frame_ptr--;
    goto l_5;
  }

  /* End EVALUATE */
  l_5:;

  /* Line: 90        : GOBACK             : recursion.cbl */
  cob_set_location (st_1, 90, NULL, st_2, st_5);
  goto exit_program;

  /* Line: 91        : Paragraph LOG-INIT-CALL-STACK     : recursion.cbl */
  l_6:;

  /* Line: 92        : MOVE               : recursion.cbl */
  cob_set_location (st_1, 92, NULL, st_6, st_7);
  memcpy (b_36, "ADD  ", 5);

  /* Line: 93        : MOVE               : recursion.cbl */
  cob_set_location (st_1, 93, NULL, st_6, st_7);
  cob_move ((cob_field *)&c_8, &f_38);

  /* Line: 94        : MOVE               : recursion.cbl */
  cob_set_location (st_1, 94, NULL, st_6, st_7);
  cob_move ((cob_field *)&c_9, &f_39);

  /* Line: 95        : CALL               : recursion.cbl */
  cob_set_location (st_1, 95, NULL, st_6, st_8);
  cob_procedure_params[0] = &f_36;
  cob_procedure_params[1] = &f_37;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_36, b_37);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 6)
    goto *frame_ptr->return_address_ptr;

  /* Line: 96        : Paragraph LOG-ADD-TO-CALL-STACK   : recursion.cbl */
  l_7:;

  /* Line: 98        : MOVE               : recursion.cbl */
  cob_set_location (st_1, 98, NULL, st_9, st_7);
  memcpy (b_37, "RECURSION:ADD-TO-CALL-STACK             ", 40);

  /* Line: 100       : STRING             : recursion.cbl */
  cob_set_location (st_1, 100, NULL, st_9, st_10);
  cob_string_init (&f_39, NULL);
  cob_string_delimited (NULL);
  cob_string_append (&f_7);
  cob_string_delimited (NULL);
  cob_string_append (&f_8);
  cob_string_delimited (NULL);
  cob_string_append (&f_11);
  cob_string_finish ();

  /* Line: 104       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 104, NULL, st_9, st_7);
  memcpy (b_36, "ADD  ", 5);

  /* Line: 105       : CALL               : recursion.cbl */
  cob_set_location (st_1, 105, NULL, st_9, st_8);
  cob_procedure_params[0] = &f_36;
  cob_procedure_params[1] = &f_37;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_36, b_37);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 7)
    goto *frame_ptr->return_address_ptr;

  /* Line: 106       : Paragraph LOG-PEEK-CALL-STACK     : recursion.cbl */
  l_8:;

  /* Line: 108       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 108, NULL, st_11, st_7);
  memcpy (b_37, "RECURSION:GET-TOP-CALL-STACK            ", 40);

  /* Line: 110       : STRING             : recursion.cbl */
  cob_set_location (st_1, 110, NULL, st_11, st_10);
  cob_string_init (&f_39, NULL);
  cob_string_delimited (NULL);
  cob_string_append (&f_7);
  cob_string_delimited (NULL);
  cob_string_append (&f_8);
  cob_string_delimited (NULL);
  cob_string_append (&f_11);
  cob_string_finish ();

  /* Line: 114       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 114, NULL, st_11, st_7);
  memcpy (b_36, "ADD  ", 5);

  /* Line: 115       : CALL               : recursion.cbl */
  cob_set_location (st_1, 115, NULL, st_11, st_8);
  cob_procedure_params[0] = &f_36;
  cob_procedure_params[1] = &f_37;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_36, b_37);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 8)
    goto *frame_ptr->return_address_ptr;

  /* Line: 116       : Paragraph LOG-POP-FROM-CALL-STACK : recursion.cbl */
  l_9:;

  /* Line: 117       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 117, NULL, st_12, st_7);
  cob_move ((cob_field *)&c_10, &f_38);

  /* Line: 119       : STRING             : recursion.cbl */
  cob_set_location (st_1, 119, NULL, st_12, st_10);
  cob_string_init (&f_39, NULL);
  cob_string_delimited (NULL);
  cob_string_append (&f_7);
  cob_string_delimited (NULL);
  cob_string_append (&f_8);
  cob_string_delimited (NULL);
  cob_string_append (&f_11);
  cob_string_finish ();

  /* Line: 123       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 123, NULL, st_12, st_7);
  memcpy (b_36, "ADD  ", 5);

  /* Line: 124       : CALL               : recursion.cbl */
  cob_set_location (st_1, 124, NULL, st_12, st_8);
  cob_procedure_params[0] = &f_36;
  cob_procedure_params[1] = &f_37;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_36, b_37);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 9)
    goto *frame_ptr->return_address_ptr;

  /* Line: 125       : Paragraph LOG-IS-EMPTY-CALL-STACK : recursion.cbl */
  l_10:;

  /* Line: 126       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 126, NULL, st_13, st_7);
  memcpy (b_37, "RECURSION:IS-EMPTY-CALL-STACK           ", 40);

  /* Line: 128       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 128, NULL, st_13, st_7);
  cob_move (&f_34, &f_39);

  /* Line: 129       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 129, NULL, st_13, st_7);
  memcpy (b_36, "ADD  ", 5);

  /* Line: 130       : CALL               : recursion.cbl */
  cob_set_location (st_1, 130, NULL, st_13, st_8);
  cob_procedure_params[0] = &f_36;
  cob_procedure_params[1] = &f_37;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_36, b_37);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 10)
    goto *frame_ptr->return_address_ptr;

  /* Line: 131       : Paragraph LOG-CLOSE-CALL-STACK    : recursion.cbl */
  l_11:;

  /* Line: 133       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 133, NULL, st_14, st_7);
  memcpy (b_37, "RECURSION:CLOSE-CALL-STACK              ", 40);

  /* Line: 135       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 135, NULL, st_14, st_7);
  cob_move ((cob_field *)&c_11, &f_39);

  /* Line: 136       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 136, NULL, st_14, st_7);
  memcpy (b_36, "ADD  ", 5);

  /* Line: 137       : CALL               : recursion.cbl */
  cob_set_location (st_1, 137, NULL, st_14, st_8);
  cob_procedure_params[0] = &f_36;
  cob_procedure_params[1] = &f_37;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_36, b_37);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 11)
    goto *frame_ptr->return_address_ptr;

  /* Line: 138       : Paragraph LOG-DELETE-FROM-CALL-STACK: recursion.cbl */

  /* Line: 140       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 140, NULL, st_15, st_7);
  memcpy (b_37, "RECURSION:DELETE-FROM-CALL-STACK        ", 40);

  /* Line: 142       : STRING             : recursion.cbl */
  cob_set_location (st_1, 142, NULL, st_15, st_10);
  cob_string_init (&f_39, NULL);
  cob_string_delimited (NULL);
  cob_string_append (&f_7);
  cob_string_delimited (NULL);
  cob_string_append (&f_8);
  cob_string_delimited (NULL);
  cob_string_append (&f_11);
  cob_string_finish ();

  /* Line: 146       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 146, NULL, st_15, st_7);
  memcpy (b_36, "ADD  ", 5);

  /* Line: 147       : CALL               : recursion.cbl */
  cob_set_location (st_1, 147, NULL, st_15, st_8);
  cob_procedure_params[0] = &f_36;
  cob_procedure_params[1] = &f_37;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_36, b_37);

  /* Line: 148       : Paragraph INIT-CALL-STACK-PROCEDURE: recursion.cbl */
  l_13:;

  /* Line: 151       : OPEN               : recursion.cbl */
  cob_set_location (st_1, 151, NULL, st_16, st_17);
  cob_open (h_CALL_STACK, 2, 0, NULL);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_33;
    goto l_1;
    l_33:
    frame_ptr--;
  }

  /* Line: 152       : CLOSE              : recursion.cbl */
  cob_set_location (st_1, 152, NULL, st_16, st_18);
  cob_close (h_CALL_STACK, NULL, 0, 0);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_34;
    goto l_1;
    l_34:
    frame_ptr--;
  }

  /* Line: 154       : OPEN               : recursion.cbl */
  cob_set_location (st_1, 154, NULL, st_16, st_17);
  cob_open (h_CALL_STACK, 3, 0, NULL);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_35;
    goto l_1;
    l_35:
    frame_ptr--;
  }

  /* Line: 155       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 155, NULL, st_16, st_7);
  memcpy (b_25, "00001", 5);

  /* Line: 156       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 156, NULL, st_16, st_7);
  memcpy (b_31 + 5, "00001", 5);

  /* Line: 157       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 157, NULL, st_16, st_7);
  memcpy (b_31, "00001", 5);

  /* Line: 158       : SET                : recursion.cbl */
  cob_set_location (st_1, 158, NULL, st_16, st_19);
  *(b_31 + 10) = 89;

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 13)
    goto *frame_ptr->return_address_ptr;

  /* Line: 159       : Paragraph CLOSE-CALL-STACK-PROCEDURE: recursion.cbl */
  l_14:;

  /* Line: 160       : CLOSE              : recursion.cbl */
  cob_set_location (st_1, 160, NULL, st_20, st_18);
  cob_close (h_CALL_STACK, NULL, 0, 0);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_36;
    goto l_1;
    l_36:
    frame_ptr--;
  }

  /* Line: 161       : DELETE             : recursion.cbl */
  cob_set_location (st_1, 161, NULL, st_20, st_21);
  cob_delete_file (h_CALL_STACK, NULL);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 14)
    goto *frame_ptr->return_address_ptr;

  /* Line: 162       : Paragraph CALL-STACK-ADD-PROCEDURE: recursion.cbl */
  l_15:;

  /* Line: 163       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 163, NULL, st_22, st_7);
  memcpy (b_14, b_25, 5);

  /* Line: 164       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 164, NULL, st_22, st_7);
  memmove (b_14 + 5, b_41, 20);

  /* Line: 165       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 165, NULL, st_22, st_7);
  memmove (b_14 + 25, b_41 + 20, 20);

  /* Line: 166       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 166, NULL, st_22, st_7);
  *(b_14 + 50) = *(b_41 + 40);

  /* Line: 167       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 167, NULL, st_22, st_7);
  memcpy (b_14 + 45, b_31, 5);

  /* Line: 168       : WRITE              : recursion.cbl */
  cob_set_location (st_1, 168, NULL, st_22, st_23);
  cob_write (h_CALL_STACK, &f_6, 0, NULL, 0);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_37;
    goto l_1;
    l_37:
    frame_ptr--;
  }

  /* Line: 169       : IF                 : recursion.cbl */
  cob_set_location (st_1, 169, NULL, st_22, st_24);
  if (((int)(int)(*(b_31 + 10) - 89) == 0))
  {

    /* Line: 170       : MOVE               : recursion.cbl */
    cob_set_location (st_1, 170, NULL, st_22, st_7);
    memcpy (b_31 + 5, b_25, 5);

    /* Line: 171       : SET                : recursion.cbl */
    cob_set_location (st_1, 171, NULL, st_22, st_19);
    *(b_31 + 10) = 78;
  }

  /* Line: 173       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 173, NULL, st_22, st_7);
  memcpy (b_31, b_25, 5);

  /* Line: 174       : ADD                : recursion.cbl */
  cob_set_location (st_1, 174, NULL, st_22, st_25);
  cob_add_int (&f_25, 1, 0);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 15)
    goto *frame_ptr->return_address_ptr;

  /* Line: 175       : Paragraph PRINT-CALL-STACK-PROCEDURE: recursion.cbl */
  l_16:;

  /* Line: 176       : DISPLAY            : recursion.cbl */
  cob_set_location (st_1, 176, NULL, st_26, st_27);
  cob_display (0, 1, 1, &c_12);

  /* Line: 177       : DISPLAY            : recursion.cbl */
  cob_set_location (st_1, 177, NULL, st_26, st_27);
  cob_display (0, 1, 5, &c_13, &c_14, &c_15, &c_16, &c_17);

  /* Line: 181       : PERFORM            : recursion.cbl */
  cob_set_location (st_1, 181, NULL, st_26, st_4);
  memcpy (b_14, "00001", 5);
  for (;;)
  {
    if (((int)memcmp (b_14, b_25, 5) == 0))
      break;

    /* Line: 183       : READ               : recursion.cbl */
    cob_set_location (st_1, 183, NULL, st_26, st_28);
    cob_read (h_CALL_STACK, &f_7, NULL, 0);
    if (unlikely(cob_glob_ptr->cob_exception_code != 0))
    {
      if (cob_glob_ptr->cob_exception_code == 0x0506)
      {

        /* Line: 185       : DISPLAY            : recursion.cbl */
        cob_set_location (st_1, 185, NULL, st_26, st_27);
        cob_display (0, 1, 1, &c_18);
      }
      else
      {
        /* PERFORM Default Error Handler */
        frame_ptr++;
        if (unlikely(frame_ptr == frame_overflow))
            cob_fatal_error (COB_FERROR_STACK);
        frame_ptr->perform_through = 1;
        frame_ptr->return_address_ptr = &&l_38;
        goto l_1;
        l_38:
        frame_ptr--;
      }
    }
    else
    {
      cob_move (&f_14, &f_15);
    }

    /* Line: 187       : DISPLAY            : recursion.cbl */
    cob_set_location (st_1, 187, NULL, st_26, st_27);
    cob_display (0, 1, 13, &f_16, &c_19, &f_17, &c_19, &f_18, &c_19, &f_19, &c_19, &f_20, &c_19, &f_21, &c_19, &f_22);
    cob_add_int (&f_7, 1, 0);
  }

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 16)
    goto *frame_ptr->return_address_ptr;

  /* Line: 192       : Paragraph CALL-STACK-GET-TOP-PROCEDURE: recursion.cbl */
  l_17:;

  /* Line: 193       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 193, NULL, st_29, st_7);
  memcpy (b_14, b_31, 5);

  /* Line: 194       : READ               : recursion.cbl */
  cob_set_location (st_1, 194, NULL, st_29, st_28);
  cob_read (h_CALL_STACK, &f_7, NULL, 0);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_39;
    goto l_1;
    l_39:
    frame_ptr--;
  }

  /* Line: 197       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 197, NULL, st_29, st_7);
  memmove (b_41, b_14 + 5, 20);

  /* Line: 198       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 198, NULL, st_29, st_7);
  memmove (b_41 + 20, b_14 + 25, 20);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 17)
    goto *frame_ptr->return_address_ptr;

  /* Line: 199       : Paragraph POP-CALL-STACK-PROCEDURE: recursion.cbl */
  l_18:;

  /* Line: 200       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 200, NULL, st_30, st_7);
  memcpy (b_14, b_31, 5);

  /* Line: 203       : READ               : recursion.cbl */
  cob_set_location (st_1, 203, NULL, st_30, st_28);
  cob_read (h_CALL_STACK, &f_7, NULL, 0);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_40;
    goto l_1;
    l_40:
    frame_ptr--;
  }

  /* Line: 204       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 204, NULL, st_30, st_7);
  memmove (b_41, b_14 + 5, 20);

  /* Line: 205       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 205, NULL, st_30, st_7);
  memmove (b_41 + 20, b_14 + 25, 20);

  /* Line: 206       : MOVE               : recursion.cbl */
  cob_set_location (st_1, 206, NULL, st_30, st_7);
  memcpy (b_31, b_14 + 45, 5);

  /* Line: 207       : DELETE             : recursion.cbl */
  cob_set_location (st_1, 207, NULL, st_30, st_21);
  cob_delete (h_CALL_STACK, NULL);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_41;
    goto l_1;
    l_41:
    frame_ptr--;
  }

  /* Line: 208       : IF                 : recursion.cbl */
  cob_set_location (st_1, 208, NULL, st_30, st_24);
  if (((int)memcmp (b_14, b_31 + 5, 5) == 0))
  {

    /* Line: 209       : SET                : recursion.cbl */
    cob_set_location (st_1, 209, NULL, st_30, st_19);
    *(b_31 + 10) = 89;
  }

  /* Line: 212       : DISPLAY            : recursion.cbl */
  cob_set_location (st_1, 212, NULL, st_30, st_27);
  cob_display (0, 1, 1, &c_19);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 18)
    goto *frame_ptr->return_address_ptr;

  /* Line: 213       : Paragraph IS-STACK-EMPTY-PROCEDURE: recursion.cbl */
  l_19:;

  /* Line: 214       : IF                 : recursion.cbl */
  cob_set_location (st_1, 214, NULL, st_31, st_24);
  if (((int)(int)(*(b_31 + 10) - 89) == 0))
  {

    /* Line: 215       : MOVE               : recursion.cbl */
    cob_set_location (st_1, 215, NULL, st_31, st_7);
    cob_move ((cob_field *)&c_20, COB_SET_DATA (f_40, b_40));
  }
  else
  {
    /* ELSE */

    /* Line: 217       : MOVE               : recursion.cbl */
    cob_set_location (st_1, 217, NULL, st_31, st_7);
    cob_move ((cob_field *)&c_21, COB_SET_DATA (f_40, b_40));
  }

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 19)
    goto *frame_ptr->return_address_ptr;

  /* Program exit */

  exit_program:

  /* Decrement module active count */
  if (module->module_active) {
  	module->module_active--;
  }

  /* Pop module stack */
  cob_module_leave (module);

  /* Program return */
  return b_1;


  /* Paragraph Default Error Handler   */
  l_1:;

  if (!(cob_glob_ptr->cob_error_file->flag_select_features & COB_SELECT_FILE_STATUS)) {
  	cob_fatal_error (COB_FERROR_FILE);
  }

  /* Implicit Default Error Handler return */
  if (frame_ptr->perform_through == 1)
    goto *frame_ptr->return_address_ptr;

  /* Fatal error if reached */
  cob_fatal_error (COB_FERROR_CODEGEN);


  /* Program initialization */
  P_initialize:

  cob_check_version (COB_SOURCE_FILE, COB_PACKAGE_VERSION, COB_PATCH_LEVEL);

  /* Initialize module structure */
  module->module_name = "RECURSION";
  module->module_formatted_date = COB_MODULE_FORMATTED_DATE;
  module->module_source = COB_SOURCE_FILE;
  module->module_entry.funcptr = (void *(*)())RECURSION;
  module->module_cancel.funcptr = (void *(*)())RECURSION_;
  module->collating_sequence = NULL;
  module->crt_status = NULL;
  module->cursor_pos = NULL;
  module->module_ref_count = NULL;
  module->module_path = &cob_module_path;
  module->module_active = 0;
  module->module_date = COB_MODULE_DATE;
  module->module_time = COB_MODULE_TIME;
  module->module_type = 0;
  module->module_param_cnt = 2;
  module->module_returning = 0;
  module->ebcdic_sign = 0;
  module->decimal_point = '.';
  module->currency_symbol = '$';
  module->numeric_separator = ',';
  module->flag_filename_mapping = 1;
  module->flag_binary_truncate = 1;
  module->flag_pretty_display = 1;
  module->flag_host_sign = 0;
  module->flag_no_phys_canc = 0;
  module->flag_main = 0;
  module->flag_fold_call = 0;
  module->flag_exit_program = 0;

  /* Initialize cancel callback */
  cob_set_cancel (module);

  /* Initialize WORKING-STORAGE */
  b_1 = 0;
  memset (b_15, 48, 5);
  memset (b_15 + 5, 32, 40);
  memset (b_15 + 45, 48, 5);
  memset (b_15 + 50, 32, 21);
  *(cob_u8_ptr)(b_24) = 32;
  memset (b_25, 48, 5);
  *(cob_u8_ptr)(b_26) = 32;
  memset (b_28, 32, 20);
  memset (b_28 + 20, 48, 20);
  memset (b_31, 48, 10);
  *(cob_u8_ptr)(b_31 + 10) = 32;
  memset (b_36, 32, 5);
  memset (b_37, 32, 140);


  if (!h_CALL_STACK)
  {
    h_CALL_STACK = cob_cache_malloc (sizeof(cob_file));
  }
  if (!k_CALL_STACK)
  {
    k_CALL_STACK = cob_cache_malloc (sizeof (cob_file_key) * 1);
  }
  k_CALL_STACK->field = &f_7;
  k_CALL_STACK->flag = 0;
  k_CALL_STACK->offset = 0;
  h_CALL_STACK->select_name = (const char *)"CALL-STACK";
  h_CALL_STACK->file_status = h_CALL_STACK_status;
  memset (h_CALL_STACK_status, '0', 2);
  h_CALL_STACK->assign = (cob_field *)&c_22;
  h_CALL_STACK->record = &f_14;
  h_CALL_STACK->variable_record = NULL;
  h_CALL_STACK->record_min = 51;
  h_CALL_STACK->record_max = 51;
  h_CALL_STACK->nkeys = 1;
  h_CALL_STACK->keys = k_CALL_STACK;
  h_CALL_STACK->file = NULL;
  h_CALL_STACK->fd = -1;
  h_CALL_STACK->organization = 3;
  h_CALL_STACK->access_mode = 3;
  h_CALL_STACK->lock_mode = 0;
  h_CALL_STACK->open_mode = 0;
  h_CALL_STACK->flag_optional = 1;
  h_CALL_STACK->last_open_mode = 0;
  h_CALL_STACK->flag_operation = 0;
  h_CALL_STACK->flag_nonexistent = 0;
  h_CALL_STACK->flag_end_of_file = 0;
  h_CALL_STACK->flag_begin_of_file = 0;
  h_CALL_STACK->flag_first_read = 0;
  h_CALL_STACK->flag_read_done = 0;
  h_CALL_STACK->flag_select_features = 0;
  h_CALL_STACK->flag_needs_nl = 0;
  h_CALL_STACK->flag_needs_top = 0;
  h_CALL_STACK->file_version = 1;

  initialized = 1;
  goto P_ret_initialize;

  /* CANCEL callback handling */
  P_cancel:

  if (!initialized) {
  	return 0;
  }
  if (module->module_active) {
  	cob_fatal_error (COB_FERROR_CANCEL);
  }

  cob_close (h_CALL_STACK, NULL, COB_CLOSE_NORMAL, 1);
  cob_cache_free (k_CALL_STACK);
  k_CALL_STACK = NULL;
  cob_cache_free (h_CALL_STACK);
  h_CALL_STACK = NULL;
  call_LOGGER.funcvoid = NULL;
  b_1 = 0;
  cob_cache_free (module);
  module = NULL;

  initialized = 0;
  return 0;

}

/* End PROGRAM-ID 'RECURSION' */

/* End functions */

