/*
 * FUN_00432bf4 at 00432bf4
 * undefined __register FUN_00432bf4(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00432bf4-00432c22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432bf4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xac))(piVar1,param_1);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)) {
    FUN_0043262c(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  }
  return;
}

