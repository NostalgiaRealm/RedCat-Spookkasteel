/*
 * FUN_004d92a0 at 004d92a0
 * undefined FUN_004d92a0(void)
 * Address ranges: 004d92a0-004d9345
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f118 slot 3 for .?AVCAdamPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f118 slot 3 for
   .?AVCAdamPlayer@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004d92a0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
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
    puVar6 = &local_10;
    local_10 = 0x42c80000;
    local_c = 0x42c80000;
    local_8 = 0x437f0000;
    local_4 = 0;
    uVar4 = (**(code **)(*param_1 + 0x48))(local_1c,puVar6);
    FUN_00554890(uVar4,puVar6);
  }
  piVar5 = (int *)FUN_00436db0();
  (**(code **)(*piVar5 + 0x1c))();
  return;
}

