/*
 * FUN_00436bcc at 00436bcc
 * undefined __register FUN_00436bcc(int * param_1, int * param_2)
 * Address ranges: 00436bcc-00436beb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00436bcc(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004364a8((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}

