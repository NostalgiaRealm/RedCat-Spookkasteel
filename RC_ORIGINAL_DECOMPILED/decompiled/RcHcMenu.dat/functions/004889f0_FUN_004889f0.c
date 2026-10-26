/*
 * FUN_004889f0 at 004889f0
 * undefined __register FUN_004889f0(int * param_1)
 * Address ranges: 004889f0-00488a4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004889f0(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x488a03;
  (**(code **)(*param_1 + 0x8c))();
  puStack_10 = (undefined1 *)0x488a15;
  (**(code **)(*param_1 + 0x268))(param_1,2,1);
  puStack_14 = &LAB_00488a4d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_004888fc(param_1,0);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00488a54;
  puStack_14 = (undefined1 *)0x488a4c;
  (**(code **)(*param_1 + 0x268))(param_1,2,0);
  return;
}

