/*
 * FUN_00412fec at 00412fec
 * undefined __register FUN_00412fec(int param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * Address ranges: 00412fec-0041300b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412fec(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00413014(param_1,param_3);
  (**(code **)(*piVar1 + 0xc))(piVar1,param_4);
  return;
}

