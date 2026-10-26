/*
 * FUN_004ea1ac at 004ea1ac
 * undefined __register FUN_004ea1ac(int param_1, byte * param_2, undefined4 param_3)
 * Address ranges: 004ea1ac-004ea228
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ea1ac(int param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  byte *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_24 = &LAB_004ea229;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004ea0f8(param_1,param_2);
  FUN_00409690(local_c,&local_18);
  puVar3 = &DAT_004ea240;
  uVar2 = local_10;
  iVar4 = local_18;
  FUN_004040f0(&local_14,3);
  iVar1 = **(int **)(local_8 + 0x7c);
  (**(code **)(iVar1 + 0x34))(*(int **)(local_8 + 0x7c),local_14,iVar1,uVar2,puVar3,iVar4);
  *in_FS_OFFSET = uVar2;
  FUN_00403dd4(&local_18,2);
  return;
}

