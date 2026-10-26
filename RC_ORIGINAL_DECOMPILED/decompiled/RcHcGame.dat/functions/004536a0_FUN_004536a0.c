/*
 * FUN_004536a0 at 004536a0
 * undefined FUN_004536a0(void)
 * Address ranges: 004536a0-00453932
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d330 slot 6 for .?AVCRcHUD@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d330 slot 6 for
   .?AVCRcHUD@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004536a0(int param_1,int param_2)

{
  void **ppvVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *local_28;
  undefined4 *puStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006264d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    ExceptionList = &local_c;
    ppvVar1 = &local_c;
    switch(*(undefined4 *)(param_1 + 0xac)) {
    case 1:
      ExceptionList = &local_c;
      FUN_00452fa0();
      FUN_00453000();
      FUN_00453060();
      FUN_004532e0();
      FUN_00453560();
      break;
    case 2:
      ExceptionList = &local_c;
      FUN_00452fa0();
      ppvVar1 = ExceptionList;
    case 3:
      ExceptionList = ppvVar1;
      FUN_00453000();
      FUN_00453060();
      break;
    case 4:
      ExceptionList = &local_c;
      FUN_00453000();
    }
  }
  if ((*(char *)(param_1 + 0x6a) != '\0') || (*(char *)(param_1 + 0x69) != '\0')) {
    if (*(char *)(param_2 + 0x125) == '\0') {
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      cVar2 = FUN_00401940();
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        for (uVar5 = ~uVar4 - 1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *local_28 = *puVar6;
          puVar6 = puVar6 + 1;
          local_28 = local_28 + 1;
        }
        for (uVar4 = ~uVar4 - 1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_00404190();
      }
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0();
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    if (*(char *)(param_2 + 0x125) == '\0') {
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      cVar2 = FUN_00401940();
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        for (uVar5 = ~uVar4 - 1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puStack_18 = *puVar6;
          puVar6 = puVar6 + 1;
          puStack_18 = puStack_18 + 1;
        }
        for (uVar4 = ~uVar4 - 1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puStack_18 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puStack_18 = (undefined4 *)((int)puStack_18 + 1);
        }
        FUN_00404190();
      }
      local_4 = 1;
      pcVar3 = (code *)FUN_005a07f0();
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    if (*(char *)(param_1 + 0x74) == '\0') {
      param_1 = param_1 + 0x5c;
    }
    else {
      param_1 = param_1 + 0x60;
    }
    FUN_00449760(param_1);
    FUN_005614e0();
  }
  ExceptionList = local_c;
  return;
}

