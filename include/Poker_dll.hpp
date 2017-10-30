#ifndef POKER_DLL_HPP_INCLUDED
#define POKER_DLL_HPP_INCLUDED


#endif // POKER_DLL_HPP_INCLUDED
#include <stdint.h>

void bet(long *xmin,long *xmax,long *ymin,long *ymax, double *money_to_bet);
void fold(long *xmin,long *xmax,long *ymin,long *ymax);
void call(long *xmin,long *xmax,long *ymin,long *ymax);

bool verify_quit_buton(void);
//Mat hwnd2mat(HWND hwnd);
bool detect_poker_window(long *xmin,long *xmax,long *ymin,long *ymax);
