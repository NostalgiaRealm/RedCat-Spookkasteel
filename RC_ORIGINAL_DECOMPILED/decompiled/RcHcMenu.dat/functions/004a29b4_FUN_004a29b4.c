/*
 * FUN_004a29b4 at 004a29b4
 * undefined __register FUN_004a29b4(int param_1, undefined4 param_2, undefined * param_3, LPRECT param_4, int * param_5)
 * Address ranges: 004a29b4-004a2ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a27a4 slot 48 for TDaviGraphicHintWindow. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a27a4 slot 48 for
   TDaviGraphicHintWindow. Original bytes unchanged; names and types still inferred. */

void FUN_004a29b4(int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4,int *param_5)

{
  LONG *pLVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  LPCSTR lpchText;
  HDC hdc;
  uint uVar6;
  LPRECT lprc;
  
  if (param_5 == (int *)0x0) {
    FUN_00403d94("Assertion failure");
  }
  uVar2 = FUN_0040320c(param_5,(int)&PTR_FUN_004a1a64);
  if ((char)uVar2 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  piVar3 = FUN_004a2298((int)param_5,6);
  iVar4 = (**(code **)(*piVar3 + 0x20))();
  uVar5 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  FUN_00411624(0,0,param_2,&param_4->left,uVar5);
  piVar3 = *(int **)(*(int *)(param_1 + 0x1f0) + 0xc);
  (**(code **)(*piVar3 + 8))(piVar3,param_5[0x14]);
  uVar5 = FUN_00434688(param_1);
  uVar5 = uVar5 | 0xc10;
  if ((int)uVar5 < 0) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  iVar4 = -1;
  lprc = param_4;
  lpchText = FUN_004041f4(param_3);
  hdc = (HDC)FUN_0041cf6c(*(int **)(param_1 + 0x1f0));
  DrawTextA(hdc,lpchText,iVar4,lprc,uVar5);
  pLVar1 = &param_4->right;
  iVar4 = *pLVar1;
  *pLVar1 = *pLVar1 + 6;
  if (SCARRY4(iVar4,6)) {
    thunk_FUN_00402874((uint)param_4);
  }
  piVar3 = FUN_004a2298((int)param_5,6);
  iVar4 = (**(code **)(*piVar3 + 0x20))();
  uVar5 = iVar4 + param_4->top;
  if (SCARRY4(iVar4,param_4->top)) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  uVar6 = uVar5 - 1;
  if (SBORROW4(uVar5,1)) {
    uVar6 = thunk_FUN_00402874(uVar6);
  }
  param_4->bottom = uVar6;
  pLVar1 = &param_4->bottom;
  iVar4 = *pLVar1;
  *pLVar1 = *pLVar1 + -1;
  if (SBORROW4(iVar4,1)) {
    thunk_FUN_00402874((uint)param_4);
  }
  return;
}

