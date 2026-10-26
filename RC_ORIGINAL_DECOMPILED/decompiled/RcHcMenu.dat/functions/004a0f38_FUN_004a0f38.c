/*
 * FUN_004a0f38 at 004a0f38
 * undefined __register FUN_004a0f38(undefined4 param_1, uint * param_2)
 * Address ranges: 004a0f38-004a0fc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a0f38(undefined4 param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 local_d;
  uint *local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x4a0f4c;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  bVar1 = true;
  puStack_18 = &LAB_004a0fc6;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_d = 0;
  puStack_14 = &stack0xfffffffc;
  FUN_00404140(local_c,(uint *)&DAT_004a0fdc);
  if (bVar1) {
    local_d = 1;
  }
  else {
    FUN_00404140(local_c,(uint *)&DAT_004a0fec);
    if (bVar1) {
      local_d = 2;
    }
    else {
      FUN_00404140(local_c,(uint *)&DAT_004a0ffc);
      if (bVar1) {
        local_d = 3;
      }
      else {
        FUN_00404140(local_c,(uint *)&DAT_004a100c);
        if (bVar1) {
          local_d = 4;
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004a0fcd;
  puStack_18 = (undefined1 *)0x4a0fc5;
  FUN_00403db0((int *)&local_c);
  return;
}

