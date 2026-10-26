/*
 * FUN_0049206c at 0049206c
 * undefined __register FUN_0049206c(int * param_1)
 * Address ranges: 0049206c-004920f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049206c(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_004920f5;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".CreateAppObj: no type");
    FUN_00403d94(local_10);
    puVar1 = puStack_114;
  }
  puStack_114 = puVar1;
  local_c = (**(code **)(local_8[0xd] + 0x38))(local_8[0xd],1);
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004920fc;
  puStack_118 = (undefined1 *)0x4920f4;
  FUN_00403db0(&local_10);
  return;
}

