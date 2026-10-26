/*
 * FUN_0043f00c at 0043f00c
 * undefined __register FUN_0043f00c(int * param_1, int * param_2)
 * Address ranges: 0043f00c-0043f0c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 2 for TDragImageList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 2 for
   TDragImageList. Original bytes unchanged; names and types still inferred. */

void FUN_0043f00c(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  HIMAGELIST p_Var3;
  COLORREF CVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int cx;
  int cy;
  
  if (param_2 == (int *)0x0) {
    FUN_0043e5ec(param_1);
    return;
  }
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_0043e12c);
  if ((char)uVar2 == '\0') {
    FUN_00412a74(param_1,param_2);
  }
  else {
    FUN_0043ebc4(param_1);
    *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)((int)param_2 + 0x35);
    *(undefined1 *)((int)param_1 + 0x37) = *(undefined1 *)((int)param_2 + 0x37);
    FUN_0043f1f4(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_2[0xd]),extraout_ECX);
    *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)((int)param_2 + 0x36);
    p_Var3 = (HIMAGELIST)FUN_0043e588(param_2);
    FUN_0043e48c((int)param_1,p_Var3);
    bVar1 = FUN_0043e3b4((int)param_1);
    if (bVar1) {
      cy = param_1[9];
      cx = param_1[10];
      p_Var3 = (HIMAGELIST)FUN_0043e588(param_1);
      ImageList_SetIconSize(p_Var3,cx,cy);
    }
    else {
      FUN_0043e3bc(param_1);
    }
    p_Var3 = (HIMAGELIST)FUN_0043e588(param_2);
    CVar4 = ImageList_GetBkColor(p_Var3);
    uVar5 = FUN_0043e1d0(CVar4);
    FUN_0043ebd0(param_1,uVar5);
    param_1[0xf] = param_2[0xf];
    FUN_0043efec(param_1,param_2);
  }
  return;
}

