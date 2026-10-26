/*
 * FUN_0044c24c at 0044c24c
 * undefined __register FUN_0044c24c(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0044c24c-0044c2f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044c24c(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_0044c2f4;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_2 == (int *)param_1[0x82]) goto LAB_0044c2de;
  uVar4 = 0;
  puVar1 = &stack0xfffffffc;
  if (param_2 == (int *)0x0) goto LAB_0044c2b7;
  puVar1 = &stack0xfffffffc;
  if (param_1 == param_2) {
LAB_0044c296:
    puStack_18 = puVar1;
    FUN_00406a48((undefined4 *)PTR_PTR_00572520,(int *)&local_8);
    piVar3 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_8);
    FUN_0040382c(piVar3);
    param_3 = extraout_ECX_01;
    uVar4 = extraout_EDX_01;
    puVar1 = puStack_18;
  }
  else {
    piVar3 = FUN_0044879c(param_2);
    puVar1 = puStack_18;
    if (param_1 != piVar3) goto LAB_0044c296;
    param_3 = extraout_ECX;
    uVar4 = extraout_EDX;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      cVar2 = FUN_00403270(param_2,extraout_EDX,extraout_ECX);
      param_3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
      puVar1 = puStack_18;
      if (cVar2 == '\0') goto LAB_0044c296;
    }
  }
LAB_0044c2b7:
  puStack_18 = puVar1;
  param_1[0x82] = (int)param_2;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(char *)((int)param_1 + 0x216) != '\0') {
      FUN_0044c604(param_1);
      param_3 = extraout_ECX_02;
      uVar4 = extraout_EDX_02;
    }
    FUN_00403270(param_1,uVar4,param_3);
  }
LAB_0044c2de:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0044c2fb;
  puStack_1c = (undefined1 *)0x44c2f3;
  FUN_00403db0((int *)&local_8);
  return;
}

