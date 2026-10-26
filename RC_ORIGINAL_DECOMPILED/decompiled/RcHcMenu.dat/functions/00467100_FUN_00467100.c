/*
 * FUN_00467100 at 00467100
 * undefined __register FUN_00467100(int * param_1)
 * Address ranges: 00467100-0046713c;00467173-00467178
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467100(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x467112;
  FUN_00419360((int)param_1);
  puStack_1c = &LAB_0046713d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    puStack_18 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x48))(param_1,1);
  }
  *in_FS_OFFSET = uStack_20;
  return;
}

