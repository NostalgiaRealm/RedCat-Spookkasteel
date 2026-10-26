/*
 * FUN_00553a00 at 00553a00
 * undefined __register FUN_00553a00(int * param_1, int * param_2, LONG * param_3)
 * Address ranges: 00553a00-00553a5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5537e8 slot 48 for TCustomGDICheckBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5537e8 slot 48 for
   TCustomGDICheckBox. Original bytes unchanged; names and types still inferred. */

void FUN_00553a00(int *param_1,int *param_2,LONG *param_3)

{
  char cVar1;
  HDC pHVar2;
  int iVar3;
  tagRECT *ptVar4;
  UINT UVar5;
  UINT UVar6;
  tagRECT local_1c;
  int *local_c;
  int *local_8;
  
  ptVar4 = &local_1c;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar4->left = *param_3;
    param_3 = param_3 + 1;
    ptVar4 = (tagRECT *)&ptVar4->top;
  }
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 == '\0') {
    UVar6 = 0;
    UVar5 = 4;
    ptVar4 = &local_1c;
    pHVar2 = (HDC)FUN_0041cf6c(local_c);
    DrawFrameControl(pHVar2,ptVar4,UVar5,UVar6);
  }
  else {
    UVar6 = 0x400;
    UVar5 = 4;
    ptVar4 = &local_1c;
    pHVar2 = (HDC)FUN_0041cf6c(local_c);
    DrawFrameControl(pHVar2,ptVar4,UVar5,UVar6);
  }
  return;
}

