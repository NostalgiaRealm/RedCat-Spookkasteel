/*
 * FUN_10012760 at 10012760
 * undefined FUN_10012760(void)
 * Address ranges: 10012760-100127cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10012760(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*param_1 == -1) {
    return true;
  }
  puVar1 = (undefined4 *)param_1[3];
  do {
    puVar2 = puVar1;
    if (puVar2 == (undefined4 *)0x0) {
      iVar3 = FUN_10012760(param_1[4]);
      if (iVar3 == 0) {
        return false;
      }
      iVar3 = FUN_10012760(param_1[5]);
      return iVar3 != 0;
    }
    puVar1 = (undefined4 *)*puVar2;
  } while ((((puVar2[0x11] != 0) || (puVar2[0xf] != 0)) || (puVar2[0x10] != 0)) ||
          (iVar3 = FUN_10012670(puVar2), iVar3 != 0));
  return false;
}

