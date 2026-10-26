/*
 * FUN_0041cafc at 0041cafc
 * undefined __register FUN_0041cafc(int * param_1, POINT * param_2, int param_3)
 * Address ranges: 0041cafc-0041cb2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cafc(int *param_1,POINT *param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,0xd);
  Polyline((HDC)param_1[1],param_2,param_3 + 1);
  (**(code **)(*param_1 + 0xc))();
  return;
}

