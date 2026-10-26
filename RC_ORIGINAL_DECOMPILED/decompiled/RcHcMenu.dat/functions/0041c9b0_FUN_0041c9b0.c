/*
 * FUN_0041c9b0 at 0041c9b0
 * undefined __register FUN_0041c9b0(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 0041c9b0-0041c9f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c9b0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,0xd);
  Ellipse((HDC)param_1[1],param_2,param_3,param_5,param_4);
  (**(code **)(*param_1 + 0xc))();
  return;
}

