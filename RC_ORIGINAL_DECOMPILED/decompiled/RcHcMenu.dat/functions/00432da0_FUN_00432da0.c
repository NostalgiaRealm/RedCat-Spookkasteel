/*
 * FUN_00432da0 at 00432da0
 * undefined __register FUN_00432da0(int * param_1, char param_2, int param_3)
 * Address ranges: 00432da0-00432e61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432da0(int *param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  tagPOINT tStack_1c;
  LONG LStack_14;
  LONG LStack_10;
  
  uVar1 = FUN_0040320c(param_1,(int)&PTR_FUN_00446c28);
  if (((char)uVar1 != '\0') && (*(char *)((int)param_1 + 0x8b) != '\x01')) {
    piVar2 = FUN_0040cfa8((int *)&DAT_0041071c,'\x01',(undefined4 *)PTR_PTR_00572448);
    FUN_0040382c(piVar2);
  }
  FUN_00433734(param_1);
  if ((DAT_0057375c == 0) || (DAT_0057375c == -1)) {
    DAT_0057375c = 0;
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      GetCursorPos(&tStack_1c);
      FUN_004322b8(param_1,&tStack_1c.x,&LStack_14);
      tStack_1c.x = LStack_14;
      tStack_1c.y = LStack_10;
      uVar1 = FUN_00408584((undefined2 *)&tStack_1c);
      FUN_00433700((int)param_1,0x202,0,uVar1);
    }
    if (param_3 < 0) {
      param_3 = *(int *)(DAT_0057374c + 8);
    }
    if (DAT_0057375c != -1) {
      FUN_00430c94(param_1,param_2,param_3);
    }
  }
  return;
}

