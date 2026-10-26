/*
 * FUN_004a8534 at 004a8534
 * undefined __register FUN_004a8534(int param_1, int * param_2)
 * Address ranges: 004a8534-004a859d;004a85bc-004a85c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a8534(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  if (DAT_00571974 != '\0') {
    puStack_34 = &LAB_004a859e;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    local_c = param_2;
    local_8 = param_1;
    FUN_00402cfc(&local_20,0x14,0);
    local_20 = 0x14;
    local_1c = 0x80e0;
    local_18 = *(undefined4 *)(local_8 + 0x34);
    local_10 = *(undefined4 *)(local_8 + 0x30);
    FUN_004a833c(&local_20,local_c);
    *in_FS_OFFSET = uStack_38;
  }
  return;
}

