/*
 * FUN_0043a034 at 0043a034
 * undefined __register FUN_0043a034(int param_1)
 * Address ranges: 0043a034-0043a0f3;0043a0fb-0043a0ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043a034(int param_1)

{
  UINT flags;
  int cx;
  HICON pHVar1;
  undefined4 *in_FS_OFFSET;
  int cy;
  undefined4 uVar2;
  int cInitial;
  int cGrow;
  POINT local_10;
  HIMAGELIST local_8;
  
  if (*(short *)(param_1 + 0x60) != -1) {
    cGrow = 1;
    cInitial = 0xe;
    flags = (**(code **)PTR_DAT_00572210)();
    cy = 0xd;
    cx = (**(code **)PTR_DAT_00572210)();
    local_8 = ImageList_Create(cx,cy,flags,cInitial,cGrow);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd8;
    pHVar1 = (HICON)FUN_0044f5b8(*(int *)PTR_DAT_005725f0,(int)*(short *)(param_1 + 0x60));
    FUN_0042386c(local_8,pHVar1);
    pHVar1 = (HICON)FUN_0044f5b8(*(int *)PTR_DAT_005725f0,(int)*(short *)(param_1 + 0x60));
    FUN_0042386c(local_8,pHVar1);
    ImageList_SetDragCursorImage(local_8,0,0,0);
    ImageList_GetDragImage((POINT *)0x0,&local_10);
    ImageList_SetDragCursorImage(local_8,1,local_10.x,local_10.y);
    *in_FS_OFFSET = uVar2;
    ImageList_Destroy(local_8);
    return;
  }
  return;
}

