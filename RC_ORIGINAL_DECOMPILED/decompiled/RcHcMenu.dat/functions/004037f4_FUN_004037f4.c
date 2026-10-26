/*
 * FUN_004037f4 at 004037f4
 * undefined4 __register FUN_004037f4(void)
 * Address ranges: 004037f4-00403829
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004037f4(void)

{
  int iVar1;
  code *extraout_ECX;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(uint *)(in_stack_00000004 + 4) & 6) != 0) {
    iVar1 = *(int *)(in_stack_00000008 + 4);
    *(undefined4 *)(in_stack_00000008 + 4) = 0x403824;
    FUN_004034dc(in_stack_00000004,in_stack_00000008,(char *)(iVar1 + 5));
    (*extraout_ECX)();
  }
  return 1;
}

