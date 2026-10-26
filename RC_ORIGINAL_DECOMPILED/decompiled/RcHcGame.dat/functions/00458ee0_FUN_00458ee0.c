/*
 * FUN_00458ee0 at 00458ee0
 * undefined FUN_00458ee0(void)
 * Address ranges: 00458ee0-00458f8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d5f4 slot 3 for .?AVCRcDop@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d5f4 slot 3 for
   .?AVCRcDop@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00458ee0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_1c [8];
  undefined1 auStack_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar1 = FUN_004bc480();
  }
  iVar3 = *(int *)(iVar1 + 0x5c0);
  if (iVar3 == -0x80000000) {
    puVar2 = *(undefined1 **)(iVar1 + 0x574);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar2);
    *(int *)(iVar1 + 0x5c0) = iVar3;
  }
  if (iVar3 != 0) {
    puVar2 = local_1c;
    local_10 = 0x42c80000;
    local_c = 0x42c80000;
    local_8 = 0x437f0000;
    local_4 = 0;
    uVar4 = (**(code **)(*param_1 + 0x48))(puVar2,&local_10);
    FUN_00554890(uVar4,puVar2);
    puVar2 = &stack0xffffffe0;
    local_8 = 0x437f0000;
    uVar4 = (**(code **)(*param_1 + 0x48))(puVar2,auStack_14);
    FUN_00554890(uVar4,puVar2);
  }
  return;
}

