/*
 * FUN_00439f80 at 00439f80
 * undefined __register FUN_00439f80(int param_1, undefined4 param_2, undefined * param_3, LPRECT param_4)
 * Address ranges: 00439f80-00439fd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00439f80(int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4)

{
  uint uVar1;
  LPCSTR lpchText;
  HDC hdc;
  int cchText;
  LPRECT lprc;
  
  FUN_00411624(0,0,param_2,&param_4->left,0);
  uVar1 = FUN_00434688(param_1);
  uVar1 = uVar1 | 0xc10;
  cchText = -1;
  lprc = param_4;
  lpchText = FUN_004041f4(param_3);
  hdc = (HDC)FUN_0041cf6c(*(int **)(param_1 + 0x1f0));
  DrawTextA(hdc,lpchText,cchText,lprc,uVar1);
  param_4->right = param_4->right + 6;
  param_4->bottom = param_4->bottom + 2;
  return;
}

