/*
 * FUN_0043e54c at 0043e54c
 * undefined __register FUN_0043e54c(int * param_1, HIMAGELIST param_2)
 * Address ranges: 0043e54c-0043e576
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e54c(int *param_1,HIMAGELIST param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_0043e5ec(param_1);
  if (param_2 != (HIMAGELIST)0x0) {
    FUN_0043e48c((int)param_1,param_2);
    param_1[0xc] = (int)param_2;
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}

