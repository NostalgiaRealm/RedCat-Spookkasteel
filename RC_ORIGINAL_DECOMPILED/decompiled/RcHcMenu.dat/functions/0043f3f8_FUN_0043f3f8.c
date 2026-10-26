/*
 * FUN_0043f3f8 at 0043f3f8
 * bool __register FUN_0043f3f8(void)
 * Address ranges: 0043f3f8-0043f451
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0043f3f8(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    iVar4 = FUN_0043e8ec(*(int **)(in_stack_00000004 + -8));
    return 0 < iVar4;
  }
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  uVar3 = FUN_0040320c(piVar1,(int)&PTR_FUN_0043e12c);
  if (((char)uVar3 != '\0') &&
     (cVar2 = FUN_0043f308(*(int **)(in_stack_00000004 + -8),piVar1), cVar2 != '\0')) {
    return false;
  }
  return true;
}

