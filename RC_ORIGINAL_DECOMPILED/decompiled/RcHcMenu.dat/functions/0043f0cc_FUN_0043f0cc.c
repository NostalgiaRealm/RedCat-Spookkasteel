/*
 * FUN_0043f0cc at 0043f0cc
 * undefined __register FUN_0043f0cc(int * param_1, int * param_2)
 * Address ranges: 0043f0cc-0043f17b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 0 for TDragImageList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 0 for
   TDragImageList. Original bytes unchanged; names and types still inferred. */

void FUN_0043f0cc(int *param_1,int *param_2)

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
  
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_0043e12c);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)((int)param_2 + 0x35) = *(undefined1 *)((int)param_1 + 0x35);
    *(undefined1 *)((int)param_2 + 0x37) = *(undefined1 *)((int)param_1 + 0x37);
    FUN_0043f1f4(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0xd]),extraout_ECX);
    *(undefined1 *)((int)param_2 + 0x36) = *(undefined1 *)((int)param_1 + 0x36);
    param_2[0xf] = param_1[0xf];
    FUN_0043ebc4(param_2);
    p_Var3 = (HIMAGELIST)FUN_0043e588(param_1);
    FUN_0043e48c((int)param_2,p_Var3);
    bVar1 = FUN_0043e3b4((int)param_2);
    if (bVar1) {
      cy = param_2[9];
      cx = param_2[10];
      p_Var3 = (HIMAGELIST)FUN_0043e588(param_2);
      ImageList_SetIconSize(p_Var3,cx,cy);
    }
    else {
      FUN_0043e3bc(param_2);
    }
    p_Var3 = (HIMAGELIST)FUN_0043e588(param_1);
    CVar4 = ImageList_GetBkColor(p_Var3);
    uVar5 = FUN_0043e1d0(CVar4);
    FUN_0043ebd0(param_2,uVar5);
    FUN_0043efec(param_2,param_1);
    return;
  }
  FUN_00412b58(param_1,param_2);
  return;
}

