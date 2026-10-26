/*
 * FUN_004326cc at 004326cc
 * undefined __register FUN_004326cc(int * param_1, int * param_2)
 * Address ranges: 004326cc-004326ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004326cc(int *param_1,int *param_2)

{
  undefined4 extraout_ECX;
  
  param_1[0x1b] = (int)param_2;
  if (param_2 != (int *)0x0) {
    FUN_00444e18(param_2,param_1);
    FUN_00418fe0((int)param_2,(int)param_1,extraout_ECX);
  }
  return;
}

