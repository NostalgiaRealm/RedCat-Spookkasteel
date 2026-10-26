/*
 * FUN_00409974 at 00409974
 * undefined __register FUN_00409974(int param_1, int * param_2)
 * Address ranges: 00409974-004099a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00409974(int param_1,int *param_2)

{
  uint uVar1;
  
  for (uVar1 = FUN_00404030(param_1); (0 < (int)uVar1 && (*(byte *)(param_1 + -1 + uVar1) < 0x21));
      uVar1 = uVar1 - 1) {
  }
  FUN_00404238(param_1,1,uVar1,param_2);
  return;
}

