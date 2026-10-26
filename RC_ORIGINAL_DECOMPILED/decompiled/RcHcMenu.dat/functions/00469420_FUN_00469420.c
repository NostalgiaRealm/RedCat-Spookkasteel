/*
 * FUN_00469420 at 00469420
 * undefined4 __register FUN_00469420(int param_1)
 * Address ranges: 00469420-0046943c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00469420(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x8c) == 0)) {
    uVar2 = (**(code **)(*piVar1 + 0x138))(piVar1,param_1);
    return uVar2;
  }
  return 0;
}

