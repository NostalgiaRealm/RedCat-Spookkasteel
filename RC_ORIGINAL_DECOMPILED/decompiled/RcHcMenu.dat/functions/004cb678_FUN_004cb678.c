/*
 * FUN_004cb678 at 004cb678
 * undefined __register FUN_004cb678(int * param_1)
 * Address ranges: 004cb678-004cb6da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cb678(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  tagPOINT tStack_10;
  
  if ((char)param_1[0x50] != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      GetCursorPos(&tStack_10);
      piVar2 = FUN_00431178(&tStack_10,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
      *(bool *)((int)param_1 + 0x141) = param_1 != piVar2;
      if (param_1 != piVar2) {
        FUN_00433700((int)param_1,0xb014,0,0);
      }
      else {
        FUN_00433700((int)param_1,0xb013,0,0);
      }
    }
  }
  return;
}

