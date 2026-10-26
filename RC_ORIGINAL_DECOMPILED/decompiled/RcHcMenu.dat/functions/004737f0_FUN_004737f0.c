/*
 * FUN_004737f0 at 004737f0
 * undefined __register FUN_004737f0(int * param_1)
 * Address ranges: 004737f0-00473829;00473870-0047387e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004737f0(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_0047382a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00473130(param_1);
  (*in_stack_0000000c)(in_stack_00000010);
  *in_FS_OFFSET = uStack_24;
  return;
}

