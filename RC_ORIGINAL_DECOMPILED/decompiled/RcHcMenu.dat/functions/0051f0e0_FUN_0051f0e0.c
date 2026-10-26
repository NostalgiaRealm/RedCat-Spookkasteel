/*
 * FUN_0051f0e0 at 0051f0e0
 * undefined __register FUN_0051f0e0(int * param_1)
 * Address ranges: 0051f0e0-0051f122
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051f0e0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0051e1b8(param_1);
  FUN_005249c4(*(int **)(iVar1 + 0x274));
  iVar1 = FUN_0051e1b8(param_1);
  (**(code **)(**(int **)(iVar1 + 0x274) + 0x74))();
  iVar1 = FUN_0051e1b8(param_1);
  (**(code **)(**(int **)(iVar1 + 0x284) + 0x74))();
  return;
}

