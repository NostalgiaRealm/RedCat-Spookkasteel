/*
 * FUN_10007700 at 10007700
 * undefined FUN_10007700(void)
 * Address ranges: 10007700-10007815
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10007700(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  param_1[0x20] = -1;
  param_1[0x21] = 0;
  if (*param_1 != -1) {
    iVar3 = FUN_10007700(param_1[4]);
    if (iVar3 == 0) {
      return false;
    }
    iVar3 = FUN_10007700(param_1[5]);
    return iVar3 != 0;
  }
  if ((*(byte *)(param_1 + 2) & 0x43) == 0) {
    return true;
  }
  if (param_1[0xd] == 0) {
    (*DAT_1014e35c)(s__WARNING__CreateLeafSides__Conte_100377fc);
    return true;
  }
  iVar5 = 0;
  DAT_1014e630 = 0;
  iVar3 = param_1[0xd];
joined_r0x10007763:
  iVar1 = iVar3;
  if (iVar1 == 0) {
    iVar3 = FUN_100074f0(param_1);
    return iVar3 != 0;
  }
  uVar4 = (uint)(*(int **)(iVar1 + 4) == param_1);
  iVar3 = *(int *)(iVar1 + 0xc + (uint)(uVar4 == 0) * 4);
  iVar2 = 0;
  if (0 < iVar5) goto code_r0x10007780;
  goto LAB_100077a3;
code_r0x10007780:
  do {
    if (((&DAT_1014e498)[iVar2] == *(int *)(iVar1 + 0x14)) && ((&DAT_10248638)[iVar2] == uVar4))
    break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar5);
  if (99 < iVar2) {
    (*DAT_1014e358)(s_CreateLeafSides_r__Max_portal_le_100377d0);
    return false;
  }
  if (iVar5 <= iVar2) {
LAB_100077a3:
    iVar5 = iVar5 + 1;
    (&DAT_1014e498)[iVar2] = *(undefined4 *)(iVar1 + 0x14);
    (&DAT_10248638)[iVar2] = uVar4;
    DAT_1014e630 = iVar5;
  }
  goto joined_r0x10007763;
}

