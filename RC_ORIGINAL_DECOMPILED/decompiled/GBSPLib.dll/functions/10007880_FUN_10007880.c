/*
 * FUN_10007880 at 10007880
 * undefined FUN_10007880(void)
 * Address ranges: 10007880-100078e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10007880(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != -1) {
    (*DAT_1014e358)(s_ModelForLeafNode__Node_not_a_lea_10037890);
    return (undefined4 *)0x0;
  }
  piVar1 = (int *)param_1[0x19];
  if (piVar1 != (int *)0x0) {
    while (*(int *)(piVar1[9] + 4) == 0) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    if (piVar1 != (int *)0x0) {
      return &DAT_100dc1f8 + (&DAT_10265d04)[*(int *)(piVar1[9] + 4) * 0x2b] * 0x39;
    }
  }
  return (undefined4 *)0x0;
}

