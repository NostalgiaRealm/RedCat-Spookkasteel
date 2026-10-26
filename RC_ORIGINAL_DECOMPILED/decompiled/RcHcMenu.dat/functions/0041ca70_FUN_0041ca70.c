/*
 * FUN_0041ca70 at 0041ca70
 * undefined __register FUN_0041ca70(int * param_1, int param_2, int param_3)
 * Address ranges: 0041ca70-0041caa2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ca70(int *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,0xd);
  LineTo((HDC)param_1[1],param_2,param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}

