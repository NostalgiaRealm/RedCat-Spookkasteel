/*
 * FUN_004677b8 at 004677b8
 * undefined4 __register FUN_004677b8(int param_1)
 * Address ranges: 004677b8-004677e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004677b8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_00462204);
  if ((char)uVar2 != '\0') {
    piVar1 = (int *)piVar1[7];
    uVar2 = (**(code **)(*piVar1 + 300))(piVar1,*(undefined1 *)(param_1 + 0x21));
    return uVar2;
  }
  return 0;
}

