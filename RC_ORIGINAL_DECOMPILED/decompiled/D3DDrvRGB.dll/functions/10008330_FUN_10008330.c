/*
 * FUN_10008330 at 10008330
 * undefined4 __cdecl FUN_10008330(undefined4 * param_1, int param_2, int param_3, float * param_4, int param_5, int param_6)
 * Address ranges: 10008330-10008372
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl
FUN_10008330(undefined4 *param_1,int param_2,int param_3,float *param_4,int param_5,int param_6)

{
  undefined *this;
  
  this = &DAT_100ec120;
  if ((float)param_1[8] < 255.0) {
    this = &DAT_100ec0f8;
  }
  FUN_10008200(this,param_3,param_5,param_1,param_4,param_2,param_6);
  return 1;
}

