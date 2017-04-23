/* Generated by           cobc 2.0.0 */
/* Generated from         tokenizer.cbl */
/* Generated at           Apr 22 2017 23:36:45 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -o bin\tokenizer.dll -std=default -Wall -g -LC:\Users\laury\Documents\Computer School\Recurse Center\Cisp\subroutines\bin -L\subroutines\bin -L..\subroutines\bin tokenizer.cbl */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#define  COB_KEYWORD_INLINE __inline
#include <libcob.h>

#define  COB_SOURCE_FILE		"tokenizer.cbl"
#define  COB_PACKAGE_VERSION		"2.0"
#define  COB_PATCH_LEVEL		0
#define  COB_MODULE_FORMATTED_DATE	"Apr 22 2017 23:36:45"
#define  COB_MODULE_DATE		20170422
#define  COB_MODULE_TIME		233645

/* Global variables */
#include "tokenizer.c.h"

/* Function prototypes */

__declspec(dllexport) int		TOKENIZER (cob_u8_t *, cob_u8_t *);
static int		TOKENIZER_ (const int, cob_u8_t *, cob_u8_t *);

/* Functions */

/* PROGRAM-ID 'TOKENIZER' */

/* ENTRY 'TOKENIZER' */

int
TOKENIZER (cob_u8_t *b_44, cob_u8_t *b_45)
{
  /* Get current number of call parameters,
     if the parameter count is unknown, set it to all */
  if (cob_get_global_ptr ()->cob_current_module) {
	cob_call_params = cob_get_global_ptr ()->cob_call_params;
  } else {
	cob_call_params = 2;
  };

  return TOKENIZER_ (0, b_44, b_45);
}

static int
TOKENIZER_ (const int entry, cob_u8_t *b_44, cob_u8_t *b_45)
{
  /* Program local variables */
  #include "tokenizer.c.l.h"

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
  	b_44 = NULL;
  case 1:
  	b_45 = NULL;
  default:
	break;
  }

  /* Entry dispatch */
  goto l_2;

  /* PROCEDURE DIVISION */

  /* Line: 66        : Entry     TOKENIZER               : tokenizer.cbl */
  l_2:;

  /* Line: 66        : Paragraph MAIN-PROCEDURE          : tokenizer.cbl */

  /* Line: 68        : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 68, NULL, st_2, st_3);
  /* PERFORM FILE-HANDLING-PROCEDURE */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 7;
  frame_ptr->return_address_ptr = &&l_20;
  goto l_7;
  l_20:
  frame_ptr--;

  /* Line: 70        : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 70, NULL, st_2, st_3);
  /* PERFORM TOKENIZE-LISP-PROCEDURE */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 8;
  frame_ptr->return_address_ptr = &&l_21;
  goto l_8;
  l_21:
  frame_ptr--;

  /* Line: 71        : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 71, NULL, st_2, st_3);
  /* PERFORM CAL-LENGTH-ALL-SYMBOLS */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 5;
  frame_ptr->return_address_ptr = &&l_22;
  goto l_5;
  l_22:
  frame_ptr--;

  /* Line: 73        : GOBACK             : tokenizer.cbl */
  cob_set_location (st_1, 73, NULL, st_2, st_4);
  goto exit_program;

  /* Line: 74        : Paragraph CAL-LENGTH-ALL-SYMBOLS  : tokenizer.cbl */
  l_5:;

  /* Line: 75        : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 75, NULL, st_5, st_3);
  memcpy (b_22, "0000000001", 10);
  for (;;)
  {
    if (((int)cob_cmp_numdisp (b_22, 10, 100LL, 0) == 0))
      break;

    /* Line: 76        : PERFORM            : tokenizer.cbl */
    cob_set_location (st_1, 76, NULL, st_5, st_3);
    /* PERFORM CALC-LENGTH-SYMBOL */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 6;
    frame_ptr->return_address_ptr = &&l_23;
    goto l_6;
    l_23:
    frame_ptr--;

    /* Line: 77        : MOVE               : tokenizer.cbl */
    cob_set_location (st_1, 77, NULL, st_5, st_6);
    cob_move (&f_39, COB_SET_FLD(f0, 2, b_45 + 5004 + 2 * (cob_get_int (&f_22) - 1), &a_3));
    cob_add_int (&f_22, 1, 0);
  }

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 5)
    goto *frame_ptr->return_address_ptr;

  /* Line: 79        : Paragraph CALC-LENGTH-SYMBOL      : tokenizer.cbl */
  l_6:;

  /* Line: 80        : SET                : tokenizer.cbl */
  cob_set_location (st_1, 80, NULL, st_7, st_8);
  *(b_32 + 5) = 78;

  /* Line: 81        : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 81, NULL, st_7, st_6);
  memset (b_32 + 17, 48, 5);

  /* Line: 82        : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 82, NULL, st_7, st_3);
  memcpy (b_32, "00001", 5);
  for (;;)
  {
    if ((((int)(int)(*(b_32 + 5) - 89) == 0) || 
        ((int)cob_cmp_numdisp (b_32, 5, 100LL, 0) > 0)))
      break;

    /* Line: 84        : IF                 : tokenizer.cbl */
    cob_set_location (st_1, 84, NULL, st_7, st_9);
    if (((int)(int)(*(b_45 + 4 + 50 * (cob_get_int (&f_22) - 1) + (cob_get_numdisp (b_32, 5) - 1)) - 32) == 0))
    {

      /* Line: 85        : SET                : tokenizer.cbl */
      cob_set_location (st_1, 85, NULL, st_7, st_8);
      *(b_32 + 5) = 89;
    }
    else
    {
      /* ELSE */

      /* Line: 87        : ADD                : tokenizer.cbl */
      cob_set_location (st_1, 87, NULL, st_7, st_10);
      cob_add_int (&f_39, 1, 0);
    }
    cob_add_int (&f_33, 1, 0);
  }

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 6)
    goto *frame_ptr->return_address_ptr;

  /* Line: 90        : Paragraph FILE-HANDLING-PROCEDURE : tokenizer.cbl */
  l_7:;

  /* Line: 92        : ACCEPT             : tokenizer.cbl */
  cob_set_location (st_1, 92, NULL, st_11, st_12);
  cob_accept (&f_8);

  /* Line: 93        : IF                 : tokenizer.cbl */
  cob_set_location (st_1, 93, NULL, st_11, st_9);
  if (((int)cob_cmp (&f_8, &cob_all_space) == 0))
  {

    /* Line: 94        : MOVE               : tokenizer.cbl */
    cob_set_location (st_1, 94, NULL, st_11, st_6);
    memcpy (b_8, "..\\test\\test4.lisp            ", 30);
  }

  /* Line: 96        : OPEN               : tokenizer.cbl */
  cob_set_location (st_1, 96, NULL, st_11, st_13);
  cob_open (h_LISP_FILE, 1, 0, NULL);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_24;
    goto l_1;
    l_24:
    frame_ptr--;
  }

  /* Line: 97        : READ               : tokenizer.cbl */
  cob_set_location (st_1, 97, NULL, st_11, st_14);
  cob_read_next (h_LISP_FILE, NULL, 1);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_25;
    goto l_1;
    l_25:
    frame_ptr--;
  }

  /* Line: 98        : CLOSE              : tokenizer.cbl */
  cob_set_location (st_1, 98, NULL, st_11, st_15);
  cob_close (h_LISP_FILE, NULL, 0, 0);
  if (unlikely(cob_glob_ptr->cob_exception_code != 0))
  {
    /* PERFORM Default Error Handler */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 1;
    frame_ptr->return_address_ptr = &&l_26;
    goto l_1;
    l_26:
    frame_ptr--;
  }

  /* Line: 100       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 100, NULL, st_11, st_6);
  memcpy (b_40, "ADD  ", 5);

  /* Line: 101       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 101, NULL, st_11, st_6);
  memcpy (b_41, "TOKENIZER:FILE-HANDLING-PROCEDURE       ", 40);

  /* Line: 103       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 103, NULL, st_11, st_6);
  cob_move ((cob_field *)&c_1, &f_43);

  /* Line: 104       : CALL               : tokenizer.cbl */
  cob_set_location (st_1, 104, NULL, st_11, st_16);
  cob_procedure_params[0] = &f_40;
  cob_procedure_params[1] = &f_41;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_40, b_41);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 7)
    goto *frame_ptr->return_address_ptr;

  /* Line: 105       : Paragraph TOKENIZE-LISP-PROCEDURE : tokenizer.cbl */
  l_8:;

  /* Line: 107       : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 107, NULL, st_17, st_3);
  /* PERFORM FORMAT-LISP-PROCEDURE */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 10;
  frame_ptr->return_address_ptr = &&l_27;
  goto l_10;
  l_27:
  frame_ptr--;

  /* Line: 110       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 110, NULL, st_17, st_6);
  memcpy (b_23, "0000000001", 10);

  /* Line: 111       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 111, NULL, st_17, st_6);
  memset (b_45, 48, 4);

  /* Line: 112       : SET                : tokenizer.cbl */
  cob_set_location (st_1, 112, NULL, st_17, st_8);
  *(b_25) = 78;

  /* Line: 113       : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 113, NULL, st_17, st_3);
  memcpy (b_22, "0000000001", 10);
  for (;;)
  {
    if ((((int)cob_cmp_numdisp (b_22, 10, 100LL, 0) == 0) || 
        ((int)cob_cmp (&f_22, &f_25) == 0)))
      break;

    /* Line: 115       : UNSTRING           : tokenizer.cbl */
    cob_set_location (st_1, 115, NULL, st_17, st_18);
    cob_unstring_init (&f_9, &f_23, 1);
    cob_unstring_delimited ((cob_field *)&c_2, 1);
    cob_unstring_into (COB_SET_FLD(f0, 50, b_45 + 4 + 50 * (cob_get_int (&f_22) - 1), &a_4), 0, 0);
    cob_unstring_finish ();

    /* Line: 117       : IF                 : tokenizer.cbl */
    cob_set_location (st_1, 117, NULL, st_17, st_9);
    if (((int)cob_cmp (COB_SET_FLD(f0, 50, b_45 + 4 + 50 * (cob_get_int (&f_22) - 1), &a_4), &cob_all_space) == 0))
    {

      /* Line: 118       : SET                : tokenizer.cbl */
      cob_set_location (st_1, 118, NULL, st_17, st_8);
      *(b_25) = 89;
    }
    else
    {
      /* ELSE */

      /* Line: 120       : ADD                : tokenizer.cbl */
      cob_set_location (st_1, 120, NULL, st_17, st_10);
      cob_add_int (COB_SET_DATA (f_46, b_45), 1, 0);
    }
    cob_add_int (&f_22, 1, 0);
  }

  /* Line: 124       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 124, NULL, st_17, st_6);
  memcpy (b_40, "ADD  ", 5);

  /* Line: 125       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 125, NULL, st_17, st_6);
  memcpy (b_41, "TOKENIZER:TOKENIZE-LISP-PROCEDURE       ", 40);

  /* Line: 127       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 127, NULL, st_17, st_6);
  cob_move ((cob_field *)&c_3, &f_43);

  /* Line: 128       : CALL               : tokenizer.cbl */
  cob_set_location (st_1, 128, NULL, st_17, st_16);
  cob_procedure_params[0] = &f_40;
  cob_procedure_params[1] = &f_41;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_40, b_41);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 8)
    goto *frame_ptr->return_address_ptr;

  /* Line: 129       : Paragraph PRINT-SYMBOL-TABLE      : tokenizer.cbl */

  /* Line: 131       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 131, NULL, st_19, st_6);
  memcpy (b_22, "0000000001", 10);

  /* Line: 132       : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 132, NULL, st_19, st_3);
  memcpy (b_22, "0000000001", 10);
  for (;;)
  {
    if (((int)cob_cmp_numdisp (b_22, 10, cob_get_llint (COB_SET_DATA (f_46, b_45)), 0) > 0))
      break;

    /* Line: 134       : DISPLAY            : tokenizer.cbl */
    cob_set_location (st_1, 134, NULL, st_19, st_20);
    cob_display (0, 1, 1, &f_22);

    /* Line: 135       : DISPLAY            : tokenizer.cbl */
    cob_set_location (st_1, 135, NULL, st_19, st_20);
    cob_display (0, 1, 1, COB_SET_FLD(f0, 50, b_45 + 4 + 50 * (cob_get_int (&f_22) - 1), &a_4));

    /* Line: 136       : DISPLAY            : tokenizer.cbl */
    cob_set_location (st_1, 136, NULL, st_19, st_20);
    cob_display (0, 1, 1, COB_SET_FLD(f0, 2, b_45 + 5004 + 2 * (cob_get_int (&f_22) - 1), &a_3));
    cob_add_int (&f_22, 1, 0);
  }

  /* Line: 138       : Paragraph FORMAT-LISP-PROCEDURE   : tokenizer.cbl */
  l_10:;

  /* Line: 142       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 142, NULL, st_21, st_6);
  memcpy (b_9, b_7, 2000);

  /* Line: 143       : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 143, NULL, st_21, st_3);
  /* PERFORM CALC-LISP-LENGTH */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 12;
  frame_ptr->return_address_ptr = &&l_28;
  goto l_12;
  l_28:
  frame_ptr--;

  /* Line: 144       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 144, NULL, st_21, st_6);
  memcpy (b_21, "0000000001", 10);

  /* Line: 145       : IF                 : tokenizer.cbl */
  cob_set_location (st_1, 145, NULL, st_21, st_9);
  if (!((int)(int)(*(b_9 + 1) - 32) == 0))
  {

    /* Line: 146       : MOVE               : tokenizer.cbl */
    cob_set_location (st_1, 146, NULL, st_21, st_6);
    memcpy (b_12 + 12, b_9, 2000);

    /* Line: 147       : STRING             : tokenizer.cbl */
    cob_set_location (st_1, 147, NULL, st_21, st_22);
    cob_string_init (&f_9, NULL);
    cob_string_delimited (NULL);
    cob_string_append ((cob_field *)&c_4);
    cob_string_delimited (NULL);
    cob_string_append (COB_SET_FLD(f0, cob_get_int (&f_11), b_12 + 12 + 1, &a_4));
    cob_string_finish ();

    /* Line: 150       : ADD                : tokenizer.cbl */
    cob_set_location (st_1, 150, NULL, st_21, st_10);
    cob_add_int (&f_21, 3, 0);

    /* Line: 151       : ADD                : tokenizer.cbl */
    cob_set_location (st_1, 151, NULL, st_21, st_10);
    cob_add_int (&f_11, 1, 0);
  }

  /* Line: 153       : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 153, NULL, st_21, st_3);
  memmove (b_21, b_21, 10);
  for (;;)
  {
    if (((int)memcmp (b_21, b_11, 10) > 0))
      break;

    /* Line: 155       : SET                : tokenizer.cbl */
    cob_set_location (st_1, 155, NULL, st_21, st_8);
    *(b_12 + 11) = 78;

    /* Line: 156       : SET                : tokenizer.cbl */
    cob_set_location (st_1, 156, NULL, st_21, st_8);
    *(b_12 + 10) = 78;

    /* Line: 157       : MOVE               : tokenizer.cbl */
    cob_set_location (st_1, 157, NULL, st_21, st_6);
    memcpy (b_12 + 12, b_9, 2000);

    /* Line: 158       : EVALUATE           : tokenizer.cbl */
    cob_set_location (st_1, 158, NULL, st_21, st_23);

    /* WHEN */

    if (((int)(int)(*(b_9 + (cob_get_int (&f_21) - 1)) - 40) == 0))
    {

      /* Line: 160       : PERFORM            : tokenizer.cbl */
      cob_set_location (st_1, 160, NULL, st_21, st_3);
      /* PERFORM FORMAT-PAREN-SPACE-PROCEDURE */
      frame_ptr++;
      if (unlikely(frame_ptr == frame_overflow))
          cob_fatal_error (COB_FERROR_STACK);
      frame_ptr->perform_through = 19;
      frame_ptr->return_address_ptr = &&l_29;
      goto l_19;
      l_29:
      frame_ptr--;
      goto l_11;
    }

    /* WHEN */

    if (((int)(int)(*(b_9 + (cob_get_int (&f_21) - 1)) - 41) == 0))
    {

      /* Line: 162       : PERFORM            : tokenizer.cbl */
      cob_set_location (st_1, 162, NULL, st_21, st_3);
      /* PERFORM FORMAT-PAREN-SPACE-PROCEDURE */
      frame_ptr++;
      if (unlikely(frame_ptr == frame_overflow))
          cob_fatal_error (COB_FERROR_STACK);
      frame_ptr->perform_through = 19;
      frame_ptr->return_address_ptr = &&l_30;
      goto l_19;
      l_30:
      frame_ptr--;
      goto l_11;
    }

    /* End EVALUATE */
    l_11:;
    cob_add_int (&f_21, 1, 0);
  }

  /* Line: 168       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 168, NULL, st_21, st_6);
  memcpy (b_40, "ADD  ", 5);

  /* Line: 169       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 169, NULL, st_21, st_6);
  memcpy (b_41, "TOKENIZER:FORMAT-LISP-PROCEDURE         ", 40);

  /* Line: 171       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 171, NULL, st_21, st_6);
  cob_move ((cob_field *)&c_5, &f_43);

  /* Line: 173       : CALL               : tokenizer.cbl */
  cob_set_location (st_1, 173, NULL, st_21, st_16);
  cob_procedure_params[0] = &f_40;
  cob_procedure_params[1] = &f_41;
  cob_glob_ptr->cob_call_params = 2;
  if (unlikely(call_LOGGER.funcvoid == NULL || cob_glob_ptr->cob_physical_cancel)) {
    call_LOGGER.funcvoid = cob_resolve_cobol ("LOGGER", 0, 1);
  }
  b_1 = ((int (*)(void *, void *))call_LOGGER.funcint) (b_40, b_41);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 10)
    goto *frame_ptr->return_address_ptr;

  /* Line: 174       : Paragraph CALC-LISP-LENGTH        : tokenizer.cbl */
  l_12:;

  /* Line: 176       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 176, NULL, st_24, st_6);
  memset (b_11, 48, 10);

  /* Line: 177       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 177, NULL, st_24, st_6);
  memset (b_12, 48, 10);

  /* Line: 178       : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 178, NULL, st_24, st_3);
  memcpy (b_21, "0000000001", 10);
  for (;;)
  {
    if (((int)cob_cmp_numdisp (b_21, 10, 2000LL, 0) == 0))
      break;

    /* Line: 180       : IF                 : tokenizer.cbl */
    cob_set_location (st_1, 180, NULL, st_24, st_9);
    if (!((int)(int)(*(b_9 + (cob_get_int (&f_21) - 1)) - 32) == 0))
    {

      /* Line: 182       : ADD                : tokenizer.cbl */
      cob_set_location (st_1, 182, NULL, st_24, st_10);
      cob_add_int (&f_11, 1, 0);

      /* Line: 183       : ADD                : tokenizer.cbl */
      cob_set_location (st_1, 183, NULL, st_24, st_10);
      cob_add (&f_11, &f_13, 0);

      /* Line: 184       : MOVE               : tokenizer.cbl */
      cob_set_location (st_1, 184, NULL, st_24, st_6);
      memset (b_12, 48, 10);
    }
    else
    {
      /* ELSE */

      /* Line: 186       : ADD                : tokenizer.cbl */
      cob_set_location (st_1, 186, NULL, st_24, st_10);
      cob_add_int (&f_13, 1, 0);
    }
    cob_add_int (&f_21, 1, 0);
  }

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 12)
    goto *frame_ptr->return_address_ptr;

  /* Line: 189       : Paragraph RESET-PARSE-FLAGS-PROCEDURE: tokenizer.cbl */

  /* Line: 190       : SET                : tokenizer.cbl */
  cob_set_location (st_1, 190, NULL, st_25, st_8);
  *(b_27) = 78;

  /* Line: 191       : SET                : tokenizer.cbl */
  cob_set_location (st_1, 191, NULL, st_25, st_8);
  *(b_27 + 1) = 78;

  /* Line: 192       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 192, NULL, st_25, st_6);
  memset (b_32 + 7, 48, 5);

  /* Line: 193       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 193, NULL, st_25, st_6);
  memset (b_32 + 12, 48, 5);

  /* Line: 194       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 194, NULL, st_25, st_6);
  memset (b_32 + 17, 48, 5);

  /* Line: 195       : Paragraph PRINT-PARSE-FLAGS-PROCEDURE: tokenizer.cbl */

  /* Line: 196       : DISPLAY            : tokenizer.cbl */
  cob_set_location (st_1, 196, NULL, st_26, st_20);
  cob_display (0, 1, 2, &c_6, &f_28);

  /* Line: 197       : DISPLAY            : tokenizer.cbl */
  cob_set_location (st_1, 197, NULL, st_26, st_20);
  cob_display (0, 1, 2, &c_7, &f_30);

  /* Line: 198       : DISPLAY            : tokenizer.cbl */
  cob_set_location (st_1, 198, NULL, st_26, st_20);
  cob_display (0, 1, 2, &c_8, &f_37);

  /* Line: 199       : DISPLAY            : tokenizer.cbl */
  cob_set_location (st_1, 199, NULL, st_26, st_20);
  cob_display (0, 1, 2, &c_9, &f_38);

  /* Line: 200       : DISPLAY            : tokenizer.cbl */
  cob_set_location (st_1, 200, NULL, st_26, st_20);
  cob_display (0, 1, 2, &c_10, &f_39);

  /* Line: 201       : Paragraph FORMAT-CHECK-PAREN-PROCEDURE: tokenizer.cbl */
  l_15:;

  /* Line: 203       : SUBTRACT           : tokenizer.cbl */
  cob_set_location (st_1, 203, NULL, st_27, st_28);
  cob_sub_int (&f_21, 1, 0);

  /* Line: 204       : IF                 : tokenizer.cbl */
  cob_set_location (st_1, 204, NULL, st_27, st_9);
  if (!((int)(int)(*(b_9 + (cob_get_int (&f_21) - 1)) - 32) == 0))
  {

    /* Line: 205       : SET                : tokenizer.cbl */
    cob_set_location (st_1, 205, NULL, st_27, st_8);
    *(b_12 + 11) = 89;
  }

  /* Line: 208       : ADD                : tokenizer.cbl */
  cob_set_location (st_1, 208, NULL, st_27, st_10);
  cob_add_int (&f_21, 2, 0);

  /* Line: 209       : IF                 : tokenizer.cbl */
  cob_set_location (st_1, 209, NULL, st_27, st_9);
  if (!((int)(int)(*(b_9 + (cob_get_int (&f_21) - 1)) - 32) == 0))
  {

    /* Line: 210       : SET                : tokenizer.cbl */
    cob_set_location (st_1, 210, NULL, st_27, st_8);
    *(b_12 + 10) = 89;
  }

  /* Line: 213       : SUBTRACT           : tokenizer.cbl */
  cob_set_location (st_1, 213, NULL, st_27, st_28);
  cob_sub_int (&f_21, 1, 0);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 15)
    goto *frame_ptr->return_address_ptr;

  /* Line: 215       : Paragraph FORMAT-ADD-LEFT-SPACE   : tokenizer.cbl */
  l_16:;

  /* Line: 216       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 216, NULL, st_29, st_6);
  memcpy (b_12 + 2012, b_21, 10);

  /* Line: 217       : SUBTRACT           : tokenizer.cbl */
  cob_set_location (st_1, 217, NULL, st_29, st_28);
  cob_sub_int (&f_19, 1, 0);

  /* Line: 218       : STRING             : tokenizer.cbl */
  cob_set_location (st_1, 218, NULL, st_29, st_22);
  cob_string_init (&f_9, NULL);
  cob_string_delimited (NULL);
  cob_string_append (COB_SET_FLD(f0, cob_get_int (&f_19), b_12 + 12 + 0, &a_4));
  cob_string_delimited (NULL);
  cob_string_append ((cob_field *)&c_2);
  cob_string_delimited (NULL);
  cob_string_append (COB_SET_FLD(f0, cob_get_int (&f_11), b_12 + 12 + (cob_get_int (&f_21) - 1), &a_4));
  cob_string_finish ();

  /* Line: 223       : ADD                : tokenizer.cbl */
  cob_set_location (st_1, 223, NULL, st_29, st_10);
  cob_add_int (&f_21, 1, 0);

  /* Line: 224       : ADD                : tokenizer.cbl */
  cob_set_location (st_1, 224, NULL, st_29, st_10);
  cob_add_int (&f_11, 1, 0);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 16)
    goto *frame_ptr->return_address_ptr;

  /* Line: 225       : Paragraph FORMAT-ADD-RIGHT-SPACE  : tokenizer.cbl */
  l_17:;

  /* Line: 226       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 226, NULL, st_30, st_6);
  memcpy (b_12 + 2012, b_21, 10);

  /* Line: 227       : ADD                : tokenizer.cbl */
  cob_set_location (st_1, 227, NULL, st_30, st_10);
  cob_add_int (&f_19, 1, 0);

  /* Line: 228       : STRING             : tokenizer.cbl */
  cob_set_location (st_1, 228, NULL, st_30, st_22);
  cob_string_init (&f_9, NULL);
  cob_string_delimited (NULL);
  cob_string_append (COB_SET_FLD(f0, cob_get_int (&f_21), b_12 + 12 + 0, &a_4));
  cob_string_delimited (NULL);
  cob_string_append ((cob_field *)&c_2);
  cob_string_delimited (NULL);
  cob_string_append (COB_SET_FLD(f0, cob_get_int (&f_11), b_12 + 12 + (cob_get_int (&f_19) - 1), &a_4));
  cob_string_finish ();

  /* Line: 233       : ADD                : tokenizer.cbl */
  cob_set_location (st_1, 233, NULL, st_30, st_10);
  cob_add_int (&f_21, 1, 0);

  /* Line: 234       : ADD                : tokenizer.cbl */
  cob_set_location (st_1, 234, NULL, st_30, st_10);
  cob_add_int (&f_11, 1, 0);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 17)
    goto *frame_ptr->return_address_ptr;

  /* Line: 235       : Paragraph FORMAT-ADD-BOTH-SPACES  : tokenizer.cbl */
  l_18:;

  /* Line: 236       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 236, NULL, st_31, st_6);
  memcpy (b_12 + 2012, b_21, 10);

  /* Line: 237       : SUBTRACT           : tokenizer.cbl */
  cob_set_location (st_1, 237, NULL, st_31, st_28);
  cob_sub_int (&f_19, 1, 0);

  /* Line: 238       : MOVE               : tokenizer.cbl */
  cob_set_location (st_1, 238, NULL, st_31, st_6);
  *(b_12 + 2022) = *(b_12 + 12 + (cob_get_int (&f_21) - 1));

  /* Line: 240       : ADD                : tokenizer.cbl */
  cob_set_location (st_1, 240, NULL, st_31, st_10);
  cob_add_int (&f_21, 1, 0);

  /* Line: 241       : STRING             : tokenizer.cbl */
  cob_set_location (st_1, 241, NULL, st_31, st_22);
  cob_string_init (&f_9, NULL);
  cob_string_delimited (NULL);
  cob_string_append (COB_SET_FLD(f0, cob_get_int (&f_19), b_12 + 12 + 0, &a_4));
  cob_string_delimited (NULL);
  cob_string_append ((cob_field *)&c_2);
  cob_string_delimited (NULL);
  cob_string_append (&f_20);
  cob_string_delimited (NULL);
  cob_string_append ((cob_field *)&c_2);
  cob_string_delimited (NULL);
  cob_string_append (COB_SET_FLD(f0, cob_get_int (&f_11), b_12 + 12 + (cob_get_int (&f_21) - 1), &a_4));
  cob_string_finish ();

  /* Line: 248       : ADD                : tokenizer.cbl */
  cob_set_location (st_1, 248, NULL, st_31, st_10);
  cob_add_int (&f_21, 1, 0);

  /* Line: 249       : ADD                : tokenizer.cbl */
  cob_set_location (st_1, 249, NULL, st_31, st_10);
  cob_add_int (&f_11, 2, 0);

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 18)
    goto *frame_ptr->return_address_ptr;

  /* Line: 250       : Paragraph FORMAT-PAREN-SPACE-PROCEDURE: tokenizer.cbl */
  l_19:;

  /* Line: 251       : PERFORM            : tokenizer.cbl */
  cob_set_location (st_1, 251, NULL, st_32, st_3);
  /* PERFORM FORMAT-CHECK-PAREN-PROCEDURE */
  frame_ptr++;
  if (unlikely(frame_ptr == frame_overflow))
      cob_fatal_error (COB_FERROR_STACK);
  frame_ptr->perform_through = 15;
  frame_ptr->return_address_ptr = &&l_31;
  goto l_15;
  l_31:
  frame_ptr--;

  /* Line: 252       : IF                 : tokenizer.cbl */
  cob_set_location (st_1, 252, NULL, st_32, st_9);
  if ((((int)(int)(*(b_12 + 10) - 89) == 0) && 
      ((int)(int)(*(b_12 + 11) - 89) == 0)))
  {

    /* Line: 253       : PERFORM            : tokenizer.cbl */
    cob_set_location (st_1, 253, NULL, st_32, st_3);
    /* PERFORM FORMAT-ADD-BOTH-SPACES */
    frame_ptr++;
    if (unlikely(frame_ptr == frame_overflow))
        cob_fatal_error (COB_FERROR_STACK);
    frame_ptr->perform_through = 18;
    frame_ptr->return_address_ptr = &&l_32;
    goto l_18;
    l_32:
    frame_ptr--;
  }
  else
  {
    /* ELSE */

    /* Line: 254       : IF                 : tokenizer.cbl */
    cob_set_location (st_1, 254, NULL, st_32, st_9);
    if (((int)(int)(*(b_12 + 10) - 89) == 0))
    {

      /* Line: 255       : PERFORM            : tokenizer.cbl */
      cob_set_location (st_1, 255, NULL, st_32, st_3);
      /* PERFORM FORMAT-ADD-RIGHT-SPACE */
      frame_ptr++;
      if (unlikely(frame_ptr == frame_overflow))
          cob_fatal_error (COB_FERROR_STACK);
      frame_ptr->perform_through = 17;
      frame_ptr->return_address_ptr = &&l_33;
      goto l_17;
      l_33:
      frame_ptr--;
    }
    else
    {
      /* ELSE */

      /* Line: 256       : IF                 : tokenizer.cbl */
      cob_set_location (st_1, 256, NULL, st_32, st_9);
      if (((int)(int)(*(b_12 + 11) - 89) == 0))
      {

        /* Line: 257       : PERFORM            : tokenizer.cbl */
        cob_set_location (st_1, 257, NULL, st_32, st_3);
        /* PERFORM FORMAT-ADD-LEFT-SPACE */
        frame_ptr++;
        if (unlikely(frame_ptr == frame_overflow))
            cob_fatal_error (COB_FERROR_STACK);
        frame_ptr->perform_through = 16;
        frame_ptr->return_address_ptr = &&l_34;
        goto l_16;
        l_34:
        frame_ptr--;
      }
    }
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
  module->module_name = "TOKENIZER";
  module->module_formatted_date = COB_MODULE_FORMATTED_DATE;
  module->module_source = COB_SOURCE_FILE;
  module->module_entry.funcptr = (void *(*)())TOKENIZER;
  module->module_cancel.funcptr = (void *(*)())TOKENIZER_;
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
  memset (b_8, 32, 30);
  memset (b_9, 32, 2000);
  memset (b_11, 48, 10);
  memset (b_12, 48, 10);
  memset (b_12 + 10, 32, 2002);
  memset (b_12 + 2012, 48, 10);
  *(cob_u8_ptr)(b_12 + 2022) = 32;
  memset (b_21, 48, 10);
  memset (b_22, 48, 10);
  memset (b_23, 48, 10);
  memset (b_24, 48, 10);
  *(cob_u8_ptr)(b_25) = 32;
  memset (b_27, 32, 2);
  memset (b_32, 48, 5);
  memset (b_32 + 5, 32, 2);
  memset (b_32 + 7, 48, 15);
  memset (b_40, 32, 5);
  memset (b_41, 32, 140);


  if (!h_LISP_FILE)
  {
    h_LISP_FILE = cob_cache_malloc (sizeof(cob_file));
  }
  h_LISP_FILE->select_name = (const char *)"LISP-FILE";
  h_LISP_FILE->file_status = h_LISP_FILE_status;
  memset (h_LISP_FILE_status, '0', 2);
  h_LISP_FILE->assign = &f_8;
  h_LISP_FILE->record = &f_7;
  h_LISP_FILE->variable_record = NULL;
  h_LISP_FILE->record_min = 0;
  h_LISP_FILE->record_max = 2000;
  h_LISP_FILE->nkeys = 0;
  h_LISP_FILE->keys = NULL;
  h_LISP_FILE->file = NULL;
  h_LISP_FILE->fd = -1;
  h_LISP_FILE->organization = 1;
  h_LISP_FILE->access_mode = 1;
  h_LISP_FILE->lock_mode = 0;
  h_LISP_FILE->open_mode = 0;
  h_LISP_FILE->flag_optional = 0;
  h_LISP_FILE->last_open_mode = 0;
  h_LISP_FILE->flag_operation = 0;
  h_LISP_FILE->flag_nonexistent = 0;
  h_LISP_FILE->flag_end_of_file = 0;
  h_LISP_FILE->flag_begin_of_file = 0;
  h_LISP_FILE->flag_first_read = 0;
  h_LISP_FILE->flag_read_done = 0;
  h_LISP_FILE->flag_select_features = 0;
  h_LISP_FILE->flag_needs_nl = 0;
  h_LISP_FILE->flag_needs_top = 0;
  h_LISP_FILE->file_version = 1;

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

  cob_close (h_LISP_FILE, NULL, COB_CLOSE_NORMAL, 1);
  cob_cache_free (h_LISP_FILE);
  h_LISP_FILE = NULL;
  call_LOGGER.funcvoid = NULL;
  b_1 = 0;
  cob_cache_free (module);
  module = NULL;

  initialized = 0;
  return 0;

}

/* End PROGRAM-ID 'TOKENIZER' */

/* End functions */

