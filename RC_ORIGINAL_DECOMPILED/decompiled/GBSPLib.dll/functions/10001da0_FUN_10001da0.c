/*
 * FUN_10001da0 at 10001da0
 * undefined FUN_10001da0(void)
 * Address ranges: 10001da0-10001ddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001da0(int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (2 < *(int *)(param_1 + 0x28)) {
    iVar1 = 0;
    pfVar2 = (float *)(param_1 + 0x10);
    while (-15192.0 < pfVar2[-3]) {
      if (15192.0 <= *pfVar2) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 1;
      if (2 < iVar1) {
        return 1;
      }
    }
  }
  return 0;
}

