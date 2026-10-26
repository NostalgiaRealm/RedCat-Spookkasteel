/*
 * FUN_00441490 at 00441490
 * undefined __register FUN_00441490(int param_1)
 * Address ranges: 00441490-004414fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00441490(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int **)(param_1 + 100) != (int *)0x0) &&
     (uVar1 = FUN_0040320c(*(int **)(param_1 + 100),(int)&PTR_FUN_004401c8), (char)uVar1 != '\0')) {
    FUN_00443b08(param_1,'\0');
    FUN_00443fd8(param_1,'\0');
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_00444a50(*(int *)(param_1 + 100));
  }
  FUN_00440cb8(&LAB_00441474,*(int *)(param_1 + 0x5c),param_1);
  return;
}

