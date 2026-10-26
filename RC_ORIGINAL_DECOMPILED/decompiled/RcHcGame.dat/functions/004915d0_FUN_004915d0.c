/*
 * FUN_004915d0 at 004915d0
 * undefined FUN_004915d0(void)
 * Address ranges: 004915d0-004916c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e520 slot 1 for .?AVCRcGStateRESULTS@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e520 slot 1 for
   .?AVCRcGStateRESULTS@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004915d0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int unaff_EBX;
  undefined4 uStack_30;
  char *pcStack_2c;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b458;
  pvStack_c = ExceptionList;
  pcStack_2c = s__Debriefing_ini_00693780;
  uStack_30 = 0x4915fd;
  ExceptionList = &pvStack_c;
  uStack_30 = FUN_005a1d60();
  FUN_0040cad0(local_1c);
  local_4 = 0;
  if (DAT_006c8de0 == 0) {
    pcStack_2c = (char *)0x491622;
    FUN_0055b280();
  }
  if ((char)param_2 != '\0') {
    pcStack_2c = (char *)0x491633;
    (**(code **)(*param_1 + 0x2c))();
    pcStack_2c = (char *)0x49163a;
    (**(code **)(*param_1 + 0x24))();
  }
  pcStack_2c = (char *)0x491641;
  (**(code **)(*param_1 + 0x30))();
  pcStack_2c = (char *)param_2;
  uStack_30 = 0x491649;
  FUN_004900d0();
  pcStack_2c = (char *)0x491650;
  FUN_005630f0();
  pcStack_2c = (char *)0x0;
  uStack_30 = 0x491659;
  (**(code **)(*param_1 + 0x34))();
  uStack_30 = 0x491660;
  (**(code **)(*param_1 + 0x28))();
  FUN_0052b470(&uStack_30);
  (**(code **)(*param_1 + 0x10))();
  FUN_005637b0();
  if (unaff_EBX != 0) {
    cVar1 = *(char *)(unaff_EBX + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(unaff_EBX + -1) = cVar1 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    FUN_005fe5f0(unaff_EBX + -1);
  }
  ExceptionList = pvStack_14;
  return;
}

