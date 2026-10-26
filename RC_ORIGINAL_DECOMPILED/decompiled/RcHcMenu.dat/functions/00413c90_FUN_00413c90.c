/*
 * FUN_00413c90 at 00413c90
 * undefined __register FUN_00413c90(int * param_1, int * param_2)
 * Address ranges: 00413c90-00413d10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413c90(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_00413d2e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x413cb8;
  local_8 = param_1;
  FUN_00413580(param_1);
  puStack_28 = &LAB_00413d11;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar1 = FUN_004147cc(param_2);
  iVar2 = FUN_004147b0(param_2);
  FUN_00403e98(&local_c,(undefined4 *)0x0,iVar1 - iVar2);
  (**(code **)(*param_2 + 4))(param_2,local_c,iVar1 - iVar2);
  (**(code **)(*local_8 + 0x2c))(local_8,local_c);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00413d18;
  puStack_28 = (undefined1 *)0x413d10;
  FUN_0041363c(local_8);
  return;
}

