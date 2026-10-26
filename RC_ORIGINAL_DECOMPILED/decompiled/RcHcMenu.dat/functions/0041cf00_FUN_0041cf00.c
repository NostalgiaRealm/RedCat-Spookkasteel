/*
 * FUN_0041cf00 at 0041cf00
 * undefined __register FUN_0041cf00(int * param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 0041cf00-0041cf41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cf00(int *param_1,int param_2,int param_3,uint param_4)

{
  COLORREF color;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,5);
  color = FUN_0041b688(param_4);
  SetPixel((HDC)param_1[1],param_2,param_3,color);
  (**(code **)(*param_1 + 0xc))();
  return;
}

