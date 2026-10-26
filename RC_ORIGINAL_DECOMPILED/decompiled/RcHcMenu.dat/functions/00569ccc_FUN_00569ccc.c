/*
 * FUN_00569ccc at 00569ccc
 * undefined __register FUN_00569ccc(undefined4 param_1, int param_2, undefined4 * param_3)
 * Address ranges: 00569ccc-00569e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00569ccc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_50;
  undefined1 *puStackY_4c;
  undefined1 *puStackY_48;
  int iVar4;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  puStack_34 = (undefined1 *)0x569cf2;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStack_38 = &LAB_00569ebc;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_1c = *(undefined4 *)(local_c + 8);
  local_18 = 0xb;
  iVar4 = 0;
  puStackY_48 = (undefined1 *)0x569d18;
  puStack_34 = &stack0xfffffffc;
  uVar2 = FUN_004a418c();
  puStackY_48 = (undefined1 *)0x569d28;
  FUN_004a474c(uVar2,0x569ed4,0,iVar4);
  puStackY_48 = (undefined1 *)0x569d34;
  local_14 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX);
  puStackY_4c = &LAB_00569e88;
  uStackY_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_50;
  puStackY_48 = &stack0xfffffffc;
  FUN_0040407c((int *)&local_20,local_10,(undefined4 *)&DAT_00569ef4);
  cVar1 = FUN_004a7f54(*(int **)(DAT_005748e0 + 0x10c),local_20,local_14);
  if (cVar1 != '\0') {
    FUN_004adb50(local_c,local_14[0x23]);
    FUN_004adb90(local_c,local_14[0x10]);
    piVar3 = (int *)FUN_004ad63c(local_c,0);
    (**(code **)(*piVar3 + 8))(piVar3,local_14);
  }
  FUN_0040407c((int *)&local_24,local_10,(undefined4 *)&DAT_00569f04);
  cVar1 = FUN_004a7f54(*(int **)(DAT_005748e0 + 0x10c),local_24,local_14);
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_004ad63c(local_c,1);
    (**(code **)(*piVar3 + 8))(piVar3,local_14);
  }
  FUN_0040407c((int *)&local_28,local_10,(undefined4 *)&DAT_00569f14);
  cVar1 = FUN_004a7f54(*(int **)(DAT_005748e0 + 0x10c),local_28,local_14);
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_004ad63c(local_c,3);
    (**(code **)(*piVar3 + 8))(piVar3,local_14);
    piVar3 = (int *)FUN_004ad63c(local_c,2);
    (**(code **)(*piVar3 + 8))(piVar3,local_14);
  }
  FUN_0040407c((int *)&local_2c,local_10,(undefined4 *)&DAT_00569f24);
  cVar1 = FUN_004a7f54(*(int **)(DAT_005748e0 + 0x10c),local_2c,local_14);
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_004ad63c(local_c,4);
    (**(code **)(*piVar3 + 8))(piVar3,local_14);
  }
  *in_FS_OFFSET = uStackY_50;
  puStackY_48 = &LAB_00569e8f;
  puStackY_4c = (undefined1 *)0x569e87;
  FUN_00403094(local_14);
  return;
}

