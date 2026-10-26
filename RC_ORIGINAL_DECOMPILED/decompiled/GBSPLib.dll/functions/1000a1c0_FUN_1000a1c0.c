/*
 * FUN_1000a1c0 at 1000a1c0
 * undefined FUN_1000a1c0(void)
 * Address ranges: 1000a1c0-1000a212
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000a1c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  DAT_10265cc4 = 0;
  iVar1 = FUN_10009f90(param_1,param_2,*DAT_1014e284);
  if (iVar1 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = DAT_10265cb8;
      param_3[1] = DAT_10265cbc;
      param_3[2] = DAT_10265cc0;
    }
    return 1;
  }
  return 0;
}

