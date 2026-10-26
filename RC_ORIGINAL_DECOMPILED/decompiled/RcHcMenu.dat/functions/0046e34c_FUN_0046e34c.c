/*
 * FUN_0046e34c at 0046e34c
 * undefined __register FUN_0046e34c(int param_1, short * param_2)
 * Address ranges: 0046e34c-0046e38e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e34c(int param_1,short *param_2)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0046e38f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00405388(&local_8,param_2);
  FUN_0046e33c(param_1,local_8,extraout_ECX);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046e396;
  puStack_18 = (undefined1 *)0x46e38e;
  FUN_00406aa0(&local_8);
  return;
}

