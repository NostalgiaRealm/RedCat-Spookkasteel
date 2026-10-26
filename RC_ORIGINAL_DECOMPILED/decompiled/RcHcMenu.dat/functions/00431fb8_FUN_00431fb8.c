/*
 * FUN_00431fb8 at 00431fb8
 * undefined __register FUN_00431fb8(int * param_1, int * param_2, undefined4 * param_3)
 * Address ranges: 00431fb8-004320b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431fb8(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18 [4];
  int *local_8;
  
  puVar4 = local_18;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar3 = 0;
  local_8 = param_1;
  if (param_2 != (int *)param_1[0x24]) {
    iVar2 = param_1[0x24];
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x140) != 0)) {
      puStack_28 = (undefined1 *)0x432001;
      FUN_0041251c(*(int **)(iVar2 + 0x140),(int)param_1);
      uVar3 = extraout_ECX;
    }
    if (((param_2 != (int *)0x0) && (param_2 != (int *)0xffffffff)) && (param_2[0x50] != 0)) {
      puStack_28 = (undefined1 *)0x432021;
      FUN_004121d8((int *)param_2[0x50],(int)local_8);
      uVar3 = extraout_ECX_00;
    }
  }
  *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) | 0x400;
  puStack_2c = &LAB_004320b6;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  if (param_2 != (int *)0xffffffff) {
    puStack_28 = &stack0xfffffffc;
    FUN_00403270(local_8,param_2,local_18);
    uVar3 = extraout_ECX_01;
  }
  piVar1 = (int *)local_8[0x24];
  if (param_2 != piVar1) {
    if (param_2 == (int *)0xffffffff) {
      local_8[0x24] = 0;
    }
    else {
      local_8[0x24] = (int)param_2;
      if (param_2 != (int *)0x0) {
        FUN_00403270(param_2,local_8,local_18);
        uVar3 = extraout_ECX_02;
      }
    }
    if (piVar1 != (int *)0x0) {
      FUN_00403270(piVar1,local_8,uVar3);
    }
  }
  *in_FS_OFFSET = uStack_30;
  *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xfbff;
  return;
}

