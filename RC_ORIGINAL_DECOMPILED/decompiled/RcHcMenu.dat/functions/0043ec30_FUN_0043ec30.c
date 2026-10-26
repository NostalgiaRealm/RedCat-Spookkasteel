/*
 * FUN_0043ec30 at 0043ec30
 * undefined __register FUN_0043ec30(int * param_1, int param_2, int * param_3, char param_4, UINT param_5, int param_6, int param_7)
 * Address ranges: 0043ec30-0043ee06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043ec30(int *param_1,int param_2,int *param_3,char param_4,UINT param_5,int param_6,
                 int param_7)

{
  bool bVar1;
  COLORREF CVar2;
  uint uVar3;
  COLORREF CVar4;
  HDC pHVar5;
  HIMAGELIST p_Var6;
  int *piVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int iVar9;
  int dx;
  int iVar10;
  int dy;
  RECT *pRVar11;
  UINT fStyle;
  RECT local_2c;
  undefined4 local_1c [4];
  HDC local_c;
  int local_8;
  
  local_8 = param_2;
  bVar1 = FUN_0043e3b4((int)param_1);
  if (bVar1) {
    if (param_4 == '\0') {
      if (param_1[0x12] == 0) {
        piVar7 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX);
        param_1[0x12] = (int)piVar7;
        FUN_00422254(piVar7,1);
        (**(code **)(*piVar7 + 0x40))(piVar7,param_1[10]);
        (**(code **)(*piVar7 + 0x34))(piVar7,param_1[9]);
      }
      iVar8 = FUN_00421490((int *)param_1[0x12]);
      FUN_0041c318(*(int **)(iVar8 + 0x14),0xffffff);
      FUN_00411624(0,0,param_1[10],&local_2c.left,param_1[9]);
      pRVar11 = &local_2c;
      piVar7 = (int *)FUN_00421490((int *)param_1[0x12]);
      FUN_0041c9f8(piVar7,pRVar11);
      fStyle = 0;
      CVar4 = 0;
      CVar2 = 0xff000000;
      dy = 0;
      dx = 0;
      iVar10 = 0;
      iVar9 = 0;
      piVar7 = (int *)FUN_00421490((int *)param_1[0x12]);
      pHVar5 = (HDC)FUN_0041cf6c(piVar7);
      iVar8 = local_8;
      p_Var6 = (HIMAGELIST)FUN_0043e588(param_1);
      ImageList_DrawEx(p_Var6,iVar8,pHVar5,iVar9,iVar10,dx,dy,CVar2,CVar4,fStyle);
      FUN_00411624(param_7,param_6,param_7 + param_1[10],local_1c,param_6 + param_1[9]);
      piVar7 = (int *)FUN_00421490((int *)param_1[0x12]);
      local_c = (HDC)FUN_0041cf6c(piVar7);
      FUN_0041c318((int *)param_3[5],0x80000014);
      pHVar5 = (HDC)FUN_0041cf6c(param_3);
      SetTextColor(pHVar5,0xffffff);
      SetBkColor(pHVar5,0);
      BitBlt(pHVar5,param_7 + 1,param_6 + 1,param_1[10],param_1[9],local_c,0,0,0xe20746);
      FUN_0041c318((int *)param_3[5],0x80000010);
      pHVar5 = (HDC)FUN_0041cf6c(param_3);
      SetTextColor(pHVar5,0xffffff);
      SetBkColor(pHVar5,0);
      BitBlt(pHVar5,param_7,param_6,param_1[10],param_1[9],local_c,0,0,0xe20746);
    }
    else {
      CVar2 = FUN_0043e1b0(param_1[0xf]);
      uVar3 = FUN_0043ec08(param_1);
      CVar4 = FUN_0043e1b0(uVar3);
      iVar10 = 0;
      iVar9 = 0;
      pHVar5 = (HDC)FUN_0041cf6c(param_3);
      iVar8 = local_8;
      p_Var6 = (HIMAGELIST)FUN_0043e588(param_1);
      ImageList_DrawEx(p_Var6,iVar8,pHVar5,param_7,param_6,iVar9,iVar10,CVar4,CVar2,param_5);
    }
  }
  return;
}

