/*
 * FUN_004710dc at 004710dc
 * undefined __register FUN_004710dc(int * param_1)
 * Address ranges: 004710dc-0047111e;00471144-00471149
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004710dc(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4710ee;
  FUN_00419360((int)param_1);
  puStack_1c = &LAB_0047111f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*(char *)((int)param_1 + 0x93) != '\0') {
    puStack_18 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x178))(param_1,1);
  }
  *in_FS_OFFSET = uStack_20;
  return;
}

