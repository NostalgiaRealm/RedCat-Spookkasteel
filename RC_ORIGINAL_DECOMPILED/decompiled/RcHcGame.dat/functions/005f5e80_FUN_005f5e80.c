/*
 * FUN_005f5e80 at 005f5e80
 * undefined FUN_005f5e80(void)
 * Address ranges: 005f5e80-005f5ec0;005f5f1c-005f5fce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005f5e80(short *param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  sVar1 = *param_1;
  if (sVar1 == 0xff) {
    return 0;
  }
joined_r0x005f5ea2:
  sVar1 = sVar1 + -1;
  if (sVar1 < 0) {
    return param_2;
  }
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 == 0x43) {
                    /* WARNING: Could not recover jumptable at 0x005f5eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*(code *)(&PTR_LAB_005f5fd0)[*(int *)(param_1 + sVar1 * 2 + 2) + -0x36])();
    return iVar3;
  }
  cVar2 = FUN_005e9c90(iVar3);
  if (cVar2 == '\0') goto LAB_005f5f59;
  iVar3 = (int)sVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_005f5fdf)[*(int *)(param_1 + iVar3 * 2 + 2)]) {
  case 0:
    goto switchD_005f5f3b_caseD_0;
  case 1:
    uVar4 = (uint)param_1[iVar3 + 0xc];
    iVar3 = param_2 + 0x44;
    break;
  case 2:
    uVar4 = (uint)param_1[iVar3 + 0xc];
    iVar3 = param_2 + 0x80;
  }
  goto LAB_005f5f7f;
LAB_005f5f59:
  if (iVar3 != 0x42) goto joined_r0x005f5ea2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_005f5ffa)[*(int *)(param_1 + sVar1 * 2 + 2)]) {
  case 0:
switchD_005f5f3b_caseD_0:
    uVar4 = (uint)param_1[sVar1 + 0xc];
    iVar3 = param_2 + 0x2c;
LAB_005f5f7f:
    if ((*(int *)(iVar3 + 4) != 0) &&
       (uVar4 < (uint)(*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2))) goto LAB_005f5fb6;
    break;
  case 1:
    uVar4 = (uint)param_1[sVar1 + 0xc];
    iVar3 = param_2 + 0x40;
    if ((*(int *)(param_2 + 0x44) != 0) &&
       (uVar4 < (uint)(*(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x44) >> 2)))
    goto LAB_005f5fb6;
  }
  FUN_005f6040();
LAB_005f5fb6:
  param_2 = *(int *)(*(int *)(iVar3 + 4) + uVar4 * 4);
  goto joined_r0x005f5ea2;
}

