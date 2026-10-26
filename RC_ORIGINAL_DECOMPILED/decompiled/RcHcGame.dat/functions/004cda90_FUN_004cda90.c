/*
 * FUN_004cda90 at 004cda90
 * undefined FUN_004cda90(void)
 * Address ranges: 004cda90-004cdd6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eeb8 slot 6 for .?AVCAdamDoorModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eeb8 slot 6 for
   .?AVCAdamDoorModel@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_004cda90(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630f20;
  local_c = ExceptionList;
  pcVar2 = *(char **)(param_2 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  ExceptionList = &local_c;
  iVar3 = __strcmpi(pcVar2,s_Unlock_00698f4c);
  if (iVar3 == 0) {
    FUN_004cd800(0);
    ExceptionList = local_c;
    return 1;
  }
  pcVar2 = *(char **)(param_2 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar3 = __strcmpi(pcVar2,(char *)&DAT_00698f44);
  if (iVar3 != 0) {
    pcVar2 = *(char **)(param_2 + 4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    iVar3 = __strcmpi(pcVar2,(char *)&DAT_00698f3c);
    if (iVar3 != 0) {
      pcVar2 = *(char **)(param_2 + 4);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = "";
      }
      iVar3 = __strcmpi(pcVar2,s_close_00698f34);
      if (iVar3 != 0) {
        pcVar2 = *(char **)(param_2 + 4);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "";
        }
        iVar3 = __strcmpi(pcVar2,s_disable_0068f0dc);
        if (iVar3 == 0) {
          if (param_3 == 0) {
            puVar8 = &DAT_006920fc;
            puVar7 = &DAT_006920fc;
          }
          else {
            puVar8 = *(undefined1 **)(param_3 + 0x70);
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &DAT_0064a3b4;
            }
            puVar7 = &DAT_0064a3b4;
            if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
              puVar7 = *(undefined1 **)(param_3 + 0x60);
            }
          }
          puVar6 = &DAT_0064a3b4;
          if (*(undefined1 **)(param_1 + 0x70) != (undefined1 *)0x0) {
            puVar6 = *(undefined1 **)(param_1 + 0x70);
          }
          puVar4 = *(undefined1 **)(param_1 + 0x60);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0064a3b4;
          }
          FUN_0060a613(param_1,puVar4,puVar6);
          uVar5 = FUN_0060b060();
          uVar5 = FUN_005ae390(local_1c,s_WARNING___s___s__called__disable_00698ef0,puVar7,puVar8,
                               uVar5);
          local_4 = 0;
          FUN_004c43b0(uVar5);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        else {
          pcVar2 = *(char **)(param_2 + 4);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = "";
          }
          iVar3 = __strcmpi(pcVar2,s_enable_0068f0e4);
          if (iVar3 == 0) {
            if (param_3 == 0) {
              puVar8 = &DAT_006920fc;
              puVar7 = &DAT_006920fc;
            }
            else {
              puVar8 = *(undefined1 **)(param_3 + 0x70);
              if (puVar8 == (undefined1 *)0x0) {
                puVar8 = &DAT_0064a3b4;
              }
              puVar7 = &DAT_0064a3b4;
              if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
                puVar7 = *(undefined1 **)(param_3 + 0x60);
              }
            }
            puVar6 = *(undefined1 **)(param_1 + 0x70);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            puVar4 = *(undefined1 **)(param_1 + 0x60);
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_0064a3b4;
            }
            FUN_0060a613(param_1,puVar4,puVar6);
            uVar5 = FUN_0060b060();
            uVar5 = FUN_005ae390(local_2c,s_WARNING___s___s__called__enable__00698ea8,puVar7,puVar8,
                                 uVar5);
            local_4 = 1;
            FUN_004c43b0(uVar5);
            local_4 = 0xffffffff;
            if (local_28 != 0) {
              cVar1 = *(char *)(local_28 + -1);
              if ((cVar1 == '\0') || (cVar1 == -1)) {
                FUN_005fe5f0((char *)(local_28 + -1));
              }
              else {
                *(char *)(local_28 + -1) = cVar1 + -1;
              }
            }
            local_28 = 0;
            local_24 = 0;
            local_20 = 0;
          }
        }
        uVar5 = FUN_004d1940(param_2,param_3,param_4);
        ExceptionList = local_c;
        return uVar5;
      }
      if (*(int *)(param_1 + 0x16c) != 1) {
        *(undefined4 *)(param_1 + 0x16c) = 7;
      }
      ExceptionList = local_c;
      return 1;
    }
    if (*(int *)(param_1 + 0x16c) != 6) {
      *(undefined4 *)(param_1 + 0x16c) = 3;
    }
    ExceptionList = local_c;
    return 1;
  }
  FUN_004cd800(1);
  ExceptionList = local_c;
  return 1;
}

