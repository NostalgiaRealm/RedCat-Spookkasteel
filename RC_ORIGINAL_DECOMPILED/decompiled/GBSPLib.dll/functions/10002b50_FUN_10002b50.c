/*
 * FUN_10002b50 at 10002b50
 * undefined FUN_10002b50(void)
 * Address ranges: 10002b50-10002bf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10002b50(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_14 [5];
  
  FUN_10002ae0(param_1,param_1 + 3);
  puVar3 = local_14;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_10002990(local_14,param_2);
  iVar2 = 0;
  puVar3 = &DAT_1003fdf8;
  if (0 < DAT_1014e1fc) {
    do {
      iVar1 = FUN_100029e0(local_14,puVar3);
      if (iVar1 != 0) {
        return iVar2;
      }
      puVar3 = puVar3 + 5;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_1014e1fc);
  }
  if (DAT_1014e1fc < 32000) {
    puVar3 = local_14;
    puVar4 = &DAT_1003fdf8 + DAT_1014e1fc * 5;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    DAT_1014e1fc = DAT_1014e1fc + 1;
    return iVar2;
  }
  (*DAT_1014e358)(s_Max_BSP_Planes__10036508);
  return -1;
}

