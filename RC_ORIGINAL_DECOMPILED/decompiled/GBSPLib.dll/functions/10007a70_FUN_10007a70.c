/*
 * FUN_10007a70 at 10007a70
 * undefined FUN_10007a70(void)
 * Address ranges: 10007a70-10007ae5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007a70(int *param_1)

{
  int iVar1;
  
  if (*param_1 != -1) {
    iVar1 = FUN_10007a70(param_1[4]);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_10007a70(param_1[5]);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (((param_1[2] & 0x100U) != 0) && (param_1[0x16] == 0)) {
    iVar1 = FUN_10007880(param_1);
    if (iVar1 == 0) {
      (*DAT_1014e358)(s_FinishAreaPortals_r__No_model_fo_10037938);
      return 0;
    }
    param_1[0x16] = *(int *)(iVar1 + 0xdc);
    *(undefined4 *)(iVar1 + 0xd8) = 1;
  }
  return 1;
}

