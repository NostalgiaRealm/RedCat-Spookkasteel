/*
 * FUN_00502d50 at 00502d50
 * undefined FUN_00502d50(void)
 * Address ranges: 00502d50-00502e30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 1 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 1 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00502d50(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00516470();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    if (param_2 == 0) {
      pcVar6 = s_<null>_00695eac;
    }
    else {
      pcVar6 = "";
      if (*(char **)(param_2 + 0x60) != (char *)0x0) {
        pcVar6 = *(char **)(param_2 + 0x60);
      }
    }
    puVar3 = *(undefined1 **)(param_1 + 0x60);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_1c,s_Object___s__performs_Click_by_ob_0069dae0,pcVar6,puVar3);
    local_4 = 0;
    FUN_005aff00(uVar5);
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

