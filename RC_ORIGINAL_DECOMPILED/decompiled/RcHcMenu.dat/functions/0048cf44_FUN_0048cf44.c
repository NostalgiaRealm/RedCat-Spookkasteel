/*
 * FUN_0048cf44 at 0048cf44
 * int __register FUN_0048cf44(undefined4 * param_1)
 * Address ranges: 0048cf44-0048cf7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0048cf44(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00474390(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0048cd88);
  *(undefined1 *)(iVar2 + 0x40) = *(undefined1 *)(param_1 + 0x10);
  return iVar2;
}

