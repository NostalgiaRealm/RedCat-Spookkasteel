/*
 * FUN_00413598 at 00413598
 * byte __register FUN_00413598(void)
 * Address ranges: 00413598-004135ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_00413598(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000004;
  
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x14))();
    bVar2 = 0 < iVar4;
  }
  else {
    bVar2 = 1;
    uVar3 = FUN_0040320c(piVar1,(int)&PTR_FUN_00410b88);
    if ((char)uVar3 != '\0') {
      bVar2 = FUN_00413650(*(int **)(in_stack_00000004 + -8),piVar1);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}

