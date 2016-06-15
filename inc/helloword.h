#ifndef __helloword_H__
#define __helloword_H__

#include <app.h>
#include <Elementary.h>
#include <system_settings.h>
#include <efl_extension.h>
#include <dlog.h>

#ifdef  LOG_TAG
#undef  LOG_TAG
#endif
#define LOG_TAG "helloword"

#if !defined(PACKAGE)
#define PACKAGE "org.example.helloword"
#endif

#endif /* __helloword_H__ */
