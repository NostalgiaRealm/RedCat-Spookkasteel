/*
 * FUN_0051951c at 0051951c
 * undefined __register FUN_0051951c(int param_1, int * param_2, char param_3, char param_4)
 * Address ranges: 0051951c-005196c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051951c(int param_1,int *param_2,char param_3,char param_4)

{
  HDC pHVar1;
  HRGN pHVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  HRGN ho;
  tagRECT *ptVar8;
  UINT UVar9;
  tagRECT local_30;
  int local_20 [4];
  HRGN local_10;
  char local_9;
  uint local_8;
  
  piVar7 = local_20;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *param_2;
    param_2 = param_2 + 1;
    piVar7 = piVar7 + 1;
  }
  ho = (HRGN)0x0;
  uVar6 = (local_20[2] - local_20[0]) - DAT_00574734;
  local_30.left = (int)uVar6 >> 1;
  if (local_30.left < 0) {
    local_30.left = local_30.left + (uint)((uVar6 & 1) != 0);
  }
  local_30.left = local_30.left + local_20[0];
  uVar6 = (local_20[3] - local_20[1]) - DAT_00574734;
  local_30.top = (int)uVar6 >> 1;
  if (local_30.top < 0) {
    local_30.top = local_30.top + (uint)((uVar6 & 1) != 0);
  }
  local_30.top = local_30.top + local_20[1];
  local_30.right = local_30.left + DAT_00574734;
  local_30.bottom = local_30.top + _DAT_00574738;
  if (param_3 == '\0') {
    local_8 = 0;
  }
  else if (param_3 == '\x01') {
    local_8 = 0x400;
  }
  else {
    local_8 = 0x408;
  }
  if (param_4 == '\0') {
    local_8 = local_8 | 0x100;
  }
  piVar7 = *(int **)(param_1 + 0x1f8);
  if (*(char *)(param_1 + 0x239) != '\0') {
    ho = CreateRectRgn(0,0,0,0);
    pHVar2 = ho;
    pHVar1 = (HDC)FUN_0041cf6c(piVar7);
    GetClipRgn(pHVar1,pHVar2);
    pHVar2 = CreateRectRgn(local_30.left + 2,local_30.top + 2,local_30.right + -2,
                           local_30.bottom + -2);
    local_10 = pHVar2;
    pHVar1 = (HDC)FUN_0041cf6c(piVar7);
    SelectClipRgn(pHVar1,pHVar2);
    DeleteObject(local_10);
  }
  UVar9 = 4;
  ptVar8 = &local_30;
  uVar6 = local_8;
  pHVar1 = (HDC)FUN_0041cf6c(piVar7);
  DrawFrameControl(pHVar1,ptVar8,UVar9,uVar6);
  if (*(char *)(param_1 + 0x239) != '\0') {
    pHVar2 = ho;
    pHVar1 = (HDC)FUN_0041cf6c(piVar7);
    SelectClipRgn(pHVar1,pHVar2);
    DeleteObject(ho);
    uVar3 = FUN_0041c42c(piVar7[5]);
    local_9 = (char)uVar3;
    uVar3 = FUN_0041c310(piVar7[5]);
    uVar4 = FUN_0041c02c(piVar7[4]);
    FUN_0041c434((int *)piVar7[5],'\x01');
    FUN_0041c034((int *)piVar7[4],0x80000010);
    FUN_0041cb34(piVar7,local_30.left + 1,local_30.top + 1,local_30.bottom + -1,local_30.right + -1)
    ;
    FUN_0041c434((int *)piVar7[5],local_9);
    FUN_0041c318((int *)piVar7[5],uVar3);
    FUN_0041c034((int *)piVar7[4],uVar4);
  }
  return;
}

