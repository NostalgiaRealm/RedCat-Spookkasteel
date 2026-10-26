/*
 * FUN_0051c878 at 0051c878
 * undefined4 __register FUN_0051c878(int param_1)
 * Address ranges: 0051c878-0051c89e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0051c878(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x278);
  uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,param_1);
  return uVar2;
}

