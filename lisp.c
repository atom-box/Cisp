/* Generated by           cobc 2.0.0 */
/* Generated from         lisp.cbl */
/* Generated at           Apr 22 2017 23:36:42 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -o bin\lisp.dll -std=default -Wall -g -LC:\Users\laury\Documents\Computer School\Recurse Center\Cisp\subroutines\bin -L\subroutines\bin -L..\subroutines\bin lisp.cbl */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#define  COB_KEYWORD_INLINE __inline
#include <libcob.h>

#define  COB_SOURCE_FILE		"lisp.cbl"
#define  COB_PACKAGE_VERSION		"2.0"
#define  COB_PATCH_LEVEL		0
#define  COB_MODULE_FORMATTED_DATE	"Apr 22 2017 23:36:42"
#define  COB_MODULE_DATE		20170422
#define  COB_MODULE_TIME		233642

/* Global variables */
#include "lisp.c.h"

/* Function prototypes */

__declspec(dllexport) int		LISP (cob_u8_t *);
static int		LISP_ (const int, cob_u8_t *);

/* Functions */

/* PROGRAM-ID 'LISP' */

/* ENTRY 'LISP' */

int
LISP (cob_u8_t *b_23)
{
  /* Get current number of call parameters,
     if the parameter count is unknown, set it to all */
  if (cob_get_global_ptr ()->cob_current_module) {
	cob_call_params = cob_get_global_ptr ()->cob_call_params;
  } else {
	cob_call_params = 1;
  };

  return LISP_ (0, b_23);
}

static int
LISP_ (const int entry, cob_u8_t *b_23)
{
  /* Program local variables */
  #include "lisp.c.l.h"

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
  	b_23 = NULL;
  default:
	break;
  }

  /* Entry dispatch */
  goto l_2;

  /* PROCEDURE DIVISION */

  /* Line: 43        : Entry     LISP                    : lisp.cbl */
  l_2:;

  /* Line: 43        : Paragraph MAIN-PROCEDURE          : lisp.cbl */

  /* Line: 44        : PERFORM            : lisp.cbl */
  cob_set_location (st_1, 44, NULL, st_2, st_3);
  /* PERFORM INIT-CALL-STACK-PROCEDURE */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 6;
  frame_ptr->return_address_ptr = &&l_20;
  goto l_6;
  l_20:
  frame_ptr--;

  /* Line: 46        : PERFORM            : lisp.cbl */
  cob_set_location (st_1, 46, NULL, st_2, st_3);
  memcpy (b_6, "0001", 4);
  for (;;)
  {
    if (((int)memcmp (b_6, b_23, 4) > 0))
      break;

    /* Line: 48        : EVALUATE           : lisp.cbl */
    cob_set_location (st_1, 48, NULL, st_2, st_4);

    /* WHEN */

    if (((int)cob_cmp (COB_SET_FLD(f0, 50, b_23 + 4 + 50 * (cob_get_numdisp (b_6, 4) - 1), &a_1), (cob_field *)&c_1) == 0))
    {

      /* Line: 50        : SET                : lisp.cbl */
      cob_set_location (st_1, 50, NULL, st_2, st_5);
      *(b_10) = 89;
      goto l_5;
    }

    /* WHEN */

    if (((int)cob_cmp (COB_SET_FLD(f0, 50, b_23 + 4 + 50 * (cob_get_numdisp (b_6, 4) - 1), &a_1), (cob_field *)&c_2) == 0))
    {

      /* Line: 52        : PERFORM            : lisp.cbl */
      cob_set_location (st_1, 52, NULL, st_2, st_3);
      /* PERFORM LOG-COMMAND-EVALUTATION */
      frame_ptr++;
      if (unlikely(frame_ptr == frame_overflow))
          cob_fatal_error (COB_FERROR_STACK);
      frame_ptr->perform_through = 19;
      frame_ptr->return_address_ptr = &&l_21;
      goto l_19;
      l_21:
      frame_ptr--;

      /* Line: 53        : PERFORM            : lisp.cbl */
      cob_set_location (st_1, 53, NULL, st_2, st_3);
      /* PERFORM RETURN-PROCEDURE */
      frame_ptr++;
      if (unlikely(frame_ptr == frame_overflow))
          cob_fatal_error (COB_FERROR_STACK);
      frame_ptr->perform_through = 8;
      frame_ptr->return_address_ptr = &&l_22;
      goto l_8;
      l_22:
      frame_ptr--;
      goto l_5;
    }

    /* WHEN OTHER */

    /* Line: 55        : MOVE               : lisp.cbl */
    cob_set_location (st_1, 55, NULL, st_2, st_6);
    memmove (b_7, b_23 + 4 + 50 * (cob_get_numdisp (b_6, 4) - 1), 20);

    /* Line: 57        : PERFORM            : lisp.cbl */
    cob_set_location (st_1, 57, NULL, st_2, st_3);
    /* PERFORM LOG-CURRENT-COMMAND-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 13;
    frame_ptr->return_address_ptr = &&l_23;
    goto l_13;
    l_23:
    frame_ptr--;

    /* Line: 59        : IF                 : lisp.cbl */
    cob_set_location (st_1, 59, NULL, st_2, st_7);
    if (((int)(int)(*(b_10) - 89) == 0))
    {

      /* Line: 60        : PERFORM            : lisp.cbl */
      cob_set_location (st_1, 60, NULL, st_2, st_3);
      /* PERFORM INIT-RECURSION-OBJECT-PROCEDURE */
      frame_ptr++;
      if (unlikely(frame_ptr == frame_overflow))
          cob_fatal_error (COB_FERROR_STACK);
      frame_ptr->perform_through = 7;
      frame_ptr->return_address_ptr = &&l_24;
      goto l_7;
      l_24:
      frame_ptr--;
    }
    else
    {
      /* ELSE */

      /* Line: 62        : PERFORM            : lisp.cbl */
      cob_set_location (st_1, 62, NULL, st_2, st_3);
      /* PERFORM EVALUATE-CURRENT-COMMAND */
      frame_ptr++;
      if (unlikely(frame_ptr == frame_overflow))
          cob_fatal_error (COB_FERROR_STACK);
      frame_ptr->perform_through = 14;
      frame_ptr->return_address_ptr = &&l_25;
      goto l_14;
      l_25:
      frame_ptr--;
    }

    /* End EVALUATE */
    l_5:;
    cob_add_int (&f_6, 1, 0);
  }

  /* Line: 67        : PERFORM            : lisp.cbl */
  cob_set_location (st_1, 67, NULL, st_2, st_3);
  /* PERFORM CLOSE-CALL-STACK-PROCEDURE */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 12;
  frame_ptr->return_address_ptr = &&l_26;
  goto l_12;
  l_26:
  frame_ptr--;

  /* Line: 68        : GOBACK             : lisp.cbl */
  cob_set_location (st_1, 68, NULL, st_2, st_8);
  goto exit_program;

  /* Line: 69        : Paragraph INIT-CALL-STACK-PROCEDURE: lisp.cbl */
  l_6:;

  /* Line: 71        : MOVE               : lisp.cbl */
  cob_set_location (st_1, 71, NULL, st_9, st_6);
  cob_move ((cob_field *)&c_3, &f_16);

  /* Line: 72        : CALL               : lisp.cbl */
  cob_set_location (st_1, 72, NULL, st_9, st_10);
  cob_procedure_params[0] = &f_16;
  cob_glob_ptr->cob_call_params = 1;
  if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
  }
  b_1 = ((int (*)(void *))call_RECURSION.funcint) (b_16);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 6)
    goto *frame_ptr->return_address_ptr;

  /* Line: 73        : Paragraph INIT-RECURSION-OBJECT-PROCEDURE: lisp.cbl */
  l_7:;

  /* Line: 74        : IF                 : lisp.cbl */
  cob_set_location (st_1, 74, NULL, st_11, st_7);
  if (((int)cob_cmp (&f_18, &cob_all_space) == 0))
  {

    /* Line: 75        : MOVE               : lisp.cbl */
    cob_set_location (st_1, 75, NULL, st_11, st_6);
    memcpy (b_17, b_7, 20);
  }
  else
  {
    /* ELSE */

    /* Line: 78        : MOVE               : lisp.cbl */
    cob_set_location (st_1, 78, NULL, st_11, st_6);
    memcpy (b_16, "ADD-TO-CALL-STACK             ", 30);

    /* Line: 79        : CALL               : lisp.cbl */
    cob_set_location (st_1, 79, NULL, st_11, st_10);
    cob_procedure_params[0] = &f_16;
    cob_procedure_params[1] = &f_17;
    cob_glob_ptr->cob_call_params = 2;
    if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
      call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
    }
    b_1 = ((int (*)(void *, void *))call_RECURSION.funcint) (b_16, b_17);

    /* Line: 83        : MOVE               : lisp.cbl */
    cob_set_location (st_1, 83, NULL, st_11, st_6);
    memcpy (b_17, b_7, 20);

    /* Line: 84        : MOVE               : lisp.cbl */
    cob_set_location (st_1, 84, NULL, st_11, st_6);
    memset (b_17 + 20, 32, 20);
  }

  /* Line: 88        : SET                : lisp.cbl */
  cob_set_location (st_1, 88, NULL, st_11, st_5);
  *(b_10) = 78;

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 7)
    goto *frame_ptr->return_address_ptr;

  /* Line: 89        : Paragraph RETURN-PROCEDURE        : lisp.cbl */
  l_8:;

  /* Line: 91        : MOVE               : lisp.cbl */
  cob_set_location (st_1, 91, NULL, st_12, st_6);
  cob_move ((cob_field *)&c_4, &f_16);

  /* Line: 92        : CALL               : lisp.cbl */
  cob_set_location (st_1, 92, NULL, st_12, st_10);
  cob_procedure_params[0] = &f_16;
  cob_glob_ptr->cob_call_params = 1;
  if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
  }
  b_1 = ((int (*)(void *))call_RECURSION.funcint) (b_16);

  /* Line: 94        : IF                 : lisp.cbl */
  cob_set_location (st_1, 94, NULL, st_12, st_7);
  if (!((int)cob_cmp (&f_16, (cob_field *)&c_5) == 0))
  {

    /* Line: 95        : MOVE               : lisp.cbl */
    cob_set_location (st_1, 95, NULL, st_12, st_6);
    memcpy (b_8, b_17 + 20, 20);

    /* Line: 97        : PERFORM            : lisp.cbl */
    cob_set_location (st_1, 97, NULL, st_12, st_3);
    /* PERFORM POP-CALL-STACK */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 11;
    frame_ptr->return_address_ptr = &&l_27;
    goto l_11;
    l_27:
    frame_ptr--;

    /* Line: 99        : MOVE               : lisp.cbl */
    cob_set_location (st_1, 99, NULL, st_12, st_6);
    memcpy (b_7, b_17, 20);

    /* Line: 100       : PERFORM            : lisp.cbl */
    cob_set_location (st_1, 100, NULL, st_12, st_3);
    /* PERFORM EVALUATE-CURRENT-COMMAND */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 14;
    frame_ptr->return_address_ptr = &&l_28;
    goto l_14;
    l_28:
    frame_ptr--;
  }

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 8)
    goto *frame_ptr->return_address_ptr;

  /* Line: 105       : Paragraph PRINT-CALL-STACK        : lisp.cbl */

  /* Line: 106       : MOVE               : lisp.cbl */
  cob_set_location (st_1, 106, NULL, st_13, st_6);
  memcpy (b_16, "PRINT-CALL-STACK              ", 30);

  /* Line: 107       : CALL               : lisp.cbl */
  cob_set_location (st_1, 107, NULL, st_13, st_10);
  cob_procedure_params[0] = &f_16;
  cob_glob_ptr->cob_call_params = 1;
  if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
  }
  b_1 = ((int (*)(void *))call_RECURSION.funcint) (b_16);

  /* Line: 108       : Paragraph DEBUG-LISP              : lisp.cbl */

  /* Line: 109       : DISPLAY            : lisp.cbl */
  cob_set_location (st_1, 109, NULL, st_14, st_15);
  cob_display (0, 1, 2, &c_6, &f_7);

  /* Line: 110       : DISPLAY            : lisp.cbl */
  cob_set_location (st_1, 110, NULL, st_14, st_15);
  cob_display (0, 1, 2, &c_7, &f_8);

  /* Line: 111       : DISPLAY            : lisp.cbl */
  cob_set_location (st_1, 111, NULL, st_14, st_15);
  cob_display (0, 1, 2, &c_8, &f_18);

  /* Line: 112       : DISPLAY            : lisp.cbl */
  cob_set_location (st_1, 112, NULL, st_14, st_15);
  cob_display (0, 1, 2, &c_9, &f_19);

  /* Line: 113       : DISPLAY            : lisp.cbl */
  cob_set_location (st_1, 113, NULL, st_14, st_15);
  cob_display (0, 1, 1, &c_10);

  /* Line: 114       : Paragraph POP-CALL-STACK          : lisp.cbl */
  l_11:;

  /* Line: 116       : MOVE               : lisp.cbl */
  cob_set_location (st_1, 116, NULL, st_16, st_6);
  cob_move ((cob_field *)&c_11, &f_16);

  /* Line: 117       : CALL               : lisp.cbl */
  cob_set_location (st_1, 117, NULL, st_16, st_10);
  cob_procedure_params[0] = &f_16;
  cob_procedure_params[1] = &f_17;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_RECURSION.funcint) (b_16, b_17);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 11)
    goto *frame_ptr->return_address_ptr;

  /* Line: 119       : Paragraph CLOSE-CALL-STACK-PROCEDURE: lisp.cbl */
  l_12:;

  /* Line: 120       : MOVE               : lisp.cbl */
  cob_set_location (st_1, 120, NULL, st_17, st_6);
  cob_move ((cob_field *)&c_12, &f_16);

  /* Line: 121       : CALL               : lisp.cbl */
  cob_set_location (st_1, 121, NULL, st_17, st_10);
  cob_procedure_params[0] = &f_16;
  cob_glob_ptr->cob_call_params = 1;
  if (unlikely(call_RECURSION.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_RECURSION.funcvoid = cob_resolve_cobol ("RECURSION", 0, 1);
  }
  b_1 = ((int (*)(void *))call_RECURSION.funcint) (b_16);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 12)
    goto *frame_ptr->return_address_ptr;

  /* Line: 122       : Paragraph LOG-CURRENT-COMMAND-PROCEDURE: lisp.cbl */
  l_13:;

  /* Line: 124       : MOVE               : lisp.cbl */
  cob_set_location (st_1, 124, NULL, st_18, st_6);
  memcpy (b_12, "ADD  ", 5);

  /* Line: 125       : MOVE               : lisp.cbl */
  cob_set_location (st_1, 125, NULL, st_18, st_6);
  cob_move ((cob_field *)&c_13, &f_14);

  /* Line: 127       : STRING             : lisp.cbl */
  cob_set_location (st_1, 127, NULL, st_18, st_19);
  cob_string_init (&f_15, NULL);
  cob_string_delimited (NULL);
  cob_string_append ((cob_field *)&c_14);
  cob_string_delimited (NULL);
  cob_string_append (&f_7);
  cob_string_finish ();

  /* Line: 130       : CALL               : lisp.cbl */
  cob_set_location (st_1, 130, NULL, st_18, st_10);
  cob_procedure_params[0] = &f_12;
  cob_procedure_params[1] = &f_13;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_12, b_13);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 13)
    goto *frame_ptr->return_address_ptr;

  /* Line: 131       : Paragraph EVALUATE-CURRENT-COMMAND: lisp.cbl */
  l_14:;

  /* Line: 132       : EVALUATE           : lisp.cbl */
  cob_set_location (st_1, 132, NULL, st_20, st_4);

  /* WHEN */

  if (((int)cob_cmp (&f_7, (cob_field *)&c_15) == 0))
  {

    /* Line: 135       : PERFORM            : lisp.cbl */
    cob_set_location (st_1, 135, NULL, st_20, st_3);
    /* PERFORM LISP-WRITE-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 17;
    frame_ptr->return_address_ptr = &&l_29;
    goto l_17;
    l_29:
    frame_ptr--;
    goto l_15;
  }

  /* WHEN */

  if (((int)cob_cmp (&f_7, (cob_field *)&c_16) == 0))
  {

    /* Line: 138       : PERFORM            : lisp.cbl */
    cob_set_location (st_1, 138, NULL, st_20, st_3);
    /* PERFORM LISP-ADD-PROCEDURE */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 18;
    frame_ptr->return_address_ptr = &&l_30;
    goto l_18;
    l_30:
    frame_ptr--;
    goto l_15;
  }

  /* WHEN OTHER */

  /* Line: 141       : IF                 : lisp.cbl */
  cob_set_location (st_1, 141, NULL, st_20, st_7);
  if (cob_is_numeric (COB_SET_FLD(f0, cob_get_numdisp (b_23 + 5004 + 2 * (cob_get_numdisp (b_6, 4) - 1), 2), b_7 + 0, &a_1)))
  {

    /* Line: 144       : MOVE               : lisp.cbl */
    cob_set_location (st_1, 144, NULL, st_20, st_6);
    cob_move (&f_7, &f_9);
  }
  else
  {
    /* ELSE */

    /* Line: 146       : MOVE               : lisp.cbl */
    cob_set_location (st_1, 146, NULL, st_20, st_6);
    memcpy (b_8, b_7, 20);
  }

  /* Line: 149       : PERFORM            : lisp.cbl */
  cob_set_location (st_1, 149, NULL, st_20, st_3);
  /* PERFORM APPLY-VALUE-TO-EXPRESSION */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 16;
  frame_ptr->return_address_ptr = &&l_31;
  goto l_16;
  l_31:
  frame_ptr--;

  /* End EVALUATE */
  l_15:;

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 14)
    goto *frame_ptr->return_address_ptr;

  /* Line: 151       : Paragraph APPLY-VALUE-TO-EXPRESSION: lisp.cbl */
  l_16:;

  /* Line: 152       : MOVE               : lisp.cbl */
  cob_set_location (st_1, 152, NULL, st_21, st_6);
  memcpy (b_7, b_17, 20);

  /* Line: 153       : PERFORM            : lisp.cbl */
  cob_set_location (st_1, 153, NULL, st_21, st_3);
  /* PERFORM EVALUATE-CURRENT-COMMAND */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 14;
  frame_ptr->return_address_ptr = &&l_32;
  goto l_14;
  l_32:
  frame_ptr--;

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 16)
    goto *frame_ptr->return_address_ptr;

  /* Line: 155       : Paragraph LISP-WRITE-PROCEDURE    : lisp.cbl */
  l_17:;

  /* Line: 156       : MOVE               : lisp.cbl */
  cob_set_location (st_1, 156, NULL, st_22, st_6);
  memcpy (b_17 + 20, b_8, 20);

  /* Line: 157       : DISPLAY            : lisp.cbl */
  cob_set_location (st_1, 157, NULL, st_22, st_15);
  cob_display (0, 1, 1, &f_19);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 17)
    goto *frame_ptr->return_address_ptr;

  /* Line: 158       : Paragraph LISP-ADD-PROCEDURE      : lisp.cbl */
  l_18:;

  /* Line: 159       : IF                 : lisp.cbl */
  cob_set_location (st_1, 159, NULL, st_23, st_7);
  if (((int)cob_cmp (&f_20, &cob_all_space) == 0))
  {

    /* Line: 160       : MOVE               : lisp.cbl */
    cob_set_location (st_1, 160, NULL, st_23, st_6);
    memset (b_17 + 20, 48, 20);
  }

  /* Line: 166       : ADD                : lisp.cbl */
  cob_set_location (st_1, 166, NULL, st_23, st_24);
  cob_add (&f_20, &f_9, 0);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 18)
    goto *frame_ptr->return_address_ptr;

  /* Line: 167       : Paragraph LOG-COMMAND-EVALUTATION : lisp.cbl */
  l_19:;

  /* Line: 168       : MOVE               : lisp.cbl */
  cob_set_location (st_1, 168, NULL, st_25, st_6);
  memcpy (b_12, "ADD  ", 5);

  /* Line: 169       : STRING             : lisp.cbl */
  cob_set_location (st_1, 169, NULL, st_25, st_19);
  cob_string_init (&f_14, NULL);
  cob_string_delimited (NULL);
  cob_string_append ((cob_field *)&c_17);
  cob_string_delimited (NULL);
  cob_string_append (&f_7);
  cob_string_finish ();

  /* Line: 172       : STRING             : lisp.cbl */
  cob_set_location (st_1, 172, NULL, st_25, st_19);
  cob_string_init (&f_15, NULL);
  cob_string_delimited (NULL);
  cob_string_append ((cob_field *)&c_18);
  cob_string_delimited (NULL);
  cob_string_append (&f_19);
  cob_string_finish ();

  /* Line: 175       : CALL               : lisp.cbl */
  cob_set_location (st_1, 175, NULL, st_25, st_10);
  cob_procedure_params[0] = &f_12;
  cob_procedure_params[1] = &f_13;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_12, b_13);

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

  /* Program initialization */
  P_initialize:

  cob_check_version (COB_SOURCE_FILE, COB_PACKAGE_VERSION, COB_PATCH_LEVEL);

  /* Initialize module structure */
  module->module_name = "LISP";
  module->module_formatted_date = COB_MODULE_FORMATTED_DATE;
  module->module_source = COB_SOURCE_FILE;
  module->module_entry.funcptr = (void *(*)())LISP;
  module->module_cancel.funcptr = (void *(*)())LISP_;
  module->collating_sequence = NULL;
  module->crt_status = NULL;
  module->cursor_pos = NULL;
  module->module_ref_count = NULL;
  module->module_path = &cob_module_path;
  module->module_active = 0;
  module->module_date = COB_MODULE_DATE;
  module->module_time = COB_MODULE_TIME;
  module->module_type = 0;
  module->module_param_cnt = 1;
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
  memset (b_6, 48, 4);
  memset (b_7, 32, 20);
  memset (b_8, 32, 20);
  *(cob_u8_ptr)(b_10) = 32;
  memset (b_12, 32, 5);
  memset (b_13, 32, 140);
  memset (b_16, 32, 30);
  memset (b_17, 32, 41);

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

  call_LOGGER.funcvoid = NULL;
  call_RECURSION.funcvoid = NULL;
  b_1 = 0;
  cob_cache_free (module);
  module = NULL;

  initialized = 0;
  return 0;

}

/* End PROGRAM-ID 'LISP' */

/* End functions */

