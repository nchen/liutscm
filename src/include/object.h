/*
 * object.h
 *
 *
 *
 * Copyright (C) 2013-03-17 liutos <mat.liutos@gmail.com>
 */
#ifndef OBJECT_H
#define OBJECT_H

#include "types.h"

extern lisp_object_t make_fixnum(int);
extern lisp_object_t make_eof_object(void);
extern lisp_object_t make_boolean(int);
extern lisp_object_t make_true(void);
extern lisp_object_t make_false(void);
extern lisp_object_t make_character(char);
extern lisp_object_t make_string(char *);
extern lisp_object_t make_empty_list(void);
extern lisp_object_t make_close_object(void);
extern lisp_object_t make_dot_object(void);
extern lisp_object_t make_symbol(char *);
extern lisp_object_t make_pair(lisp_object_t, lisp_object_t);
extern lisp_object_t make_undefined(void);
extern lisp_object_t find_or_create_symbol(char *);
extern void set_binding(lisp_object_t, lisp_object_t, lisp_object_t);
extern lisp_object_t get_variable_value(lisp_object_t, lisp_object_t);
extern void add_binding(lisp_object_t, lisp_object_t, lisp_object_t);
extern lisp_object_t extend_environment(lisp_object_t, lisp_object_t, lisp_object_t);

#endif