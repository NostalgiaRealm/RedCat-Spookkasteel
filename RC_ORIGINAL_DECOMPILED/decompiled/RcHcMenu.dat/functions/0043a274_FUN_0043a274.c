/*
 * FUN_0043a274 at 0043a274
 * bool __register FUN_0043a274(int param_1, int param_2, int param_3)
 * Address ranges: 0043a274-0043a2b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0043a274(int param_1,int param_2,int param_3)

{
  bool bVar1;
  BOOL BVar2;
  int local_14;
  int local_10;
  
  bVar1 = FUN_0043e3b4(param_1);
  if (bVar1) {
    FUN_00439fdc(*(HWND *)(param_1 + 100),param_2,param_3,&local_14);
    BVar2 = ImageList_DragMove(local_14,local_10);
    bVar1 = BVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

