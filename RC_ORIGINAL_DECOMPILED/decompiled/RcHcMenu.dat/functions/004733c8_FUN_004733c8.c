/*
 * FUN_004733c8 at 004733c8
 * undefined __register FUN_004733c8(int * param_1)
 * Address ranges: 004733c8-0047344e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004733c8(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4733d8;
  FUN_00473b1c(param_1);
  puStack_10 = (undefined1 *)0x4733e3;
  (**(code **)(*param_1 + 0xfc))();
  puStack_10 = (undefined1 *)0x4733ee;
  (**(code **)(*param_1 + 0x90))();
  puStack_14 = &LAB_0047344f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x1e0))();
  (**(code **)(*param_1 + 0x148))();
  (**(code **)(*param_1 + 0x144))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00473456;
  *(undefined1 *)((int)param_1 + 0x91) = 1;
  puStack_14 = (undefined1 *)0x473443;
  (**(code **)(*param_1 + 0xac))(param_1,2,0);
  puStack_14 = (undefined1 *)0x47344e;
  (**(code **)(*param_1 + 0xd8))();
  return;
}

