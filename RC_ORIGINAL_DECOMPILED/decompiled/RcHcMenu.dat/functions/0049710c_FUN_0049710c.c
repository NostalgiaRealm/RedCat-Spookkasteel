/*
 * FUN_0049710c at 0049710c
 * undefined __register FUN_0049710c(int param_1, undefined4 * param_2)
 * Address ranges: 0049710c-00497186;004971cc-004971e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049710c(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 local_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_14 = 0;
  puStack_124 = (undefined1 *)0x49712b;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_128 = &LAB_004971ea;
  local_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_12c;
  puStack_134 = &LAB_00497187;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_130 = &stack0xfffffffc;
  puStack_124 = &stack0xfffffffc;
  local_10 = FUN_00496f60((int *)&DAT_0048e950,'\x01',*(int *)(local_8 + 4),0,(undefined4 *)0x0);
  FUN_0049708c((int)local_10,local_8);
  FUN_00403e04(local_10 + 3,local_c);
  *in_FS_OFFSET = uStack_138;
  *in_FS_OFFSET = local_12c;
  puStack_124 = &LAB_004971f1;
  puStack_128 = (undefined1 *)0x4971e1;
  FUN_00403db0(&local_14);
  puStack_128 = (undefined1 *)0x4971e9;
  FUN_00403db0((int *)&local_c);
  return;
}

