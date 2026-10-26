/*
 * FUN_0049d4a8 at 0049d4a8
 * undefined __register FUN_0049d4a8(undefined4 param_1, undefined * param_2)
 * Address ranges: 0049d4a8-0049d566
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049d4a8(undefined4 param_1,undefined *param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_18;
  uint *local_14;
  int *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  local_18 = (byte *)0x0;
  local_14 = (uint *)0x0;
  puStack_1c = (undefined1 *)0x49d4c4;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_20 = &LAB_0049d567;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar1 = 1;
  local_10 = (int *)0x0;
  puStack_1c = &stack0xfffffffc;
  FUN_0040a04c(local_c,(int *)&local_18);
  FUN_004096cc(local_18,(int *)&local_14);
  FUN_00404140(local_14,(uint *)&DAT_0049d580);
  if ((bool)uVar1) {
    local_10 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX);
  }
  else {
    FUN_00404140(local_14,(uint *)&DAT_0049d590);
    if ((bool)uVar1) {
      local_10 = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',extraout_ECX_00);
    }
    else {
      FUN_00403d94(" Unhandled case-part");
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0049d56e;
  puStack_20 = (undefined1 *)0x49d556;
  FUN_00403db0((int *)&local_18);
  puStack_20 = (undefined1 *)0x49d55e;
  FUN_00403db0((int *)&local_14);
  puStack_20 = (undefined1 *)0x49d566;
  FUN_00403db0((int *)&local_c);
  return;
}

