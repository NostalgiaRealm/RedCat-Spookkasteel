/*
 * FUN_004510ac at 004510ac
 * undefined4 __register FUN_004510ac(int param_1, undefined4 param_2)
 * Address ranges: 004510ac-004510da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004510ac(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1,param_2);
    if (cVar2 != '\0') {
      FUN_00451e78(param_1);
    }
  }
  return 0;
}

