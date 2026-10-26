/*
 * FUN_0046a584 at 0046a584
 * undefined __register FUN_0046a584(int * param_1, uint param_2)
 * Address ranges: 0046a584-0046a5d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046a584(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0046a5d3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403fd4(&local_8,&DAT_00570768 + (param_2 & 0xff) * 2);
  (**(code **)(*param_1 + 0xa0))(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046a5da;
  puStack_18 = (undefined1 *)0x46a5d2;
  FUN_00403db0(&local_8);
  return;
}

