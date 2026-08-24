#ifndef __SOH_EXPORT_H
#define __SOH_EXPORT_H

#ifdef USESOHLIBRARY
#ifdef  SOHLIBRARY_EXPORTS 
#define SOHAPI __declspec(dllexport)
#else
#define SOHAPI __declspec(dllimport)
#endif
#else
#define SOHAPI
#endif

#endif

