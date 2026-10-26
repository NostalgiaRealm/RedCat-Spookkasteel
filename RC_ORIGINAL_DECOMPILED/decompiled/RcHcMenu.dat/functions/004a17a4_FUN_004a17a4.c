/*
 * FUN_004a17a4 at 004a17a4
 * bool __register FUN_004a17a4(void)
 * Address ranges: 004a17a4-004a1802
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004a17a4(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int in_stack_00000004;
  bool local_5;
  
  local_5 = true;
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) != 0) {
    local_5 = false;
    uVar1 = FUN_0040320c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x20),(int)&PTR_FUN_004a0d80);
    uVar3 = (char)uVar1 == '\0';
    if (!(bool)uVar3) {
      iVar2 = FUN_00403224(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x20),(int)&PTR_FUN_004a0d80
                          );
      FUN_00404140(*(uint **)(*(int *)(in_stack_00000004 + -8) + 8),*(uint **)(iVar2 + 8));
      local_5 = !(bool)uVar3;
    }
  }
  return local_5;
}

