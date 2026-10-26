/*
 * FUN_100087ae at 100087ae
 * undefined4 __cdecl FUN_100087ae(FILE * param_1)
 * Address ranges: 100087ae-100087de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100087ae(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10009a40((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10009a92((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}

