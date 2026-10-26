/*
 * FUN_00436bac at 00436bac
 * undefined __register FUN_00436bac(int * param_1, int * param_2)
 * Address ranges: 00436bac-00436bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00436bac(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004364a8((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}

