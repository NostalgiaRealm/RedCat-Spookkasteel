/*
 * FUN_10003d52 at 10003d52
 * undefined4 __cdecl FUN_10003d52(FILE * param_1)
 * Address ranges: 10003d52-10003d82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10003d52(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10004488((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_100044da((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}

