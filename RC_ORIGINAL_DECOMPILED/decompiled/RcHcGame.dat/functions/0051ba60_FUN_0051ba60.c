/*
 * FUN_0051ba60 at 0051ba60
 * undefined FUN_0051ba60(void)
 * Address ranges: 0051ba60-0051bb67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f5cc slot 12 for .?AVCAdamGameState_GS_LOADING@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f5cc slot 12 for
   .?AVCAdamGameState_GS_LOADING@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0051ba60(int param_1)

{
  int iVar1;
  char cVar2;
  int local_20;
  undefined1 *local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006388d0;
  local_c = ExceptionList;
  local_20 = *(int *)(param_1 + 0xa0);
  if (local_20 != 0) {
    local_10 = (undefined1 *)&local_20;
    ExceptionList = &local_c;
    *(int *)(local_20 + 0x14) = *(int *)(local_20 + 0x14) + 1;
    local_4 = 0;
    FUN_0052b470(&local_14);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00421430();
    cVar2 = FUN_004fbca0();
    local_4 = 0xffffffff;
    if ((local_14 != (undefined1 *)0x0) &&
       (iVar1 = *(int *)(local_14 + 0x14), *(int *)(local_14 + 0x14) = iVar1 + -1, iVar1 + -1 == 0))
    {
      local_20 = 0;
      FUN_005abfc0();
    }
    if (cVar2 == '\0') {
      local_20 = *(int *)(param_1 + 0xa0);
      local_14 = (undefined1 *)&local_20;
      if (local_20 != 0) {
        *(int *)(local_20 + 0x14) = *(int *)(local_20 + 0x14) + 1;
      }
      local_4 = 3;
      FUN_0052b470(&local_10);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_00421430();
      FUN_004fb310();
      local_4 = 0xffffffff;
      if ((local_10 != (undefined1 *)0x0) &&
         (iVar1 = *(int *)(local_10 + 0x14), *(int *)(local_10 + 0x14) = iVar1 + -1, iVar1 + -1 == 0
         )) {
        local_20 = 0;
        FUN_005abfc0();
      }
    }
  }
  ExceptionList = local_c;
  return;
}

