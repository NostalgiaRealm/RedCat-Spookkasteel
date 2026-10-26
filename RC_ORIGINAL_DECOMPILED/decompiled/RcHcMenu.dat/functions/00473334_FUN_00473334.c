/*
 * FUN_00473334 at 00473334
 * undefined __register FUN_00473334(int * param_1)
 * Address ranges: 00473334-004733ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473334(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x473344;
  FUN_00473b1c(param_1);
  puStack_10 = (undefined1 *)0x47334f;
  (**(code **)(*param_1 + 0xfc))();
  puStack_10 = (undefined1 *)0x47335a;
  (**(code **)(*param_1 + 0x90))();
  puStack_14 = &LAB_004733bb;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x1cc))();
  (**(code **)(*param_1 + 0x140))();
  (**(code **)(*param_1 + 0x13c))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004733c2;
  *(undefined1 *)(param_1 + 0x24) = 1;
  puStack_14 = (undefined1 *)0x4733af;
  (**(code **)(*param_1 + 0xac))(param_1,2,0);
  puStack_14 = (undefined1 *)0x4733ba;
  (**(code **)(*param_1 + 0xd8))();
  return;
}

