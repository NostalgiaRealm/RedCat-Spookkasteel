/*
 * FUN_0046c2b4 at 0046c2b4
 * undefined __register FUN_0046c2b4(int * param_1, int * param_2)
 * Address ranges: 0046c2b4-0046c2f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046c2b4(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0046c2f7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00469028(param_1,&local_8);
  FUN_00403e04(param_2,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046c2fe;
  puStack_18 = (undefined1 *)0x46c2f6;
  FUN_00403db0((int *)&local_8);
  return;
}

