/*
 * FUN_0056ad2c at 0056ad2c
 * undefined __register FUN_0056ad2c(int * param_1, int * param_2)
 * Address ranges: 0056ad2c-0056aec0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56aa80 slot 3 for TSettings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56aa80 slot 3 for
   TSettings. Original bytes unchanged; names and types still inferred. */

void FUN_0056ad2c(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_120 = &LAB_0056aec1;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_004040f0((int *)&local_14,3);
  puVar1 = local_14;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  FUN_004a3c88(local_8,local_c);
  local_10 = FUN_00403224(local_c,(int)&PTR_FUN_0056aa80);
  local_8[0xb] = *(int *)(local_10 + 0x2c);
  local_8[4] = *(int *)(local_10 + 0x10);
  local_8[5] = *(int *)(local_10 + 0x14);
  local_8[6] = *(int *)(local_10 + 0x18);
  *(undefined1 *)(local_8 + 7) = *(undefined1 *)(local_10 + 0x1c);
  *(undefined1 *)((int)local_8 + 0x1d) = *(undefined1 *)(local_10 + 0x1d);
  *(undefined1 *)((int)local_8 + 0x1e) = *(undefined1 *)(local_10 + 0x1e);
  *(undefined1 *)((int)local_8 + 0x1f) = *(undefined1 *)(local_10 + 0x1f);
  *(undefined1 *)((int)local_8 + 0x39) = *(undefined1 *)(local_10 + 0x39);
  *(undefined1 *)(local_8 + 0xe) = *(undefined1 *)(local_10 + 0x38);
  *(undefined1 *)(local_8 + 0x10) = *(undefined1 *)(local_10 + 0x40);
  local_8[0xc] = *(int *)(local_10 + 0x30);
  local_8[0xd] = *(int *)(local_10 + 0x34);
  local_8[0xf] = *(int *)(local_10 + 0x3c);
  local_8[9] = *(int *)(local_10 + 0x24);
  *(undefined1 *)(local_8 + 10) = *(undefined1 *)(local_10 + 0x28);
  local_8[8] = *(int *)(local_10 + 0x20);
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_0056aa80);
  (**(code **)(*(int *)local_8[3] + 0xc))((int *)local_8[3],*(undefined4 *)(iVar3 + 0xc));
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "Assign";
  FUN_00403dd4(&local_18,2);
  return;
}

