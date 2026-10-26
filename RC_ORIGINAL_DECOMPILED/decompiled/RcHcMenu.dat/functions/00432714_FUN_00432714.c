/*
 * FUN_00432714 at 00432714
 * undefined __register FUN_00432714(int param_1, int * param_2)
 * Address ranges: 00432714-00432742
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432714(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00432688(param_1);
  FUN_00403e98(param_2,(undefined4 *)0x0,uVar1);
  if (uVar1 != 0) {
    FUN_00432698(param_1,*param_2,uVar1 + 1);
  }
  return;
}

