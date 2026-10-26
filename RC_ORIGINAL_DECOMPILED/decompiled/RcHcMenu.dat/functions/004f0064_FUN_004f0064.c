/*
 * FUN_004f0064 at 004f0064
 * undefined __register FUN_004f0064(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 004f0064-004f0099
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f0064(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  
  if ((*(byte *)(param_1 + 8) & 8) == 0) {
    piVar1 = (int *)(**(code **)(*param_1 + 0xd0))();
    (**(code **)(*piVar1 + 0x60))(piVar1,0);
    param_3 = extraout_ECX;
  }
  FUN_004325e0(param_1,param_2,param_3);
  return;
}

