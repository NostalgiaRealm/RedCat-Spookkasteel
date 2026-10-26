/*
 * FUN_004166a8 at 004166a8
 * undefined __register FUN_004166a8(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004166a8-004166e2;0041672f-00416892
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004166a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  OLECHAR *local_1c;
  undefined4 *local_18;
  undefined1 local_14 [16];
  
  puStack_24 = &stack0xfffffffc;
  local_14._8_8_ = (_union_2685)0x0;
  local_14._4_4_ = 0;
  local_14._0_4_ = 0;
  local_18 = (undefined4 *)0x0;
  local_1c = (OLECHAR *)0x0;
  puStack_28 = &LAB_00416893;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = FUN_00415850(*(int *)(param_4 + -4),param_2,0);
  switch(bVar1) {
  case 0:
  case 0xd:
    uVar2 = FUN_00417010(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    if ((char)uVar2 == '\r') {
      FUN_00404de4((VARIANTARG *)local_14);
    }
    else {
      FUN_00404e28((VARIANT *)local_14,(VARIANTARG *)PTR_DAT_00572068);
    }
    break;
  default:
    piVar4 = FUN_0040cfa8((int *)&DAT_004103ec,'\x01',(undefined4 *)PTR_PTR_00572550);
    FUN_0040382c(piVar4);
    break;
  case 2:
    iVar3 = FUN_00416230(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14[8] = (char)iVar3;
    break;
  case 3:
    iVar3 = FUN_00416230(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_2_ = (short)iVar3;
    break;
  case 4:
    iVar3 = FUN_00416230(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_4_ = iVar3;
    break;
  case 5:
    FUN_00416024(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_8_ = (undefined8)in_ST0;
    break;
  case 6:
  case 0xc:
    FUN_00416f68(*(int *)(param_4 + -4),(int *)&local_18,extraout_ECX);
    FUN_004054ac((VARIANTARG *)local_14,local_18);
    break;
  case 8:
  case 9:
    uVar2 = FUN_00417010(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_2_ = -(ushort)((char)uVar2 == '\t');
    break;
  case 0xf:
    FUN_00416064(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_4_ = (float)in_ST0;
    break;
  case 0x10:
    FUN_004160a4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_8_ = (undefined8)ROUND(in_ST0);
    break;
  case 0x11:
    FUN_004160f0(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_8_ = (undefined8)in_ST0;
    break;
  case 0x12:
    FUN_00416fc8(*(int *)(param_4 + -4),(int *)&local_1c,extraout_ECX);
    FUN_004054ec((VARIANTARG *)local_14,local_1c);
  }
  local_14._0_2_ = *(undefined2 *)(&DAT_0056f394 + (uint)bVar1 * 4);
  FUN_0040ff58(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc),(VARIANTARG *)local_14);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0041689a;
  puStack_28 = (undefined1 *)0x416882;
  FUN_00404474(&local_1c);
  puStack_28 = (undefined1 *)0x41688a;
  FUN_00403db0((int *)&local_18);
  puStack_28 = (undefined1 *)0x416892;
  FUN_00405bcc((VARIANTARG *)local_14);
  return;
}

