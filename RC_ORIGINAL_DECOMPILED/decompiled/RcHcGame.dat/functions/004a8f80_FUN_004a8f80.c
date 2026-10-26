/*
 * FUN_004a8f80 at 004a8f80
 * undefined FUN_004a8f80(void)
 * Address ranges: 004a8f80-004a90f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 6 for .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 6 for
   .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_004a8f80(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062dd48;
  local_c = ExceptionList;
  _Str1 = *(char **)(param_2 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  ExceptionList = &local_c;
  iVar2 = __strcmpi(_Str1,(char *)&DAT_00695eec);
  if (iVar2 != 0) {
    uVar6 = FUN_0049e310(param_2,param_3,param_4);
    ExceptionList = local_c;
    return uVar6;
  }
  iVar3 = FUN_00517f70();
  iVar2 = *(int *)(iVar3 + 100);
  if (iVar2 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar2;
  }
  if (iVar2 != 0) {
    if (param_3 == 0) {
      puVar4 = &DAT_006920fc;
      puVar8 = &DAT_006920fc;
    }
    else {
      puVar4 = *(undefined1 **)(param_3 + 0x70);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      puVar8 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(param_3 + 0x60);
      }
    }
    puVar7 = *(undefined1 **)(param_1 + 0x70);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    puVar5 = *(undefined1 **)(param_1 + 0x60);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    FUN_0060a613(param_1,puVar5,puVar7,puVar8,puVar4);
    uVar6 = FUN_0060b060();
    uVar6 = FUN_005ae390(local_1c,s__s__s___s__is_DROPPED_on_command_00695ec0,uVar6);
    local_4 = 0;
    FUN_005aff00(uVar6);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  FUN_00571140(0,1);
  ExceptionList = local_c;
  return 1;
}

