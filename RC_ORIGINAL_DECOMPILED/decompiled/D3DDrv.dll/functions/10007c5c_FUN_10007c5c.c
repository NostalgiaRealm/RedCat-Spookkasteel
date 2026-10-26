/*
 * FUN_10007c5c at 10007c5c
 * undefined4 __cdecl FUN_10007c5c(FILE * param_1)
 * Address ranges: 10007c5c-10007c8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10007c5c(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10008997((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_100089e9((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}

