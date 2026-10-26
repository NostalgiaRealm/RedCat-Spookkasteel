/*
 * FUN_0041cb7c at 0041cb7c
 * undefined __register FUN_0041cb7c(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * Address ranges: 0041cb7c-0041cbc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cb7c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,0xd);
  RoundRect((HDC)param_1[1],param_2,param_3,param_7,param_6,param_5,param_4);
  (**(code **)(*param_1 + 0xc))();
  return;
}

