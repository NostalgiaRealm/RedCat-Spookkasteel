/*
 * FUN_0043a160 at 0043a160
 * undefined __register FUN_0043a160(int param_1, POINT * param_2)
 * Address ranges: 0043a160-0043a18a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 14 for TDragImageList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 14 for
   TDragImageList. Original bytes unchanged; names and types still inferred. */

void FUN_0043a160(int param_1,POINT *param_2)

{
  bool bVar1;
  
  FUN_0043f210(param_1,&param_2->x);
  bVar1 = FUN_0043e3b4(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x62) != '\0')) {
    ImageList_GetDragImage((POINT *)0x0,param_2);
  }
  return;
}

