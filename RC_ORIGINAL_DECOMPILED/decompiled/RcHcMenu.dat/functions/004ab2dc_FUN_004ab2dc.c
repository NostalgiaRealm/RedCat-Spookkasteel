/*
 * FUN_004ab2dc at 004ab2dc
 * undefined __register FUN_004ab2dc(int param_1, undefined4 param_2, undefined * param_3, LPRECT param_4, int * param_5)
 * Address ranges: 004ab2dc-004ab3eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ab2dc(int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4,int *param_5)

{
  LONG *pLVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  LPCSTR lpchText;
  HDC hdc;
  int iVar6;
  LPRECT ptVar7;
  undefined4 uVar8;
  
  uVar3 = FUN_0040320c(param_5,(int)&PTR_FUN_004ac5f0);
  if ((char)uVar3 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  *(int **)(param_1 + 0x128) = param_5;
  piVar4 = (int *)FUN_004ad63c(*(int *)(param_1 + 0x128),5);
  cVar2 = (**(code **)(*piVar4 + 0x1c))();
  if (cVar2 == '\0') {
    uVar8 = 0;
    ptVar7 = param_4;
    piVar4 = (int *)FUN_004ad63c(*(int *)(param_1 + 0x128),5);
    uVar3 = (**(code **)(*piVar4 + 0x20))();
    FUN_00411624(0,0,uVar3,&ptVar7->left,uVar8);
  }
  else {
    FUN_00411624(0,0,param_2,&param_4->left,0);
  }
  FUN_0041ce68(*(int *)(param_1 + 0x120));
  uVar5 = FUN_00434688(param_1);
  uVar5 = uVar5 | 0xc10;
  if ((int)uVar5 < 0) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  iVar6 = -1;
  ptVar7 = param_4;
  lpchText = FUN_004041f4(param_3);
  hdc = (HDC)FUN_0041cf6c(*(int **)(param_1 + 0x120));
  DrawTextA(hdc,lpchText,iVar6,ptVar7,uVar5);
  pLVar1 = &param_4->right;
  iVar6 = *pLVar1;
  *pLVar1 = *pLVar1 + 6;
  if (SCARRY4(iVar6,6)) {
    thunk_FUN_00402874((uint)param_4);
  }
  pLVar1 = &param_4->bottom;
  iVar6 = *pLVar1;
  *pLVar1 = *pLVar1 + 2;
  if (SCARRY4(iVar6,2)) {
    thunk_FUN_00402874((uint)param_4);
  }
  return;
}

