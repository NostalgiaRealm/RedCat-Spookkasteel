/*
 * FUN_0043f260 at 0043f260
 * undefined FUN_0043f260(void)
 * Address ranges: 0043f260-0043f322
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c758 slot 32 for .?AVCRcItemHealth@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c758 slot 32 for
   .?AVCRcItemHealth@@. Original bytes unchanged; names and types still inferred. */

undefined * __fastcall FUN_0043f260(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624988;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x354);
  if (iVar2 == 0) {
    puVar5 = &DAT_006b5a28;
  }
  else if (iVar2 == 1) {
    puVar5 = &DAT_006b5a00;
  }
  else {
    if (iVar2 != 2) goto LAB_0043f2a7;
    puVar5 = &DAT_006b59d8;
  }
  if (puVar5 != (undefined *)0x0) {
    return puVar5;
  }
LAB_0043f2a7:
  ExceptionList = &local_c;
  uVar3 = FUN_005ae390(local_1c,s_Unknown_health_item_type__i_006909ec,iVar2);
  local_4 = 0;
  pcVar4 = (code *)FUN_005a07f0(s_sound____NULL_006909dc,s_D__Work_RCHorror_RCSource_RcItem_00690b34
                                ,0x98,uVar3);
  (*pcVar4)();
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return (undefined *)0x0;
    }
    FUN_005fe5f0((char *)(iStack_18 + -1));
  }
  ExceptionList = local_c;
  return (undefined *)0x0;
}

