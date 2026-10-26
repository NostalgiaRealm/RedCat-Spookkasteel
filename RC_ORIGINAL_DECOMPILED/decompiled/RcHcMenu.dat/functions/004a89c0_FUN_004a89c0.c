/*
 * FUN_004a89c0 at 004a89c0
 * undefined __register FUN_004a89c0(int * param_1, char param_2)
 * Address ranges: 004a89c0-004a8a57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a89c0(int *param_1,char param_2)

{
  int iVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4a89cb;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004a8a58;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_9 = extraout_DL;
  if (local_8[0x4a] != 0) {
    iVar1 = local_8[0x4a];
    *(int *)(iVar1 + 0x28) = local_8[0x4c];
    *(int *)(iVar1 + 0x2c) = local_8[0x4d];
    local_8[0x4c] = 0;
    local_8[0x4d] = 0;
    local_8[0x4a] = 0;
    puStack_10 = &stack0xfffffffc;
    FUN_00433700(local_8[0x4a],2,0,0);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004a8a5f;
  puStack_14 = (undefined1 *)0x4a8a57;
  FUN_00439a80(local_8,local_9 & 0xfc);
  return;
}

