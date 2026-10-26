/*
 * FUN_004c8514 at 004c8514
 * undefined __register FUN_004c8514(int * param_1)
 * Address ranges: 004c8514-004c858c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c8514(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  tagPOINT local_10;
  int *local_8;
  
  if (*(char *)((int)param_1 + 0x133) != '\0') {
    local_8 = param_1;
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      GetCursorPos(&local_10);
      piVar2 = FUN_00431178(&local_10,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
      *(bool *)((int)local_8 + 0x145) = piVar2 != local_8;
      if (*(char *)((int)local_8 + 0x145) == '\0') {
        FUN_00433700((int)local_8,0xb013,0,0);
      }
      else {
        FUN_00433700((int)local_8,0xb014,0,0);
      }
    }
  }
  return;
}

