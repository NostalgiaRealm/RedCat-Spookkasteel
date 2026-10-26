/*
 * FUN_00539690 at 00539690
 * undefined __register FUN_00539690(undefined4 param_1, int param_2)
 * Address ranges: 00539690-005396ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00539690(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (int *)0x0;
  puStack_18 = &LAB_005396ee;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  piVar2 = FUN_00406aa0((int *)&local_10);
  cVar1 = FUN_00403128(*(int **)(local_c + 0x68),(int *)&DAT_005396fc,piVar2);
  if (cVar1 != '\0') {
    (**(code **)(*local_10 + 0x10))(local_10,local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005396f5;
  puStack_18 = (undefined1 *)0x5396ed;
  FUN_00406aa0((int *)&local_10);
  return;
}

