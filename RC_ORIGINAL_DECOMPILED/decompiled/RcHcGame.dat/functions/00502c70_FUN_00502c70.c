/*
 * FUN_00502c70 at 00502c70
 * undefined FUN_00502c70(void)
 * Address ranges: 00502c70-00502d41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 17 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 17 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00502c70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635b88;
  *unaff_FS_OFFSET = &local_c;
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
    puVar3 = &DAT_0064a3b4;
    if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(param_2 + 4);
    }
    puVar5 = *(undefined1 **)(param_1 + 0x60);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(local_1c,s_Object___s__executes_command___s_0069dabc,puVar5,puVar3);
    local_4 = 0;
    FUN_005aff00(uVar6);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        *unaff_FS_OFFSET = local_c;
        return;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}

