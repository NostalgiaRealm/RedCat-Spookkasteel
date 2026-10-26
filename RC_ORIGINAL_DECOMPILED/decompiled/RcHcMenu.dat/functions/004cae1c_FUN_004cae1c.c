/*
 * FUN_004cae1c at 004cae1c
 * undefined __register FUN_004cae1c(int param_1, int * param_2, int * param_3, char param_4, byte param_5)
 * Address ranges: 004cae1c-004caed5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cae1c(int param_1,int *param_2,int *param_3,char param_4,byte param_5)

{
  int iVar1;
  HDC pHVar2;
  HIMAGELIST p_Var3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  COLORREF CVar8;
  COLORREF CVar9;
  UINT UVar10;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
      if (iVar1 != 0) {
        iVar1 = FUN_004ca844(param_1,param_5);
        if ((param_4 == '\0') && (param_5 != 3)) {
          UVar10 = 0;
          CVar9 = 0x1fffffff;
          CVar8 = FUN_0041b688(0x8000000f);
          iVar7 = 0;
          iVar6 = 0;
          iVar5 = param_3[1];
          iVar4 = *param_3;
          pHVar2 = (HDC)FUN_0041cf6c(param_2);
          p_Var3 = (HIMAGELIST)FUN_0043e588(*(int **)(param_1 + 8));
          ImageList_DrawEx(p_Var3,iVar1,pHVar2,iVar4,iVar5,iVar6,iVar7,CVar8,CVar9,UVar10);
        }
        else {
          UVar10 = 1;
          CVar9 = 0x1fffffff;
          CVar8 = 0x1fffffff;
          iVar7 = 0;
          iVar6 = 0;
          iVar5 = param_3[1];
          iVar4 = *param_3;
          pHVar2 = (HDC)FUN_0041cf6c(param_2);
          p_Var3 = (HIMAGELIST)FUN_0043e588(*(int **)(param_1 + 8));
          ImageList_DrawEx(p_Var3,iVar1,pHVar2,iVar4,iVar5,iVar6,iVar7,CVar8,CVar9,UVar10);
        }
      }
    }
  }
  return;
}

