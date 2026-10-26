/*
 * FUN_10007420 at 10007420
 * undefined FUN_10007420(void)
 * Address ranges: 10007420-10007488
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007420(int *param_1)

{
  int iVar1;
  
  if ((*param_1 != -1) && (param_1[0x14] == 0)) {
    FUN_10007420(param_1[4]);
    FUN_10007420(param_1[5]);
    return 1;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_1[0x15] = -1;
    return 1;
  }
  iVar1 = FUN_100073d0(param_1,DAT_1014e62c);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_1014e62c = DAT_1014e62c + 1;
  return 1;
}

