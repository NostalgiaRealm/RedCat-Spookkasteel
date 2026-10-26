/*
 * FUN_004f1924 at 004f1924
 * undefined __register FUN_004f1924(undefined4 * param_1, int param_2)
 * Address ranges: 004f1924-004f1987;004f1a01-004f1a51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f1924(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar2;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_20 [4];
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  puStack_130 = &stack0xfffffffc;
  uVar1 = 0;
  local_10 = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  puStack_134 = &LAB_004f1a52;
  puStack_138 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_138;
  puVar2 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[3] != 0) {
    puStack_140 = &LAB_004f1988;
    uVar1 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xfffffebc;
    puVar2 = &LAB_004f183c;
    FUN_0045fd0c((int *)param_1[3],param_2,0,&LAB_004f183c,param_1);
    *in_FS_OFFSET = puVar2;
    puVar2 = puStack_130;
  }
  puStack_130 = puVar2;
  local_8[3] = local_c;
  if (local_8[3] != 0) {
    FUN_0045fcd0(local_8[3],local_c,uVar1,0x4f183c,(int)local_8);
    FUN_004f12dc(local_8);
  }
  *in_FS_OFFSET = puStack_140;
  puStack_138 = &LAB_004f1a59;
  FUN_00403dd4(local_20,2);
  FUN_00403db0(&local_10);
  return;
}

