/*
 * FUN_0044e3a0 at 0044e3a0
 * undefined4 __register FUN_0044e3a0(void)
 * Address ranges: 0044e3a0-0044e3f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044e3a0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  int *in_stack_0000000c;
  
  cVar1 = IsEqualGUID();
  if ((cVar1 == '\0') && (cVar1 = IsEqualGUID(), cVar1 == '\0')) {
    uVar2 = FUN_0041969c();
    return uVar2;
  }
  FUN_00406ab8(in_stack_0000000c,*(int **)(in_stack_00000004 + 0x238));
  return 0;
}

