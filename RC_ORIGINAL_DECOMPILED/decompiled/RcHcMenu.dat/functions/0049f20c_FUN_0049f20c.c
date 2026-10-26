/*
 * FUN_0049f20c at 0049f20c
 * undefined __register FUN_0049f20c(int * param_1, undefined4 * param_2)
 * Address ranges: 0049f20c-0049f319
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049f20c(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  char *pcStack_13c;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  byte *local_18;
  uint *local_14;
  int *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_1c = 0;
  local_20 = 0;
  local_18 = (byte *)0x0;
  local_14 = (uint *)0x0;
  puStack_124 = (undefined1 *)0x49f231;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_128 = &LAB_0049f31a;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  uVar1 = 1;
  local_10 = (int *)0x0;
  puStack_124 = &stack0xfffffffc;
  FUN_0040a04c((undefined *)local_c,(int *)&local_18);
  FUN_004096cc(local_18,(int *)&local_14);
  FUN_00404140(local_14,(uint *)&DAT_0049f330);
  if ((bool)uVar1) {
    local_10 = FUN_0049d354((int *)&PTR_FUN_0049d2f4,'\x01',local_c);
  }
  else {
    FUN_00404140(local_14,(uint *)&DAT_0049f340);
    if ((bool)uVar1) {
      local_10 = FUN_0049e06c((int *)&PTR_FUN_0049e00c,'\x01',local_c);
    }
    else {
      FUN_00402fe0(*local_8,local_120);
      FUN_00403fd4(&local_20,local_120);
      pcStack_13c = " Unhandled case-part";
      FUN_004040f0(&local_1c,4);
      FUN_00403d94(local_1c);
    }
  }
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403dd4(&local_20,3);
  FUN_00403db0((int *)&local_14);
  FUN_00403db0((int *)&local_c);
  return;
}

