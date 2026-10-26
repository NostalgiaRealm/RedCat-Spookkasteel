/*
 * FUN_0044879c at 0044879c
 * int * __register FUN_0044879c(int * param_1)
 * Address ranges: 0044879c-004487c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0044879c(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  do {
    piVar2 = param_1;
    param_1 = (int *)piVar2[9];
  } while ((int *)piVar2[9] != (int *)0x0);
  uVar1 = FUN_0040320c(piVar2,(int)&PTR_FUN_00446c28);
  if ((char)uVar1 == '\0') {
    return (int *)0x0;
  }
  return piVar2;
}

