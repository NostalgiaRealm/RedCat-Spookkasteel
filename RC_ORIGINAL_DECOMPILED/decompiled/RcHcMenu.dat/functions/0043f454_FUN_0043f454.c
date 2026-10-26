/*
 * FUN_0043f454 at 0043f454
 * undefined __register FUN_0043f454(int param_1, int * param_2)
 * Address ranges: 0043f454-0043f498
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 1 for TDragImageList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 1 for
   TDragImageList. Original bytes unchanged; names and types still inferred. */

void FUN_0043f454(int param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  
  FUN_00419288(param_1,param_2);
  puVar3 = &LAB_0043f7c0;
  pcVar2 = FUN_0043f848;
  iVar4 = param_1;
  bVar1 = FUN_0043f3f8();
  (**(code **)(*param_2 + 8))(param_2,"Bitmap",bVar1,pcVar2,param_1,puVar3,iVar4);
  return;
}

