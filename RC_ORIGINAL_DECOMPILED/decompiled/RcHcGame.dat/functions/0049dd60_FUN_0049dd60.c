/*
 * FUN_0049dd60 at 0049dd60
 * undefined FUN_0049dd60(void)
 * Address ranges: 0049dd60-0049df23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 8 for .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 8 for
   .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0049dd60(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062caf0;
  local_c = ExceptionList;
  if (*(float *)(param_1 + 0x1fc) <= *(float *)(param_1 + 0x1f8)) {
    ExceptionList = &local_c;
    FUN_005171f0();
    iVar2 = FUN_004337e0();
    if (iVar2 != 0) {
      if (param_2 == 0) {
        puVar8 = &DAT_006920fc;
        puVar7 = &DAT_006920fc;
      }
      else {
        puVar8 = *(undefined1 **)(param_2 + 0x70);
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_0064a3b4;
        }
        puVar7 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_2 + 0x60) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(param_2 + 0x60);
        }
      }
      puVar6 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_1 + 0x70) != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_1 + 0x70);
      }
      puVar3 = *(undefined1 **)(param_1 + 0x60);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      uVar4 = FUN_005ae390(local_2c,s_Actor__s___s__was_destroyed_by___00694ec4,puVar3,puVar6,puVar7
                           ,puVar8);
      local_4 = 0;
      FUN_005aff00(uVar4);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0049d9d0();
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar5 = FUN_005171f0();
  iVar2 = *(int *)(iVar5 + 100);
  if (iVar2 == -0x80000000) {
    puVar8 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar8);
    *(int *)(iVar5 + 100) = iVar2;
  }
  if (iVar2 != 0) {
    if (param_2 == 0) {
      puVar8 = &DAT_006920fc;
      puVar7 = &DAT_006920fc;
    }
    else {
      puVar8 = *(undefined1 **)(param_2 + 0x70);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      puVar7 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_2 + 0x60) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(param_2 + 0x60);
      }
    }
    puVar6 = &DAT_0064a3b4;
    if (*(undefined1 **)(param_1 + 0x70) != (undefined1 *)0x0) {
      puVar6 = *(undefined1 **)(param_1 + 0x70);
    }
    puVar3 = *(undefined1 **)(param_1 + 0x60);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_Actor__s___s__ignores_being_dest_00694e90,puVar3,puVar6,puVar7,
                         puVar8);
    local_4 = 1;
    FUN_005aff00(uVar4);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}

