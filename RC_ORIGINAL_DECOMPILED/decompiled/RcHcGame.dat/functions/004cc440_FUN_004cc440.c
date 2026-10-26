/*
 * FUN_004cc440 at 004cc440
 * undefined FUN_004cc440(void)
 * Address ranges: 004cc440-004cc57f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eeb8 slot 4 for .?AVCAdamDoorModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eeb8 slot 4 for
   .?AVCAdamDoorModel@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004cc440(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0060a6f2(param_2,0,&CAdamGO::RTTI_Type_Descriptor,&CAdamPlayer::RTTI_Type_Descriptor,0
                      );
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x16c) == 1)) {
    if (*(char *)(param_1 + 0x17c) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x184) + 0x58) != 0) {
        local_1c[0] = (undefined1)param_2;
        uVar3 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3 - 1;
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        local_10 = 0;
        cVar1 = FUN_00401940(uVar3,1);
        if (cVar1 != '\0') {
          puVar5 = (undefined4 *)&DAT_006b3f70;
          puVar7 = local_18;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          *(undefined1 *)((int)local_18 + uVar3) = 0;
          local_14 = uVar3;
        }
        local_4 = 0;
        FUN_004eed10(6,local_1c,0,0);
        if (local_18 != (undefined4 *)0x0) {
          cVar1 = *(char *)((int)local_18 + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            *(char *)((int)local_18 + -1) = cVar1 + -1;
            ExceptionList = local_c;
            return;
          }
          FUN_005fe5f0((char *)((int)local_18 + -1));
          ExceptionList = local_c;
          return;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x171) = 1;
    }
  }
  ExceptionList = local_c;
  return;
}

