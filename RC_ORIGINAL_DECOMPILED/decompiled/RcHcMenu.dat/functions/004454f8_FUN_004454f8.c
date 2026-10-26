/*
 * FUN_004454f8 at 004454f8
 * undefined __register FUN_004454f8(int * param_1, int param_2)
 * Address ranges: 004454f8-0044551d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004454f8(int *param_1,int param_2)

{
  HWND pHVar1;
  
  if (param_1[2] == 0) {
    pHVar1 = FUN_00448574();
    param_1[4] = (int)pHVar1;
  }
  FUN_004121d8(param_1,param_2);
  return;
}

