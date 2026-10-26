/*
 * FUN_004325e0 at 004325e0
 * undefined __register FUN_004325e0(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 004325e0-0043262a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004325e0(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 != (int *)param_1[9]) {
    if (param_1 == param_2) {
      piVar1 = FUN_0040cfa8((int *)&DAT_0041071c,'\x01',(undefined4 *)PTR_PTR_00572458);
      FUN_0040382c(piVar1);
      param_3 = extraout_ECX;
    }
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_004356e4((int *)param_1[9],param_1);
      param_3 = extraout_ECX_00;
    }
    if (param_2 != (int *)0x0) {
      FUN_00435610(param_2,param_1,param_3);
      FUN_00431e58((int)param_1);
    }
  }
  return;
}

