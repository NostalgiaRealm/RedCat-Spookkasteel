/*
 * FUN_0041cb34 at 0041cb34
 * undefined __register FUN_0041cb34(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 0041cb34-0041cb74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cb34(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,0xd);
  Rectangle((HDC)param_1[1],param_2,param_3,param_5,param_4);
  (**(code **)(*param_1 + 0xc))();
  return;
}

