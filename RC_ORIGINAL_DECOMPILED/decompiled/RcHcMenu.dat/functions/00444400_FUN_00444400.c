/*
 * FUN_00444400 at 00444400
 * bool __register FUN_00444400(int param_1)
 * Address ranges: 00444400-0044441b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00444400(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00444360(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x40))();
  }
  return piVar1 != (int *)0x0;
}

