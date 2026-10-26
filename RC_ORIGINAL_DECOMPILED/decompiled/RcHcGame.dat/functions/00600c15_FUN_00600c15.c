/*
 * FUN_00600c15 at 00600c15
 * undefined FUN_00600c15(void)
 * Address ranges: 00600c15-00600c42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00600c15(undefined4 param_1)

{
  int iVar1;
  
  if ((short)param_1 != -1) {
    iVar1 = FUN_00600b97((int)&param_1 + 2,param_1,0,0);
    if (iVar1 == 1) {
      return (int)param_1._2_1_;
    }
  }
  return -1;
}

