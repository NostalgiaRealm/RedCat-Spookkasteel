/*
 * FUN_0046f0ec at 0046f0ec
 * int * __register FUN_0046f0ec(int param_1)
 * Address ranges: 0046f0ec-0046f10d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0046f0ec(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_004667a0);
  if ((char)uVar2 != '\0') {
    return piVar1;
  }
  return (int *)0x0;
}

