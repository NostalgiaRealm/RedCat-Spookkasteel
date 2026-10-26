/*
 * FUN_0043a7c0 at 0043a7c0
 * undefined4 __register FUN_0043a7c0(void)
 * Address ranges: 0043a7c0-0043a7e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0043a7c0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x14);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) != 0) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return 1;
}

