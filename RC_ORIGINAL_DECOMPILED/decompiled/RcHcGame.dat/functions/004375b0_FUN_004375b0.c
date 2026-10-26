/*
 * FUN_004375b0 at 004375b0
 * undefined FUN_004375b0(void)
 * Address ranges: 004375b0-0043762c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c5b0 slot 3 for .?AVCRcPlayerInput@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c5b0 slot 3 for
   .?AVCRcPlayerInput@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004375b0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_c [12];
  
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  FUN_0060a6f2(iVar2,0,&CAdamApplication::RTTI_Type_Descriptor,&CRCApplication::RTTI_Type_Descriptor
               ,1);
  piVar3 = (int *)FUN_00492360();
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(local_c,param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x28) = *puVar4;
  *(undefined4 *)(param_1 + 0x2c) = puVar4[1];
  *(undefined4 *)(param_1 + 0x30) = puVar4[2];
  uVar1 = (**(code **)(*piVar3 + 0x14))();
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x10))();
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  uVar1 = FUN_00482b80();
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  return;
}

