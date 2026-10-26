/*
 * FUN_10008d2e at 10008d2e
 * int __cdecl FUN_10008d2e(int param_1)
 * Address ranges: 10008d2e-10008dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10008d2e(int param_1)

{
  SIZE_T SVar1;
  int *piVar2;
  
  FUN_1000bf71();
  SVar1 = FUN_1000c0d5(DAT_100ec810);
  if (SVar1 < (uint)((int)DAT_100ec80c + (4 - (int)DAT_100ec810))) {
    SVar1 = FUN_1000c0d5(DAT_100ec810);
    piVar2 = FUN_1000bf9d(DAT_100ec810,(uint *)(SVar1 + 0x10));
    if (piVar2 == (int *)0x0) {
      param_1 = 0;
      goto LAB_10008da3;
    }
    DAT_100ec80c = piVar2 + ((int)DAT_100ec80c - (int)DAT_100ec810 >> 2);
    DAT_100ec810 = piVar2;
  }
  *DAT_100ec80c = param_1;
  DAT_100ec80c = DAT_100ec80c + 1;
LAB_10008da3:
  FUN_1000bf7a();
  return param_1;
}

