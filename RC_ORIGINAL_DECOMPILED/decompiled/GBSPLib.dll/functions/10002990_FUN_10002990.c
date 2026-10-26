/*
 * FUN_10002990 at 10002990
 * undefined FUN_10002990(void)
 * Address ranges: 10002990-100029db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002990(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  iVar1 = FUN_1000c190(param_1);
  *(int *)(param_1 + 0x10) = iVar1;
  if (*(float *)(param_1 + (iVar1 % 3) * 4) < 0.0) {
    FUN_10014600();
    *(float *)(param_1 + 0xc) = -*(float *)(param_1 + 0xc);
    *param_2 = 1;
  }
  return;
}

