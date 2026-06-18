// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpu_top.h for the primary calling header

#ifndef _VNPU_TOP___024UNIT_H_
#define _VNPU_TOP___024UNIT_H_  // guard

#include "verilated.h"

//==========

class Vnpu_top__Syms;

//----------

VL_MODULE(Vnpu_top___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vnpu_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vnpu_top___024unit);  ///< Copying not allowed
  public:
    Vnpu_top___024unit(const char* name = "TOP");
    ~Vnpu_top___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vnpu_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
